#ifndef TEST_H
#define TEST_H

#include <QObject>
#include<QDebug>
class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

    //signals are the things that are emitted
signals:
    void close();

    //slots are the ones receiving the signals
public slots:
    void doStuff();
};

#endif // TEST_H
