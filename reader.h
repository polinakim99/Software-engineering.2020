#ifndef READER_H
#define READER_H
#include <QFile>
#include <QTextStream>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonParseError>
#include <QDebug>
class reader
{
public:
    reader(QString linker);
    QVariantMap getMap();
    QTextStream file_text();
    QString file;
private:
    QJsonParseError docError;
    QVariantMap json_map;
};

#endif // READER_H
