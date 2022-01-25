/********************************************************************************
** Form generated from reading UI file 'seconddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDDIALOG_H
#define UI_SECONDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SecondDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *SecondDialog)
    {
        if (SecondDialog->objectName().isEmpty())
            SecondDialog->setObjectName(QString::fromUtf8("SecondDialog"));
        SecondDialog->resize(501, 390);
        label = new QLabel(SecondDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 140, 191, 61));

        retranslateUi(SecondDialog);

        QMetaObject::connectSlotsByName(SecondDialog);
    } // setupUi

    void retranslateUi(QDialog *SecondDialog)
    {
        SecondDialog->setWindowTitle(QCoreApplication::translate("SecondDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SecondDialog", "Hello From Second Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondDialog: public Ui_SecondDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDDIALOG_H
