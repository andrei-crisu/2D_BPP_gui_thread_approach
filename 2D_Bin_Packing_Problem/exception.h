#ifndef EXCEPTION_H
#define EXCEPTION_H
#include<QString>

class Exception
{
public:
    Exception();
    Exception(QString message);
    void setMessage(QString message);
    QString what();
private:
    QString exception_message;
};

#endif // EXCEPTION_H
