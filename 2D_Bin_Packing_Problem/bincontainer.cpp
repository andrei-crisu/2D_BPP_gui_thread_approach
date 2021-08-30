#include "bincontainer.h"

BinContainer::BinContainer():bin()
{
    width=0;
    height=0;
    usedArea=0;
    objNumber=0;
    binArea=area();
}
BinContainer::BinContainer(double w,double h):bin()
{
    width=w;
    height=h;
    usedArea=0;
    objNumber=0;
    binArea=area();
}

double BinContainer::getWidth()
{
    return width;
}

double BinContainer::getHeight()
{
    return height;
}

double BinContainer::getArea()
{
    return binArea;
}

void BinContainer::setSize(double w, double h)
{
    width=w;
    height=h;
    binArea=area();
}

MyObject BinContainer::getObjAt(int i)
{
    if(!(i>=0&&i<objNumber))
        throw Exception("Bug: item out of bounds!");
    else
        return bin.at(i);
}

MyObject BinContainer::appendObj(MyObject other)
{
    objNumber++;
    bin.append(other);
}

double BinContainer::area()
{
    return width*height;
}
