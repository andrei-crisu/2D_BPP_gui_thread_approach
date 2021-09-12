#ifndef PACKING_ALGORITHM_H
#define PACKING_ALGORITHM_H
#include"bincontainer.h"
#include"myobject.h"
#include<QCoreApplication>
#include<QPushButton>
#include<QTextEdit>

QVector<BinContainer> packing(QTextEdit *display,QVector<MyObject> obj,double bin_width,double bin_height,double step);

bool has_larger_dimensions(MyObject object,double width,double height);

void place(BinContainer &bin,MyObject &obj,double x,double y);

bool try_to_place(BinContainer&bin,MyObject &obj,double step);

bool overlap(MyObject current_rectangle,MyObject stored_rectangle);

bool overlap_check(BinContainer &bin,MyObject &obj);

bool fit_inside(BinContainer &bin,MyObject &obj);

#endif // PACKING_ALGORITHM_H
