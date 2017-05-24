/********************************************************************************
** Form generated from reading UI file 'entry_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRY_DIALOG_H
#define UI_ENTRY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Entry_Dialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_5;
    QSpinBox *spinBox_segment;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox_polarity;
    QSpinBox *spinBox_current;
    QSpinBox *spinBox_voltage;
    QDoubleSpinBox *doubleSpinBox_time;
    QPushButton *pushButton_enter;

    void setupUi(QDialog *Entry_Dialog)
    {
        if (Entry_Dialog->objectName().isEmpty())
            Entry_Dialog->setObjectName(QStringLiteral("Entry_Dialog"));
        Entry_Dialog->resize(225, 201);
        widget = new QWidget(Entry_Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 201, 176));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        spinBox_segment = new QSpinBox(widget);
        spinBox_segment->setObjectName(QStringLiteral("spinBox_segment"));

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox_segment);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        comboBox_polarity = new QComboBox(widget);
        comboBox_polarity->setObjectName(QStringLiteral("comboBox_polarity"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_polarity);

        spinBox_current = new QSpinBox(widget);
        spinBox_current->setObjectName(QStringLiteral("spinBox_current"));
        spinBox_current->setButtonSymbols(QAbstractSpinBox::NoButtons);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox_current);

        spinBox_voltage = new QSpinBox(widget);
        spinBox_voltage->setObjectName(QStringLiteral("spinBox_voltage"));
        spinBox_voltage->setButtonSymbols(QAbstractSpinBox::NoButtons);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBox_voltage);

        doubleSpinBox_time = new QDoubleSpinBox(widget);
        doubleSpinBox_time->setObjectName(QStringLiteral("doubleSpinBox_time"));
        doubleSpinBox_time->setButtonSymbols(QAbstractSpinBox::NoButtons);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_time);


        verticalLayout->addLayout(formLayout);

        pushButton_enter = new QPushButton(widget);
        pushButton_enter->setObjectName(QStringLiteral("pushButton_enter"));

        verticalLayout->addWidget(pushButton_enter);


        retranslateUi(Entry_Dialog);

        QMetaObject::connectSlotsByName(Entry_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Entry_Dialog)
    {
        Entry_Dialog->setWindowTitle(QApplication::translate("Entry_Dialog", "Dialog", Q_NULLPTR));
        label_5->setText(QApplication::translate("Entry_Dialog", "Segment No", Q_NULLPTR));
        label->setText(QApplication::translate("Entry_Dialog", "Time (ms)", Q_NULLPTR));
        label_2->setText(QApplication::translate("Entry_Dialog", "Current (A)", Q_NULLPTR));
        label_3->setText(QApplication::translate("Entry_Dialog", "Voltage (V)", Q_NULLPTR));
        label_4->setText(QApplication::translate("Entry_Dialog", "Polarity", Q_NULLPTR));
        comboBox_polarity->clear();
        comboBox_polarity->insertItems(0, QStringList()
         << QApplication::translate("Entry_Dialog", "Fwd", Q_NULLPTR)
         << QApplication::translate("Entry_Dialog", "Rev", Q_NULLPTR)
        );
        pushButton_enter->setText(QApplication::translate("Entry_Dialog", "Enter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Entry_Dialog: public Ui_Entry_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRY_DIALOG_H
