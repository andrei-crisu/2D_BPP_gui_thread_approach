#include "mytimer.h"
MyTimer::MyTimer(QTextEdit *window,double status,int ms)
{
    display=window;
    val=status;
    int aux=1000;
    // create a timer
    timer = new QTimer(this);

    // setup signal and slot
    connect(timer, SIGNAL(timeout()),
          this, SLOT(MyTimerSlot()));

    // msec
    if(ms<=20)
        aux=30;
    if(ms>20&&ms<=30)
        aux=100;
    if(ms>30&&ms<=40)
        aux=250;
    if(ms>40&&ms<=50)
        aux=700;
    if(ms>50&&ms<=100)
        aux=1000;
    if(ms>100&&ms<=300)
        aux=1600;
    if(ms>300)
        aux=4000;

    timer->start(aux);
}

void MyTimer::MyTimerSlot()
{
    QString str="";
    str="Packing : ";
    str+=QString::number(val,'f',2);
    str+=" % ";
    printStatus(display,str,DARK_GREEN);
}

void MyTimer::setVal(QTextEdit *window, double status)
{
    display=window;
    val=status;
}
