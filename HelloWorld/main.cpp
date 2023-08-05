#include <QCoreApplication>
#include <iostream>
#include <string>
#include <QTextStream>
#include<QDebug>

void greet() {
    QTextStream qout(stdout);
    QTextStream qin(stdin);

    qout << "Please enter your name: ";
    qout.flush(); // Flush the output stream to ensure the message is displayed
    QString name = qin.readLine();
    qout << "\nYour name is " << name << "\n";
}


void mixQTandStd(){
    QTextStream qin(stdin);
    qInfo()<<"Please Enter Your Name";
    QString name = qin.readLine();
    qInfo()<<"Hey, there"<<name;
}
int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

//    greet();
    mixQTandStd();

    return a.exec();
}
