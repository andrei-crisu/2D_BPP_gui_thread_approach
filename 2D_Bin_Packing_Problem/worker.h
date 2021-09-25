#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include"myobject.h"
#include"bincontainer.h"
#include<QTimer>

class Worker : public QObject {
    Q_OBJECT
public:
    Worker(QVector<MyObject> &obj,double &bin_width,double &bin_height,double &step,int usedPackingMethod);
    ~Worker();

    QVector<BinContainer> packing(QVector<MyObject> obj,double bin_width,double bin_height,double step);
    QVector<BinContainer> optimizedPacking(QVector<MyObject> obj,double bin_width,double bin_height,double offset=1);


    bool has_larger_dimensions(MyObject object,double width,double height);

    void place(BinContainer &bin,MyObject &obj,double x,double y);

    bool try_to_place(BinContainer&bin,MyObject &obj,double step);
    bool try_to_place_optimized(BinContainer &bin,MyObject &obj,double offset);

    bool overlap(MyObject current_rectangle,MyObject stored_rectangle,double offset);

    bool overlap_check(BinContainer &bin,MyObject &obj,double offset);

    bool fit_inside(BinContainer &bin,MyObject &obj);
    bool fit_inside_optimized(BinContainer bin,MyObject &obj);

public slots:
    void packResponse();
    void messageSlot(const QString &message);
    void statusSlot();
signals:
    void valChanged(QString &str);
    void haveResult(QVector<BinContainer> &result);
    void taskEnded();
    void statusMessage(const QString &message);
    void errorMessage(const QString &message);
private:
    // add your variables here
    QVector<MyObject> rectangles;
    double container_windth;
    double container_height;
    double packing_step;
public:
    QVector<BinContainer> container;
    int status;
    int packingMethod;
    QTimer *timer;

};

#endif // WORKER_H
