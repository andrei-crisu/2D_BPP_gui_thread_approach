#include "worker.h"
#include<QThread>
#include"sorting_algorithm.h"
#include<QDebug>
Worker::Worker(QVector<MyObject> &obj,double &bin_width,double &bin_height,double &step)
{
    rectangles=obj;
    container_windth=bin_width;
    container_height=bin_height;
    packing_step=step;
    container=QVector<BinContainer>();
    status=0;
    timer=new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Worker::statusSlot);
}

Worker::~Worker() { // Destructor
    // free resources
}

void Worker::packResponse()
{
    try {
        emit statusMessage("Sorting rectangles descending by area...");
        //sorting objects vector descending by area
        quickSort(rectangles,0,rectangles.length()-1);
        emit statusMessage("Sorting done!");
        // packing

        emit statusMessage("Start packing ...");
        container=packing(rectangles,container_windth,container_height,packing_step);
        emit statusMessage("Packing ended!");
        emit haveResult(container);
    }  catch (Exception &e){
    }
}

QVector<BinContainer> Worker::packing(QVector<MyObject> obj,double bin_width,double bin_height,double step)
{
    QVector<BinContainer> used_bins;
    MyObject current_obj;
    BinContainer current_bin;

    if(obj.isEmpty())
        throw Exception("Warning: nothing to pack!");
    if(bin_width<=0)
        throw Exception("Error:Bin width is not a valid one; bin width="+QString::number(bin_width));
    if(bin_height<=0)
        throw Exception("Error:Bin height is not a valid one; bin height="+QString::number(bin_height));

    current_bin=BinContainer(bin_width,bin_height);
    used_bins.append(current_bin);

    //this is just for printing messages
    int ms=obj.length();
    int aux=10;
    if(ms<=30)
        aux=5;
    if(ms>30&&ms<=100)
        aux=10;
    if(ms>100&&ms<=200)
        aux=20;
    if(ms>200&&ms<=500)
        aux=40;
    if(ms>500&&ms<=1000)
        aux=60;
    if(ms>1000)
        aux=80;
    //

    for(int i=0;i<obj.length();i++)
    {
        //for printing messages

        if(i%aux==0)
        {
            double val=obj.length();
            val=((double)i/val)*100.0;
            QString str="";
            str="Packing : ";
            str+=QString::number(val,'g',2);
            str+=" % ";
            emit statusMessage(str);
        }

        //

        current_obj=obj.at(i);
        //check if the rectangle does fit in an empty bin!
        if(has_larger_dimensions(current_obj,bin_width,bin_height))
            throw Exception("Error: this rectangle => "
                            "[ w="+QString::number(current_obj.getWidth())+",h= "+QString::number(current_obj.getHeight())+" ] does"
                                                                                                                           " not  fit even in an empty bin with "
                                                                                                                           "[ w="+QString::number(bin_width)+",h= "+QString::number(bin_height)+" ] !");
        for(int k=0;k<used_bins.length();k++)
        {
            current_bin=used_bins.at(k);

            if(current_bin.getFreeArea()<current_obj.getArea())
            {
                if(k==used_bins.length()-1)
                {
                    current_bin=BinContainer(bin_width,bin_height);
                    if(fit_inside(current_bin,current_obj))
                        place(current_bin,current_obj,0,0);
                    else
                    {
                        current_obj.rotate_90();
                        place(current_bin,current_obj,0,0);
                    }
                    used_bins.append(current_bin);
                    break;
                }
                else
                    continue;
            }
            else
            {
                if(try_to_place(current_bin,current_obj,step)==true)
                {
                    used_bins.replace(k,current_bin);
                    break;
                }
                else
                {
                    current_obj.rotate_90();
                    if(try_to_place(current_bin,current_obj,step)==true)
                    {
                        used_bins.replace(k,current_bin);
                        break;
                    }
                    else
                        if(k==used_bins.length()-1)
                        {
                            current_bin=BinContainer(bin_width,bin_height);
                            if(fit_inside(current_bin,current_obj))
                                place(current_bin,current_obj,0,0);
                            else
                            {
                                current_obj.rotate_90();
                                place(current_bin,current_obj,0,0);
                            }
                            used_bins.append(current_bin);
                            break;
                        }
                        else
                        {
                            current_obj.rotate_90();
                            continue;
                        }
                }
            }

        }
    }
    return used_bins;
}

bool Worker::has_larger_dimensions(MyObject object,double width,double height)
{
    if(object.getWidth()>width||object.getHeight()>height)
    {
        object.rotate_90();
        if(object.getWidth()>width||object.getHeight()>height)
        {
            return true;
        }

    }
    return false;
}

void Worker::place(BinContainer &bin,MyObject &obj,double x,double y)
{
    obj.setX(x);
    obj.setY(y);
    bin.appendObj(obj);
}

bool Worker::try_to_place(BinContainer&bin,MyObject &obj,double step)
{
    if(bin.getObjNumber()==0 && fit_inside(bin,obj)==true)
    {
        place(bin,obj,0,0);
        return true;
    }
    for(double i=0;i<=bin.getWidth()-obj.getWidth();i=i+step)
        for(double j=0;j<=bin.getHeight()-obj.getHeight();j=j+step)
        {
            obj.setX(i);
            obj.setY(j);
            if(overlap_check(bin,obj)==false&&fit_inside(bin,obj)==true)
            {
                place(bin,obj,i,j);
                return true;
            }
        }

    return false;
}

bool Worker::overlap(MyObject current_rectangle,MyObject stored_rectangle)
{
    if((current_rectangle.getX()>=stored_rectangle.getX()+stored_rectangle.getWidth())||
            (stored_rectangle.getX()>=current_rectangle.getX()+current_rectangle.getWidth()))
        return false;

    if((current_rectangle.getY()>=stored_rectangle.getY()+stored_rectangle.getHeight())||
            (stored_rectangle.getY()>=current_rectangle.getY()+current_rectangle.getHeight()))
        return false;
    return true;

}

bool Worker::overlap_check(BinContainer &bin,MyObject &obj)
{
    for(int r=0;r<bin.getObjNumber();r++)
    {
        MyObject aux=bin.getObjAt(r);
        if(overlap(obj,aux)==true)
        {
            return true;
        }
    }
    return false;
}

bool Worker::fit_inside(BinContainer &bin,MyObject &obj)
{
    if(obj.getWidth()<=bin.getWidth()&&obj.getHeight()<=bin.getHeight())
        return true;
    else
        return false;
}

void Worker::messageSlot(const QString &message)
{
    emit statusMessage(message);

}

void Worker::statusSlot()
{
    double val=rectangles.length();
    val=((double)status/val)*100.0;
    QString str="";
    str="Packing : ";
    str+=QString::number(val,'f',2);
    str+=" % ";
    emit statusMessage(str);
    qDebug()<<"here";

}
