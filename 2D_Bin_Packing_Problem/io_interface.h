#ifndef IO_INTERFACE_H
#define IO_INTERFACE_H

#include<QDateTime>
#include<QTextEdit>
#include <QString>
#include<QDebug>


QString printStatus(QTextEdit *statusWindow,QString str,QString color);

QString printOutput(QTextEdit *displayWindow,QString str,QString color);


#endif // IO_INTERFACE_H
