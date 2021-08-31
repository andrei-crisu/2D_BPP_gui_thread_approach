#include "myobject.h"

MyObject::MyObject()
{
    width=0;
    height=0;
    rotated_90=false;
}

MyObject::MyObject(double w,double h,bool rotated)
{
    width=w;
    height=h;
    rotated_90=rotated;
}

MyObject::MyObject(const MyObject &other)
{
    width=other.width;
    height=other.height;
    rotated_90=other.rotated_90;
}

double MyObject::setWidth(double w)
{
    width=w;
    return w;
}

double MyObject::setHeight(double h)
{
    height=h;
    return h;
}

void MyObject::rotate_90()
{
    double aux;
    aux=width;
    width=height;
    height=aux;
    rotated_90=true;
}

double MyObject::getWidth()
{
    return width;
}

double MyObject::getHeight()
{
    return height;
}

bool MyObject::isRotated()
{
    return rotated_90;
}

MyObject& MyObject::operator=(const MyObject &object)
{
    width=object.width;
    height=object.height;
    rotated_90=object.rotated_90;
    return (*this);
}

double MyObject::getArea()
{
    return width*height;
}
