#ifndef BINCONTAINER_H
#define BINCONTAINER_H
#include<QVector>
#include"myobject.h"
#include "exception.h"

class BinContainer
{
public:
    BinContainer();
    BinContainer(double w,double h);
    BinContainer(const BinContainer &other);
    double getWidth();
    double getHeight();
    double getArea();
    double getFreeArea();
    void setSize(double w,double h);
    MyObject getObjAt(int i);
    MyObject appendObj(MyObject &other);
    BinContainer &operator=(const BinContainer &other);
    int getObjNumber();
private:
    QVector <MyObject> bin;
    double width,height;
    int objNumber;
    double usedArea;
    double binArea;
    double area();
};

#endif // BINCONTAINER_H
