/********************************************************************************
** Form generated from reading UI file 'manmonline.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANMONLINE_H
#define UI_MANMONLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManmOnLineClass
{
public:

    void setupUi(QWidget *ManmOnLineClass)
    {
        if (ManmOnLineClass->objectName().isEmpty())
            ManmOnLineClass->setObjectName(QStringLiteral("ManmOnLineClass"));
        ManmOnLineClass->resize(600, 400);

        retranslateUi(ManmOnLineClass);

        QMetaObject::connectSlotsByName(ManmOnLineClass);
    } // setupUi

    void retranslateUi(QWidget *ManmOnLineClass)
    {
        ManmOnLineClass->setWindowTitle(QApplication::translate("ManmOnLineClass", "ManmOnLine", 0));
    } // retranslateUi

};

namespace Ui {
    class ManmOnLineClass: public Ui_ManmOnLineClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANMONLINE_H
