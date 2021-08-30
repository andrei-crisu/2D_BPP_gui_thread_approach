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
    double getWidth();
    double getHeight();
    double getArea();
    void setSize(double w,double h);
    MyObject getObjAt(int i);
    MyObject appendObj(MyObject other);
private:
    QVector <MyObject> bin;
    double width,height;
    int objNumber;
    double usedArea;
    double binArea;

    double area();
};

#endif // BINCONTAINER_H
