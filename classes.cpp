#include "classes.h"
#include "mainwindow.h"

classes::classes()
{

}

classes::classes(QString nameC, QString descC, QString picC,
                 QStringList enemyC, QStringList foodC, QStringList strongC,
                 QStringList weekC)
{
    nameT = nameC;
    descT = descC;
    picT = picC;
    enemyT = enemyC;
    foodT = foodC;
    strongT = strongC;
    weekT = weekC;

}

classes::classes(const classes &v)
{
   nameT = v.nameT;
   descT = v.descT;
   picT = v.picT;
   enemyT = v.enemyT;
   foodT = v.foodT;
   strongT = v.strongT;
   weekT = v.weekT;
}

classes::~classes()
{

}

QString classes::name()
{
    return nameT;
}

QString classes::desc()
{
    return descT;
}

QString classes::pic()
{
    return picT;
}

QStringList classes::enemy()
{
    return enemyT;
}

QStringList classes::food()
{
    return foodT;
}

QStringList classes::strong()
{
   return strongT;
}

QStringList classes::week()
{
    return weekT;
}

