#include <QCoreApplication>

/*
 What
 Signals and slots

 Description
 The sender object

 Why
 Sender can be any QObject

 Example
 Who is the sender

 */

#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass myclass;
    myclass.start();

    return a.exec();
}
