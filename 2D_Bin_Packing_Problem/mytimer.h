#ifndef MYTIMER_H
#define MYTIMER_H

#include <QTimer>
#include<QTextEdit>
#include "io_interface.h"

class MyTimer : public QObject
{
    Q_OBJECT
public:
    MyTimer(QTextEdit *window,double status,int ms=1000);
    void setVal(QTextEdit *window,double status);
    QTimer *timer;
    QTextEdit *display;
    double val;

public slots:
    void MyTimerSlot();
};

#endif // MYTIMER_H
