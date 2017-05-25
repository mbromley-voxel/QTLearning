#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "entry_dialog.h"
#include <QtCore>
#include <QtGui>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString s;

public slots:
    void setText(QString s);

private slots:
    void on_pushbutton_addseg_clicked();
    void on_pushButton_Rest_clicked();

private:
    Ui::MainWindow *ui;
    Entry_Dialog *enterDia;
    void assignSegment(double time, int current, int volt, QString polarity, int segno);
    void resetTable();
    QStandardItemModel  *model;
};

#endif // MAINWINDOW_H
