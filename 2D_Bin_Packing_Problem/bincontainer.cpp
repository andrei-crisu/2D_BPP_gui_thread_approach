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

BinContainer::BinContainer(const BinContainer &other)
{
    bin=other.bin;
    width=other.width;
    height=other.height;
    objNumber=other.objNumber;
    usedArea=other.usedArea;
    binArea=other.binArea;
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

double BinContainer::getFreeArea()
{
    double freeArea=getArea()-usedArea;
    return freeArea;
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

MyObject BinContainer::appendObj(MyObject &other)
{
    objNumber++;
    bin.append(other);
    usedArea=usedArea+other.getArea();
    return other;
}

double BinContainer::area()
{
    return width*height;
}

int BinContainer::getObjNumber()
{
    return objNumber;
}

BinContainer&  BinContainer::operator=(const BinContainer &other)
{

    bin=other.bin;
    width=other.width;
    height=other.height;
    objNumber=other.objNumber;
    usedArea=other.usedArea;
    binArea=other.binArea;
    return  *this;
}
