#ifndef PLAYVIDEO_H
#define PLAYVIDEO_H

#include <QWidget>




namespace Ui {
class playVideo;
}

class playVideo : public QWidget
{
    Q_OBJECT

public:
    explicit playVideo(QWidget *parent = nullptr);
    ~playVideo();

private:
    Ui::playVideo *ui;
};

#endif // PLAYVIDEO_H
