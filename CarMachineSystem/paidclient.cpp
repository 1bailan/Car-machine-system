#include "paid.h"
#include "paidclient.h"
#include "ui_paidclient.h"

#include <QCryptographicHash>
#include <QPixmap>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QMessageBox>

PaidClient::PaidClient(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PaidClient)
{
    QPixmap  bkgnd(":/UI/login.png");  // 确保图片在资源文件中正确配置
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);  // 使用 QPalette::Window 替换 QPalette::Background
    this->setPalette(palette);

    //设置窗口画面大小固定
    setMinimumSize(800, 480);
    setMaximumSize(800, 480);

    ui->setupUi(this);

    connect(ui->loginBt,&QPushButton::clicked,this,&PaidClient::handleLogin);
}

PaidClient::~PaidClient()
{
    delete ui;
}


void PaidClient::on_quitBt_clicked()
{
    emit release();     // 释放信号
    this->hide();
}


void PaidClient::on_loginBt_clicked()
{
    QString username = ui->userLd->text();
    QString password = ui->passLd->text();
    this->flag = 0;

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox msgBox;
        msgBox.setText("用户名和密码不能为空！");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setFixedSize(300, 150);
        msgBox.exec();
        flag = 0;
        return;
    }

    // 密码加密
    QCryptographicHash hash(QCryptographicHash::Md5);   // QT自带了加密方式
    hash.addData(password.toUtf8());                    // 添加明文数据
    QByteArray hasharray = hash.result();               // 获取加密后的数据16字节
    QString md5pwd = hasharray.toHex();                 // 把加密后的数据转十六进制

    QString selectsql = QString("select * from user where username='%1' and password='%2'")
                            .arg(username).arg(md5pwd);
    QSqlQuery query;
    if (!query.exec(selectsql)) {
        qDebug() << "Failed to query user:" << query.lastError().text();
    }
    else
    {
        if (query.next()) { // 获取下一条数据，如有数据就返回true，如没有数据就返回false
            QSqlRecord record = query.record();
            qDebug() << record.value("username").toString() << record.value("password").toString();
            qDebug() << "登录成功";
            // QMessageBox msgBox;
            // msgBox.setText("登录成功！");
            // msgBox.setIcon(QMessageBox::Information);
            // msgBox.setFixedSize(300, 150);
            // msgBox.exec();
        } else {
            qDebug() << "登录失败";
            QMessageBox msgBox;
            msgBox.setText("用户名或密码错误！");
            msgBox.setIcon(QMessageBox::Warning);
            msgBox.setFixedSize(300, 150);
            msgBox.exec();
            flag = 0;
            return;
        }
    }
    flag = 1;
    return;
}

void PaidClient::on_registerBt_clicked() {
    this->username = ui->userLd->text();
    QString password = ui->passLd->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox msgBox;
        msgBox.setText("用户名和密码不能为空！");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setFixedSize(300, 150);
        msgBox.exec();
        return;
    }

    // 先检查用户名是否已经存在
    QString checkUserSql = QString("select * from user where username='%1'").arg(username);
    QSqlQuery checkQuery;
    if (!checkQuery.exec(checkUserSql)) {
        qDebug() << "Failed to query user:" << checkQuery.lastError().text();
        return;
    }

    if (checkQuery.next()) { // 如果有数据，则表示用户名已经存在
        QMessageBox msgBox;
        msgBox.setText("用户名已经被注册！");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setFixedSize(300, 150);
        msgBox.exec();
        return;
    }

    // 密码加密
    QCryptographicHash hash(QCryptographicHash::Md5);   // QT自带了加密方式
    hash.addData(password.toUtf8());                    // 添加明文数据
    QByteArray hasharray = hash.result();               // 获取加密后的数据16字节
    QString md5pwd = hasharray.toHex();                 // 把加密后的数据转十六进制
    qDebug() << password << md5pwd;

    QString insertsql = QString("insert into user(username, password) values('%1','%2')")
                            .arg(username).arg(md5pwd);
    QSqlQuery query;
    if (!query.exec(insertsql)) {
        qDebug() << query.lastError().text();
    } else {
        qDebug() << "注册成功";
        QMessageBox registerYes(QMessageBox::Question, " 提示 ", "注册成功");
        registerYes.addButton("确认", QMessageBox::AcceptRole);
        registerYes.setFixedSize(300, 150);

        int ret = registerYes.exec();
        if (ret == QMessageBox::AcceptRole) {
            // 可以在这里执行需要的操作
        }
    }
}

void PaidClient::handleLogin()
{
    Paid * paid = new Paid(this);

    paid->setInfo(this->username);      //传参正向传递

    connect(paid,&Paid::quit,this,&PaidClient::on_quitBt_clicked);

    if(this->flag)
    {
        paid->show();

        this->hide();
    }
}

