#ifndef ENTRY_DIALOG_H
#define ENTRY_DIALOG_H

#include <QDialog>

namespace Ui {
class Entry_Dialog;
}

class Entry_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Entry_Dialog(QWidget *parent = 0);
    void on_pushButton_enter_clicked();
    int segno;
    ~Entry_Dialog();

private slots:


private:
    Ui::Entry_Dialog *ui;
};

#endif // ENTRY_DIALOG_H
