#include "weather.h"
#include "ui_weather.h"

#include <QNetworkRequest>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonParseError>

Weather::Weather(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Weather)
{
    ui->setupUi(this);

    connect(&manager,&QNetworkAccessManager::finished,this,&Weather::read_data);

    QNetworkRequest request;        //创建请求头
    //编辑URL
    QUrl url(QString("http://api.seniverse.com/v3/weather/now.json?key=SbslwZ6X47ih3u-bX&location=%1&language=zh-Hans&unit=c").arg(ui->addressEdit->text()));
    //将URL存入请求头中
    request.setUrl(url);
    //发送请求头
    manager.get(request);
}

Weather::~Weather()
{
    delete ui;
}

void Weather::read_data(QNetworkReply* reply)
{
    QByteArray array = reply->readAll();
    qDebug()<<QString(array);

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
        qDebug()<<nowObj.value("text").toString();
        qDebug()<<nowObj.value("code").toString();
        qDebug()<<nowObj.value("temperature").toString();
        //输出 now 对象中的 text、code 和 temperature 值，分别表示天气描述、天气代码和温度。
    }
}
