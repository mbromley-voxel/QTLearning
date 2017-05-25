#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "entry_dialog.h"
#include <QTableView>
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QStandardItemModel(4,1,this);
    ui->tableView->setModel(model);
    model->setHeaderData(0,Qt::Horizontal,"Seg 1");
    model->setHeaderData(0,Qt::Vertical,"Time (ms)");
    model->setHeaderData(1,Qt::Vertical,"Current (A)");
    model->setHeaderData(2,Qt::Vertical,"Voltage (V)");
    model->setHeaderData(3,Qt::Vertical,"Polarity");
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
    int collen = model->columnCount(QModelIndex());
    int col = segno-1;

    //adds columns if needed based on the segment requested
    if(segno>collen)
    {
        model->setColumnCount(segno);
    }
    // Sets the segment values entered by the user
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

void MainWindow::resetTable()
{
    model->setColumnCount(1);
    model->setRowCount(4);
    for (int i = 0; i<4; i++)
    {
        QModelIndex index = model->index(i,0,QModelIndex());
        model->setData(index,"");
    }
}

void MainWindow::on_pushButton_Rest_clicked()
{
    resetTable();
}
