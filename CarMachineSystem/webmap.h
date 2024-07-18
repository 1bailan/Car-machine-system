#ifndef WEBMAP_H
#define WEBMAP_H

#include <QMainWindow>
#include <QWebChannel>
#include <QWebEngineView>
#include "webclass.h"

namespace Ui {
class Webmap;
}

class Webmap : public QMainWindow
{
    Q_OBJECT

public:
    explicit Webmap(QWidget *parent = nullptr);
    ~Webmap();

    void setPositionList(const QJsonObject &searchResult);
private slots:
    void on_setCityBt_clicked();

    void on_startNavBt_clicked();

    void on_setStartPostionBt_clicked();

    void on_setEndPostionBt_clicked();

    void on_closeBt_clicked();

signals:
    void release();
private:
    Ui::Webmap *ui;
    WebClass *webObj;
    QWebEngineView *webView;
    QWebChannel *webChannel;
    QPair<float, float> startPoint{-1.f, -1.f};
    QPair<float, float> endPoint{-1.f, -1.f};

};

#endif // WEBMAP_H
