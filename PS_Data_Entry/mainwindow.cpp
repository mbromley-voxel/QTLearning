#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "entry_dialog.h"
#include <QTableView>
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    enterDia = new Entry_Dialog(this);
    ui->label_test->setText("hello");
    ui->tableView->columnAt(0);
    ui->tableView->rowAt(4);
//    connect(enterDia,SIGNAL(on_pushButton_enter_clicked()),this,SLOT(setText()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushbutton_addseg_clicked()
{
    Entry_Dialog enterDia(this);

    if(enterDia.exec()==QDialog::Accepted){
        qDebug("I'm here");
        QString p = enterDia.polarity_type();
        int volt = enterDia.voltage();
        int curr = enterDia.current();
        double time = enterDia.time();
        assignSegment(time,curr,volt,p);
    }
}


void MainWindow::setText(QString s)
{
    ui->label_test->setText(s);
}

void MainWindow::assignSegment(double time, int current, int volt, QString polarity)
{
    qDebug("Assign segment called");
    ui->label_test->setText(polarity);
}
