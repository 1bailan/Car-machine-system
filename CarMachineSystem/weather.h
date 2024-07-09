#ifndef WEATHER_H
#define WEATHER_H

class Weather : public QWidget
{
    Q_OBJECT
public:
    explicit Weather(QWidget *parent = nullptr);

signals:

protected slots:
    void read_data(QNetworkReply *reply);
private:
    QNetworkAccessManager  manager;
};

#endif // WEATHER_H
