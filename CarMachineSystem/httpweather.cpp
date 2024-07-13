#include "httpweather.h"
#include "ui_httpweather.h"

#include <QJsonArray>
#include <QJsonObject>
#include <QJsonParseError>
#include <QNetworkReply>
#include <QDateTime>

HttpWeather::HttpWeather(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HttpWeather)
{
    ui->setupUi(this);
    HttpWeather::RTS();
    //发送请求头后，接受数据，结束后服务端发送finished信号
    connect(&manager,&QNetworkAccessManager::finished,this,&HttpWeather::read_data);    //关联获取Http答复信息
    connect(&mtimer,&QTimer::timeout,this,&HttpWeather::update_Timer);                  //关联时间更新槽函数，信号定时器
    //启动定时器
    mtimer.start(1000);
}

HttpWeather::~HttpWeather()
{
    delete ui;
}

void HttpWeather::RTS() //发送请求函数
{
    QNetworkRequest request;        //创建请求头
    //编辑URL
    //http://api.seniverse.com/v3/weather/now.json?key=SbslwZ6X47ih3u-bX&location=guangzhou&language=zh-Hans&unit=c //老师的API接口
    QUrl url(QString("https://api.seniverse.com/v3/weather/now.json?key=Si42Ix8jlAz7oEo64&location=guangzhou&language=zh-Hans&unit=c"));
    //将URL存入请求头中
    request.setUrl(url);
    //发送请求头
    manager.get(request);
}

void HttpWeather::read_data(QNetworkReply* reply)   //PS:这里需要一个QNetworkReply的参数，用来获取数据
{
    QByteArray array = reply->readAll();
    // qDebug()<<QString(array);

    //获取Json格式数据
    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(array,&err);
    if(err.error!=QJsonParseError::NoError)
    {
        qDebug()<<"json err";
    }
    /*QJsonDocument::fromJson(array, &err)：
    * 将 QByteArray 数据解析为 QJsonDocument 对象，如果解析失败，错误信息会存储在 err 中。
    检查 err 是否有错误，如果有，则输出错误信息。*/

    //解析json格式数据
    QJsonObject obj1 = doc.object();                            //获取 JSON 文档的根对象。
    QJsonArray  resultsArray = obj1.value("results").toArray(); //获取根对象中的 results 数组。
    for(int i=0; i<resultsArray.count(); i++)                   //循环遍历 results 数组中的每个对象
    {
        //获取数组中的对象
        QJsonObject arrayObj = resultsArray.at(i).toObject();   //获取数组中的第 i 个对象
        //获取now对应的value
        QJsonObject nowObj = arrayObj.value("now").toObject();  //获取对象中的 now 对象
        // qDebug()<<nowObj.value("text").toString();
        // qDebug()<<nowObj.value("code").toString();
        // qDebug()<<nowObj.value("temperature").toString();
        //显示在UI界面上
        ui->tempLb->setText(nowObj.value("temperature").toString()+"℃");
        QString area = "广州 | ";
        QString code = nowObj.value("text").toString();;
        ui->areaLb->setText(area+code);
        //输出 now 对象中的 text、code 和 temperature 值，分别表示天气描述、天气代码和温度。

        HttpWeather::show_Pic(nowObj.value("code").toString().toInt());
    }
}

void HttpWeather::show_Pic(int num)
{
    //显示图片
    QString filename ;          //图片路径
    switch (num)
    {
    case 0:
        filename= ":/white/0@2x.png";
        break;
    case 1:
        filename= ":/white/1@2x.png";
        break;
    case 2:
        filename= ":/white/2@2x.png";
        break;
    case 3:
        filename= ":/white/3@2x.png";
        break;
    case 4:
        filename= ":/white/4@2x.png";
        break;
    case 5:
        filename= ":/white/5@2x.png";
        break;
    case 6:
        filename= ":/white/6@2x.png";
        break;
    case 7:
        filename= ":/white/7@2x.png";
        break;
    case 8:
        filename= ":/white/8@2x.png";
        break;
    case 9:
        filename= ":/white/9@2x.png";
        break;
    case 10:
        filename= ":/white/10@2x.png";
        break;
    case 11:
        filename= ":/white/11@2x.png";
        break;
    case 12:
        filename= ":/white/12@2x.png";
        break;
    case 13:
        filename= ":/white/13@2x.png";
        break;
    case 14:
        filename= ":/white/14@2x.png";
        break;
    case 15:
        filename= ":/white/15@2x.png";
        break;
    case 16:
        filename= ":/white/16@2x.png";
        break;
    case 17:
        filename= ":/white/17@2x.png";
        break;
    case 18:
        filename= ":/white/18@2x.png";
        break;
    case 19:
        filename= ":/white/19@2x.png";
        break;
    case 20:
        filename= ":/white/20@2x.png";
        break;
    case 21:
        filename= ":/white/21@2x.png";
        break;
    case 22:
        filename= ":/white/22@2x.png";
        break;
    case 23:
        filename= ":/white/23@2x.png";
        break;
    case 24:
        filename= ":/white/24@2x.png";
        break;
    case 25:
        filename= ":/white/25@2x.png";
        break;
    default:
        filename= ":/white/99@2x.png";
        break;
    }
    m_pixmap.load(filename);            //获取图片
    int H = ui->PicLb->height();        //获取PicLb显示框的高

    //显示比例
    // int realH = m_pixmap.height();
    // m_ratio = float(H) / realH;
    // qDebug()<<100*m_ratio;

    QPixmap pix = m_pixmap.scaledToHeight(H+50);
    ui->PicLb->setPixmap(pix);
}

void HttpWeather::update_Timer()
{
    //显示系统时间 -日期
    QString datastr =  QDate::currentDate().toString("yyyy-MM-dd");
    ui->dataLb->setText(datastr);
    //显示时间
    QString timestr = QTime::currentTime().toString("hh:mm");
    ui->timeLb->setText(timestr);

    HttpWeather::show_Week();
}

//显示星期几
void HttpWeather::show_Week()
{
    QDate  weekstr = QDate::currentDate();
    int dayofWeek = weekstr.dayOfWeek();
    // qDebug()<<dayofWeek;

    switch (dayofWeek) {
    case 1:
        ui->weekLb->setText("星期一");
        break;
    case 2:
        ui->weekLb->setText("星期二");
        break;
    case 3:
        ui->weekLb->setText("星期三");
        break;
    case 4:
        ui->weekLb->setText("星期四");
        break;
    case 5:
        ui->weekLb->setText("星期五");
        break;
    case 6:
        ui->weekLb->setText("星期六");
        break;
    case 7:
        ui->weekLb->setText("星期天");
        break;
    default:
        ui->weekLb->setText("异常");
        break;
    }
}
