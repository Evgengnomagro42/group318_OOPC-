/*
* Лабораторная работа No 3
* Тема: виджет калькулятор
*
* Developer: Марков Евгений Сергеевич
* OS: Windows 10 home version
* locale (кодировка): IBM 866
*/
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}





