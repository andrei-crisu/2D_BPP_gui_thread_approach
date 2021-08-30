#include"io_interface.h"

QString printStatus(QTextEdit *userWindow,QString str,QString color)
{

    QString entireString;
    QDateTime date = QDateTime::currentDateTime();
    QString formattedTime = date.toString("dd.MM.yyyy hh:mm:ss");
    entireString="<font color= #274472 size= \"3\" > "+formattedTime+": </font>";
    entireString=entireString+"<font color= "+color+" size= \"3\" > "+str+"</font><br>";
    userWindow->append((entireString));
    return str;

}


QString printOutput(QTextEdit *displayWindow,QString str,QString color)
{
    QString entireString="";
    entireString=entireString+"<font color= "+color+" size= \"3\" >";
    entireString=entireString+str+"</font><br>";
    displayWindow->append((entireString));
    return str;

}
