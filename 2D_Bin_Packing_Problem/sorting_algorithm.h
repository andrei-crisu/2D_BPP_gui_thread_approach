#ifndef SORTING_ALGORITHM_H
#define SORTING_ALGORITHM_H
#include"myobject.h"
#include<QVector>

int partition(QVector<MyObject> &obj_list, int low, int high);

void quickSort(QVector<MyObject> &obj_list, int low, int high);


#endif // SORTING_ALGORITHM_H
