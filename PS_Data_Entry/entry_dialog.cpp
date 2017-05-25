#include "entry_dialog.h"
#include "ui_entry_dialog.h"
#include <QtWidgets>
#include <QDebug>

Entry_Dialog::Entry_Dialog(QWidget *parent) : QDialog(parent), ui(new Ui::Entry_Dialog)
{
    ui->setupUi(this);

}

Entry_Dialog::~Entry_Dialog()
{
    delete ui;
}

//void Entry_Dialog::on_pushButton_enter_clicked()
//{
//    segno = ui->spinBox_segment->value();
//    double time = ui->doubleSpinBox_time->value();
//    int cur = ui->spinBox_current->value();
//    int volt = ui->spinBox_voltage->value();
//    qDebug("The voltage is:%d /n The current is:%d",volt,cur);
//    close();

//}

QString Entry_Dialog::polarity_type()
{
    return ui->comboBox_polarity->currentText();
}
int Entry_Dialog::voltage()
{
    return ui->spinBox_voltage->value();
}
int Entry_Dialog::current()
{
    return ui->spinBox_current->value();
}
double Entry_Dialog::time()
{
    return ui->doubleSpinBox_time->value();
}
int Entry_Dialog::segno()
{
    return ui->spinBox_segment->value();
}
