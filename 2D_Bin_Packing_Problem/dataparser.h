#ifndef DATAPARSER_H
#define DATAPARSER_H
#include<QString>
#include<QVector>
#include "myobject.h"
#include "exception.h"
#include <QRegularExpression>

class DataParser
{
public:
    DataParser(QString str);
    QVector<MyObject> getRectList();
    QString listAsString();
private:
    QVector<MyObject> rectList;
    void parse();
    QString data_string;

};

#endif // DATAPARSER_H
