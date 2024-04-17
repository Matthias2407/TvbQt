/********************************************************************************
** Form generated from reading UI file 'statlistdisplay.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATLISTDISPLAY_H
#define UI_STATLISTDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QWidget>
#include "widgets/statdisplay.h"

QT_BEGIN_NAMESPACE

class Ui_statListDisplay
{
public:
    QGroupBox *groupBox;
    statDisplay *widget;
    statDisplay *widget_2;
    statDisplay *widget_3;
    statDisplay *widget_4;
    statDisplay *widget_5;

    void setupUi(QWidget *statListDisplay)
    {
        if (statListDisplay->objectName().isEmpty())
            statListDisplay->setObjectName("statListDisplay");
        statListDisplay->resize(240, 175);
        groupBox = new QGroupBox(statListDisplay);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 240, 175));
        widget = new statDisplay(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 20, 230, 30));
        widget_2 = new statDisplay(groupBox);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 50, 230, 30));
        widget_3 = new statDisplay(groupBox);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(0, 80, 230, 30));
        widget_4 = new statDisplay(groupBox);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(0, 110, 230, 30));
        widget_5 = new statDisplay(groupBox);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(0, 140, 230, 30));

        retranslateUi(statListDisplay);

        QMetaObject::connectSlotsByName(statListDisplay);
    } // setupUi

    void retranslateUi(QWidget *statListDisplay)
    {
        statListDisplay->setWindowTitle(QCoreApplication::translate("statListDisplay", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("statListDisplay", "Stats", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statListDisplay: public Ui_statListDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATLISTDISPLAY_H
