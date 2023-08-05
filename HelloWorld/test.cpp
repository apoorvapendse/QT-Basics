#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{

}

void Test::doStuff()
{
    qInfo()<<"hello from do stuff";
}
