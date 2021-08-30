#include "exception.h"

Exception::Exception()
{
    exception_message="Exception: an exception occurred!";
}

Exception::Exception(QString message)
{
    exception_message=message;
}

void Exception::setMessage(QString message)

{
    exception_message=message;
}

QString Exception::what()
{
    return exception_message;
}
