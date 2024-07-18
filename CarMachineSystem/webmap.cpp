#include "webmap.h"
#include "ui_webmap.h"
#include <QMessageBox>

Webmap::Webmap(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Webmap)
{
    ui->setupUi(this);
    qputenv("QTWEBENGINE_REMOTE_DEBUGGING", "7777");
    webObj = new WebClass();
    webView = ui->webView;
    webChannel = new QWebChannel();
    webView->load(QUrl("qrc:/tmep/mymap_2.html"));
    webChannel->registerObject("webObj", webObj);
    webView->page()->setWebChannel(webChannel);

    connect(webObj, &WebClass::curCityChanged, this, [this]() {
        ui->curCityLb->setText(webObj->curCity());
    });

    connect(ui->postionSreachEdit, &QLineEdit::textEdited, this, [this]() {
        QString script = QString("mySreachPostion('%1');").arg(ui->postionSreachEdit->text());
        webView->page()->runJavaScript(script);
    });

    connect(webObj, &WebClass::searchResultChanged, this, [this]() {
        setPositionList(webObj->searchResult());
    });
}

Webmap::~Webmap()
{
    delete ui;
}


void Webmap::setPositionList(const QJsonObject &searchResult)
{
    ui->positionListWidget->clear();
    // 获取 "tips" 数组
    QJsonArray tipsArray = searchResult["tips"].toArray();

    // 遍历 "tips" 数组
    for (const QJsonValue &value : tipsArray) {
        QJsonObject tipObject = value.toObject();
        QString name = tipObject["name"].toString();  // 获取 "name" 字段
        ui->positionListWidget->addItem(name);  // 添加到 QListWidget
    }
}

void Webmap::on_setCityBt_clicked()
{
    QString city = ui->cityNameEdit->text().trimmed();
    if(city.isEmpty())
    {
        QMessageBox::information(this, "Note", "Please input a city");
        return;
    }
    webObj->setCity(city);
}


void Webmap::on_startNavBt_clicked()
{
    if(ui->startNavBt->text() == "开始导航")
    {
        if(ui->startPostionEdit->text().isEmpty() || ui->endPostionEdit->text().isEmpty() ||
            startPoint.first == -1.f || startPoint.second == -1.f ||
            endPoint.first == -1.f || endPoint.second == -1.f)
        {
            QMessageBox::information(this, "Note", "Please set the start and end points");
            return;
        }
        QString script = QString("planDrivingRoute([%1, %2], [%3, %4]);")
                             .arg(startPoint.first).arg(startPoint.second)
                             .arg(endPoint.first).arg(endPoint.second);
        webView->page()->runJavaScript(script);
        ui->startNavBt->setText("停止导航");
    }
    else
    {
        ui->startNavBt->setText("开始导航");
        QString script = QString("driving.clear();").arg(ui->postionSreachEdit->text());
        webView->page()->runJavaScript(script);
    }
}


void Webmap::on_setStartPostionBt_clicked()
{
    int selectedIndex = -1;
    startPoint = {-1.f, -1.f};
    QListWidgetItem* currentItem = ui->positionListWidget->currentItem();
    if (currentItem) {
        // 获取选中项的文本
        QString selectedText = currentItem->text();
        // 获取选中项的索引
        selectedIndex = ui->positionListWidget->currentRow();
        // 将选中项的文本设置到 QLineEdit 中
        ui->startPostionEdit->setText(selectedText);

        // 获取 "tips" 数组
        QJsonArray tipsArray = webObj->searchResult()["tips"].toArray();
        // 遍历 "tips" 数组
        int index = 0;
        for (const QJsonValue &value : tipsArray) {
            if(index == selectedIndex)
            {
                QJsonObject tipObject = tipsArray[index].toObject();
                QJsonObject locationObject = tipObject["location"].toObject();
                float lng = locationObject["lng"].toDouble();
                float lat = locationObject["lat"].toDouble();
                startPoint.first = lng;
                startPoint.second = lat;
            }
            index++;
        }
    } else {
        // 如果没有选中项，可以设置一个提示或处理逻辑
        ui->startPostionEdit->setText("未选择任何项");
    }
    qDebug() << "[起点] 当前被选中项: " << selectedIndex;
    qDebug() << "startPoint" << startPoint;

}


void Webmap::on_setEndPostionBt_clicked()
{
    int selectedIndex = -1;
    endPoint = {-1.f, -1.f};
    QListWidgetItem* currentItem = ui->positionListWidget->currentItem();
    if (currentItem) {
        // 获取选中项的文本
        QString selectedText = currentItem->text();
        // 获取选中项的索引
        selectedIndex = ui->positionListWidget->currentRow();
        // 将选中项的文本设置到 QLineEdit 中
        ui->endPostionEdit->setText(selectedText);
        // 获取 "tips" 数组
        QJsonArray tipsArray = webObj->searchResult()["tips"].toArray();
        // 遍历 "tips" 数组
        int index = 0;
        for (const QJsonValue &value : tipsArray) {
            if(index == selectedIndex)
            {
                QJsonObject tipObject = tipsArray[index].toObject();
                QJsonObject locationObject = tipObject["location"].toObject();
                float lng = locationObject["lng"].toDouble();
                float lat = locationObject["lat"].toDouble();
                endPoint.first = lng;
                endPoint.second = lat;
            }
            index++;
        }
    } else {
        // 如果没有选中项，可以设置一个提示或处理逻辑
        ui->endPostionEdit->setText("未选择任何项");
    }
    qDebug() << "[终点] 当前被选中项: " << selectedIndex;
    qDebug() << "endPoint" << endPoint;
}



void Webmap::on_closeBt_clicked()
{
    emit release();     // 释放信号
    this->hide();
}

