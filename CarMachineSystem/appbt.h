#ifndef APPBT_H
#define APPBT_H

#include <QWidget>

namespace Ui {
class AppBt;
}

class AppBt : public QWidget
{
    Q_OBJECT

public:
    explicit AppBt(QWidget *parent = nullptr);
    ~AppBt();
    void setAppName( QString &name);
protected:
    void setAppName(const QString &name);
    void setAppPic(const QString filename);
private:
    Ui::AppBt *ui;

};

#endif // APPBT_H
