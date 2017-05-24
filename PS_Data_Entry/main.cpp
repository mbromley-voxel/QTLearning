#include "entry_dialog.h"
#include <QApplication>
#include <mainwindow.h>

int main(int argc, char *argv[])
{
    QApplication prog(argc, argv);
    MainWindow w;
    w.show();
    return prog.exec();
}
