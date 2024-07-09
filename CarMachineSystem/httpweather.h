#ifndef HTTPWEATHER_H
#define HTTPWEATHER_H

#include <QNetworkAccessManager>
#include <QWidget>
#include <QTimer>

namespace Ui {
class HttpWeather;
}

class HttpWeather : public QWidget
{
    Q_OBJECT

public:
    explicit HttpWeather(QWidget *parent = nullptr);
    ~HttpWeather();

protected:
    void showTime();                //显示时间

    void show_Pic(int num);         //显示图片

    void show_Week();               //显示星期几
protected slots:
    void read_data(QNetworkReply *reply);   //读取回答数据

    void update_Timer();                    //更新时间
private:
    Ui::HttpWeather *ui;
    QNetworkAccessManager  manager;     //Http对象
    QPixmap m_pixmap;                   //当前天气图片
    float m_ratio;                      //当前图片的缩放比例
    QTimer mtimer;                      //定时器对象（显示时间）

    void RTS();                         //发送请求函数
};



#endif // HTTPWEATHER_H
