#ifndef IO_INTERFACE_H
#define IO_INTERFACE_H

#include<QDateTime>
#include<QTextEdit>
#include <QString>
#include<QDebug>
#include"bincontainer.h"
#include"myobject.h"
#include"my_constants.h"


QString printStatus(QTextEdit *statusWindow,QString str,QString color);

QString printOutput(QTextEdit *displayWindow,QString str,QString color);

void show_statistics(BinContainer &bin,int it,int used_bins_nr,QTextEdit *display);

#endif // IO_INTERFACE_H
