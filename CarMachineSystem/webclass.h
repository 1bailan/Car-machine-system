#ifndef WEBCLASS_H
#define WEBCLASS_H

#include <QObject>
#include <QDebug>
#include <QJsonObject>
#include <QJsonArray>

class WebClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString city READ city WRITE setCity NOTIFY cityChanged FINAL)

public:
    explicit WebClass(QObject *parent = nullptr);

    QString city() const;
    void setCity(const QString &newCity);

    QString curCity() const;

    QJsonObject searchResult() const;


public slots:
    void setCurCity(const QString &newCurCity);
    void setSearchResult(const QJsonObject &newSearchResult);

signals:
    void cityChanged(const QString &newCity);

    void curCityChanged();

    void searchResultChanged();

private:
    QString m_city;
    QString m_curCity;
    QJsonObject m_searchResult;
};

#endif // WEBCLASS_H
