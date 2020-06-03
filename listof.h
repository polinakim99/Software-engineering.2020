#ifndef LISTOF_H
#define LISTOF_H

#include <vector>
#include <classes.h>
#include <QDebug>

class listof
{
public:
    listof();
    listof(QVariantMap json_map);
    listof(const listof &base);

   std::vector<classes> getList();

private:
   std::vector <classes> list;

};

#endif // LISTOF_H
