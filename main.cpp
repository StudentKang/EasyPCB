/********************************************************************************

** author:	Qing
** Date:	2022-03-10
** desc:	������ʵ��

********************************************************************************/

#include "mainwindow.h"
#include "batchwindow.h"
#include <QApplication>
#pragma execution_character_set("utf-8")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
