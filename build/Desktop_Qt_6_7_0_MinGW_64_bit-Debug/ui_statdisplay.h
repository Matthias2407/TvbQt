/********************************************************************************
** Form generated from reading UI file 'statdisplay.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATDISPLAY_H
#define UI_STATDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statDisplay
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;

    void setupUi(QWidget *statDisplay)
    {
        if (statDisplay->objectName().isEmpty())
            statDisplay->setObjectName("statDisplay");
        statDisplay->resize(230, 30);
        label = new QLabel(statDisplay);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 91, 31));
        spinBox = new QSpinBox(statDisplay);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(100, 0, 42, 26));
        spinBox_2 = new QSpinBox(statDisplay);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(140, 0, 42, 26));
        spinBox_3 = new QSpinBox(statDisplay);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setGeometry(QRect(180, 0, 42, 26));

        retranslateUi(statDisplay);

        QMetaObject::connectSlotsByName(statDisplay);
    } // setupUi

    void retranslateUi(QWidget *statDisplay)
    {
        statDisplay->setWindowTitle(QCoreApplication::translate("statDisplay", "Form", nullptr));
        label->setText(QCoreApplication::translate("statDisplay", "StatName", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statDisplay: public Ui_statDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATDISPLAY_H
