#ifndef CLASSES_H
#define CLASSES_H

#include <QString>
#include <QList>


class classes
{
public:
    classes();
    classes(QString nameC, QString descC, QString picC,
            QStringList enemyC, QStringList foodC, QStringList strongC,
            QStringList weekC);
    classes(const classes &v);

    ~classes();

    QString name();
    QString desc();
    QString pic();
    QStringList enemy();
    QStringList food();
    QStringList strong();
    QStringList week();

public:
    QString nameT = "";
    QString picT = "";
    QString descT = "";
    QStringList enemyT;
    QStringList foodT;
    QStringList strongT;
    QStringList weekT;

};

#endif // CLASSES_H
