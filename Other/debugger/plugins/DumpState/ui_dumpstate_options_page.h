/********************************************************************************
** Form generated from reading UI file 'dumpstate_options_page.ui'
**
** Created: Sat Sep 15 17:41:14 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUMPSTATE_OPTIONS_PAGE_H
#define UI_DUMPSTATE_OPTIONS_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DumpStateOptionsPage
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *instructionsBeforeIP;
    QLabel *label_2;
    QSpinBox *instructionsAfterIP;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DumpStateOptionsPage)
    {
        if (DumpStateOptionsPage->objectName().isEmpty())
            DumpStateOptionsPage->setObjectName(QString::fromUtf8("DumpStateOptionsPage"));
        DumpStateOptionsPage->resize(443, 259);
        gridLayout = new QGridLayout(DumpStateOptionsPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DumpStateOptionsPage);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        instructionsBeforeIP = new QSpinBox(DumpStateOptionsPage);
        instructionsBeforeIP->setObjectName(QString::fromUtf8("instructionsBeforeIP"));
        instructionsBeforeIP->setEnabled(false);

        gridLayout->addWidget(instructionsBeforeIP, 0, 1, 1, 1);

        label_2 = new QLabel(DumpStateOptionsPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        instructionsAfterIP = new QSpinBox(DumpStateOptionsPage);
        instructionsAfterIP->setObjectName(QString::fromUtf8("instructionsAfterIP"));
        instructionsAfterIP->setValue(6);

        gridLayout->addWidget(instructionsAfterIP, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 190, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(DumpStateOptionsPage);

        QMetaObject::connectSlotsByName(DumpStateOptionsPage);
    } // setupUi

    void retranslateUi(QWidget *DumpStateOptionsPage)
    {
        DumpStateOptionsPage->setWindowTitle(QApplication::translate("DumpStateOptionsPage", "Dump State Plugin", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DumpStateOptionsPage", "Instructions To Display Before Instruction Pointer:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DumpStateOptionsPage", "Instructions To Display After Instruction Pointer:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DumpStateOptionsPage: public Ui_DumpStateOptionsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUMPSTATE_OPTIONS_PAGE_H
