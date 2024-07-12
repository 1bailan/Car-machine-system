#ifndef SETBT_H
#define SETBT_H

#include "appbt.h"

class SetBt : public AppBt
{
    Q_OBJECT

public:
    explicit SetBt(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

signals:
    void pressed();
    void release();
};

#endif // SETBT_H
