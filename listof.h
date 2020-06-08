#ifndef LISTOF_H
#define LISTOF_H

#include <vector>
#include <classes.h>
#include <QDebug>

using namespace std;

class listof
{
public:
    listof();
    listof(QVariantMap json_map);
    listof(const listof &base);

   vector<classes> getList();

private:
   vector <classes> list;
   int page;

};

#endif // LISTOF_H
