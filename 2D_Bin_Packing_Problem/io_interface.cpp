#include"io_interface.h"

QString printStatus(QTextEdit *userWindow,QString str,QString color)
{

    QString entireString;
    QDateTime date = QDateTime::currentDateTime();
    QString formattedTime = date.toString("dd.MM.yyyy hh:mm:ss");
    entireString="<font color= #274472 size= \"3\" > "+formattedTime+": </font>";
    entireString=entireString+"<font color= "+color+" size= \"3\" > "+str+"</font>";
    userWindow->append((entireString));
    return str;

}


QString printOutput(QTextEdit *displayWindow,QString str,QString color)
{
    QString entireString="";
    entireString=entireString+"<font color= "+color+" size= \"3\" >";
    entireString=entireString+str+"</font>";
    displayWindow->append((entireString));
    return str;

}

void show_statistics(BinContainer &bin,int it,int used_bins_nr,QTextEdit *display)
{
    QString string="";
    double waste;
    waste=(bin.getFreeArea()/bin.getArea())*100;
    string+="<u>Bin container nr. </u>";
    string+=QString::number(it+1);
    string+="/";
    string+=QString::number(used_bins_nr);
    string+="<br>";
    string+="Waste: ";
    string+=QString::number(waste);
    string+="% ";
    string+="<br>";
    string+="Stored objects: ";
    string+=QString::number(bin.getObjNumber());
    display->clear();
    printOutput(display,string,DARK_BLUE);
}
