#include "dataparser.h"

DataParser::DataParser(QString str):rectList()
{
    data_string=str;
    parse();
}

QVector<MyObject> DataParser::getRectList()
{
    if(rectList.isEmpty())
        throw Exception("Empty: no any rectangle provided [ data loaded from file ] ");

    return rectList;
}

void DataParser::parse()
{
    QString w_string,h_string;
    double w,h;
    bool ok;
    QString str=data_string;
    QRegularExpression space("\\s");
    QRegularExpression reg("\\;");
    QRegularExpression reg2("\\,");
    str.remove(space);
    qDebug()<<str;
    if(str.at(str.length()-1)==';')
        str=str.left(str.length()-1);
    qDebug()<<str;
    if(data_string.length()<4)
        throw Exception("Data string loaded from file : too short [ wrong syntax ]");
    QStringList firstList=str.split(reg);
    qDebug()<<firstList;
    for(int i=0;i<firstList.length();i++)
    {
        QStringList secondList=firstList.at(i).split(reg2);
        if(secondList.length()!=2)
            throw Exception("Error:data provided contain mistakes!The rectangle has"
" 2 dimensions (width/height).Data with mistakes: [empty data] or [too many commas]:"
" =>mistakes in:["+firstList.at(i)+"]");
        else
        {
            w_string=secondList.at(0);
            h_string=secondList.at(1);
            if(w_string.isEmpty()||h_string.isEmpty())
                throw Exception("Error at: "+firstList.at(i));
            ok=false;
            w=w_string.toDouble(&ok);
            if(!ok)
                throw Exception("Error: [ "+w_string+" ] contain mistakes;  it is not a number !");

            ok=false;
            h=h_string.toDouble(&ok);
            if(!ok)
                throw Exception("Error: [ "+h_string+" ] contain mistakes;  it is not a number !");

            if(w<0||h<0)
                throw Exception("Rectangle can't have any negative dimension(width/height)"
": [ ("+w_string+","+h_string+") ]");
            rectList.append(MyObject(w,h));
        }
    }

}

QString DataParser::listAsString()
{
    QString str="";
    for(int i =0;i<rectList.length();i++)
    {
        MyObject obj(rectList.at(i));
        str+="( ";
        str+=QString::number(obj.getWidth());
        str+=",";
        str+=QString::number(obj.getHeight());
        str+="); ";
    }
    return str;
}
