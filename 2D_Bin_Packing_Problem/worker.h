#ifndef WORKER_H
#define WORKER_H

#include<QtCore>
#include<QTextEdit>
#include"myobject.h"
#include"packing_algorithm.h"
#include "my_constants.h"
#include "io_interface.h"

class Worker : public QObject
{
    Q_OBJECT

public slots:
    void doWork(QTextEdit *infoWindow,QVector<MyObject> all_objects,
                double bin_width,double bin_height,double placing_step) {
        QVector<BinContainer> result;
        /* ... here is the expensive or blocking operation ... */
        try {

        result=packing(infoWindow,all_objects,bin_width,bin_height,placing_step);
        emit resultReady(result);
        }catch(Exception &e)
        {
            printStatus(infoWindow,e.what(),DARK_RED);
        }
    }

signals:
    void resultReady(const QVector<BinContainer> &result);
};


#endif // WORKER_H
