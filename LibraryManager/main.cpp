#include "mainwindow.h"
#include "bookmanager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BookManager BookManager;
    BookManager.show();
    //MainWindow w;
    //w.show();
    return a.exec();
}
