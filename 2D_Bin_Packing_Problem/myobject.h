#ifndef MYOBJECT_H
#define MYOBJECT_H


class MyObject
{
public:
    MyObject();
    MyObject(double w,double h,bool rotated=false);
    MyObject(const MyObject &other);
    double setWidth(double w);
    double setHeight(double h);
    void rotate_90();
    double getWidth();
    double getHeight();
    bool isRotated();
    MyObject& operator=(const MyObject &object);
    double getArea();
private:
    double width;
    double height;
    bool rotated_90;
};

#endif // MYOBJECT_H
