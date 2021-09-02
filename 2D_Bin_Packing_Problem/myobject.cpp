#include "myobject.h"

MyObject::MyObject()
{
    width=0;
    height=0;
    rotated_90=false;
    x_pos=-1;
    y_pos=-1;
}

MyObject::MyObject(double w,double h,bool rotated)
{
    width=w;
    height=h;
    rotated_90=rotated;
    x_pos=-1;
    y_pos=-1;
}

MyObject::MyObject(const MyObject &other)
{
    width=other.width;
    height=other.height;
    rotated_90=other.rotated_90;
    x_pos=other.x_pos;
    y_pos=other.y_pos;
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
    x_pos=object.x_pos;
    y_pos=object.y_pos;
    return (*this);
}

double MyObject::getArea()
{
    return width*height;
}

double MyObject::getX()
{
    return x_pos;
}

double MyObject::getY()
{
    return y_pos;
}

void MyObject::setX(double &x)
{
    x_pos=x;
}

void MyObject::setY(double &y)
{
    y_pos=y;
}
