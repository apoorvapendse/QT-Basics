#include <QCoreApplication>
#include <iostream>
#include <string>
#include <QTextStream>

void greet() {
    QTextStream qout(stdout);
    QTextStream qin(stdin);

    qout << "Please enter your name: ";
    qout.flush(); // Flush the output stream to ensure the message is displayed
    QString name = qin.readLine();
    qout << "\nYour name is " << name << "\n";
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    greet();

    return a.exec();
}
