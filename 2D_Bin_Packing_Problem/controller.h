#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include"worker.h"
#include<QThread>

class Controller : public QObject
{
    Q_OBJECT
    QThread workerThread;
public:
    QVector<BinContainer> all_containers;
public:
    Controller(QTextEdit *infoWindow,QVector<MyObject> all_objects,
               double bin_width,double bin_height,double placing_step):all_containers(){


        Worker *worker = new Worker;
        worker->moveToThread(&workerThread);
        connect(&workerThread, &QThread::finished, worker, &QObject::deleteLater);
        connect(this, &Controller::operate, worker, &Worker::doWork);
        connect(worker, &Worker::resultReady, this, &Controller::handleResults);
        workerThread.start();
        emit operate(infoWindow,all_objects,bin_width,bin_height,placing_step);
    }

    ~Controller() {
        workerThread.quit();
        workerThread.wait();
    }
public slots:
    void handleResults(const QVector<BinContainer> &result);
signals:
    void operate(QTextEdit *infoWindow,QVector<MyObject> all_objects,
                 double bin_width,double bin_height,double placing_step);
};

#endif // CONTROLLER_H
