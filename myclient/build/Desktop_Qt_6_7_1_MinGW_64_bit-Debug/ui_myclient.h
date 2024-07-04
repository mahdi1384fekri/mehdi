/********************************************************************************
** Form generated from reading UI file 'myclient.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCLIENT_H
#define UI_MYCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myclient
{
public:

    void setupUi(QWidget *myclient)
    {
        if (myclient->objectName().isEmpty())
            myclient->setObjectName("myclient");
        myclient->resize(800, 600);

        retranslateUi(myclient);

        QMetaObject::connectSlotsByName(myclient);
    } // setupUi

    void retranslateUi(QWidget *myclient)
    {
        myclient->setWindowTitle(QCoreApplication::translate("myclient", "myclient", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myclient: public Ui_myclient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCLIENT_H
