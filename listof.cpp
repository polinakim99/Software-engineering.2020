#include "listof.h"

listof::listof()
{

}

listof::listof(QVariantMap json_map)
{
    const auto count = json_map.size();
    list.resize(count+1);

    for (int i = 1; i <= count; i++){
        QVariantMap currentMap = json_map[QString::number(i)].toMap();
        QString name = currentMap["Name"].toString();
        QString desc = currentMap["Description"].toString();
        QString pic = currentMap["Picture"].toString();
        QStringList enemy = currentMap["Enemies"].toStringList();
        QStringList food = currentMap["Food"].toStringList();
        QStringList strong = currentMap["Strengths"].toStringList();
        QStringList week = currentMap["Weeknesses"].toStringList();
        classes mainwindow(name,desc,pic,enemy,food,strong,week);
        page = i;
        list[page] = mainwindow;
    }
}

listof::listof(const listof &base)
{
    list = base.list;
}

std::vector<classes> listof::getList()
{
    return list;
}
