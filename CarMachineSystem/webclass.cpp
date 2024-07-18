#include "webclass.h"

WebClass::WebClass(QObject *parent)
    : QObject{parent}
{}

QString WebClass::city() const
{
    return m_city;
}

void WebClass::setCity(const QString &newCity)
{
    if (m_city == newCity)
        return;
    m_city = newCity;
    emit cityChanged(newCity);
    qDebug() << "emit cityChanged(); done...";
    qDebug() << "m_city: " << m_city;
    qDebug() << "newCity: " << newCity;
}


QString WebClass::curCity() const
{
    return m_curCity;
}

void WebClass::setCurCity(const QString &newCurCity)
{
    if (m_curCity == newCurCity)
        return;
    m_curCity = newCurCity;
    emit curCityChanged();
    qDebug() << "emit curCityChanged(); done...";
}

QJsonObject WebClass::searchResult() const
{
    return m_searchResult;
}

void WebClass::setSearchResult(const QJsonObject &newSearchResult)
{
    if (m_searchResult == newSearchResult)
        return;
    m_searchResult = newSearchResult;
    emit searchResultChanged();
    qDebug() << m_searchResult;
}
