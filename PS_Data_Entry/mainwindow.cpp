#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "entry_dialog.h"
#include <QTableView>
#include <QString>

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
//    enterDia = new Entry_Dialog(this);
    Entry_Dialog enterDia(this);

    if(enterDia.exec()==QDialog::Accepted){
        setText();
    }
}

//    enterDia->setModal(true);
//    enterDia->exec();


void MainWindow::setText()
{
    ui->label_test->setText("Test Successful!");
}

