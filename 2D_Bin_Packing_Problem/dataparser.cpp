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
    if(str.at(str.length()-1)==';')
        str=str.left(str.length()-1);
    if(data_string.length()<4)
        throw Exception("Data string loaded from file : too short [ wrong syntax ]");
    QStringList firstList=str.split(reg);
    for(int i=0;i<firstList.length();i++)
    {
        QStringList secondList=firstList.at(i).split(reg2);
        if(secondList.length()!=2)
            throw Exception("Error: data provided contain mistakes: "
"[empty data] or [too many commas] or [not allowed characters :: only digits allowed] "
" => mistakes in: ["+firstList.at(i)+"] "
" not a valid pair (width,height);A semicolon separates 2 pairs (width,height) and "
" a comma separates elementes in a pair.  Valid pairs should be entered like:<br>"
" width,height; <br> an example: <br> 100,40;");
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
