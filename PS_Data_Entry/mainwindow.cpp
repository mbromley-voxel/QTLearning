#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "entry_dialog.h"
#include <QTableView>
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QStandardItemModel(4,2,this);
    ui->tableView->setModel(model);
    model->setHeaderData(0,Qt::Horizontal,"Seg 1");
    ui->label_test->setText("hello");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushbutton_addseg_clicked()
{
    Entry_Dialog enterDia(this);

    if(enterDia.exec()==QDialog::Accepted)
    {
        qDebug("I'm here");
        QString p = enterDia.polarity_type();
        int volt = enterDia.voltage();
        int curr = enterDia.current();
        double time = enterDia.time();
        int seg = enterDia.segno();
        assignSegment(time,curr,volt,p,seg);
    }
}


void MainWindow::setText(QString s)
{
    ui->label_test->setText(s);
}

void MainWindow::assignSegment(double time, int current, int volt, QString polarity, int segno)
{
    qDebug("Assign segment called");
    int col = segno-1;
    QModelIndex index = model->index(0,col,QModelIndex());
    model->setData(index,time);
    index = model->index(1,col,QModelIndex());
    model->setData(index,volt);
    index = model->index(2,col,QModelIndex());
    model->setData(index,current);
    index = model->index(3,col,QModelIndex());
    model->setData(index,polarity);
    ui->label_test->setText(polarity);
}
