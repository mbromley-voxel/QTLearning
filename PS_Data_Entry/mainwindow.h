#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "entry_dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void setText();

private slots:
    void on_pushbutton_addseg_clicked();

private:
    Ui::MainWindow *ui;
    Entry_Dialog *enterDia;
};

#endif // MAINWINDOW_H
