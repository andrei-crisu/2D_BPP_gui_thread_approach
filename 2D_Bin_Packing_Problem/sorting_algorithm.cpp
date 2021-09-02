
#include"sorting_algorithm.h"
//descending quickSort
int partition(QVector<MyObject> &obj_list, int low, int high) {
    MyObject aux;
    MyObject pivot = obj_list.at(high);

    int i = (low - 1);
    for (int j = low; j < high; j++) {
        aux=obj_list.at(j);
        if (aux.getArea() >= pivot.getArea()) {
            i++;
            //
            MyObject grbg;
            grbg=obj_list.at(i);
            obj_list.replace(i,obj_list.at(j));
            obj_list.replace(j,grbg);
            //
        }
    }
    //
    MyObject grbg;
    grbg=obj_list.at(i + 1);
    obj_list.replace(i+1,obj_list.at(high));
    obj_list.replace(high,grbg);
    //
    return (i + 1);
}

void quickSort(QVector<MyObject> &obj_list, int low, int high) {
    if (low < high) {
        int pi = partition(obj_list, low, high);
        quickSort(obj_list, low, pi - 1);
        quickSort(obj_list, pi + 1, high);
    }
}
