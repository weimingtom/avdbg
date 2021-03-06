/********************************************************************************
** Form generated from reading UI file 'dialog_memoryregions.ui'
**
** Created: Wed Oct 3 15:11:30 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_MEMORYREGIONS_H
#define UI_DIALOG_MEMORYREGIONS_H

#include <LineEdit.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DialogMemoryRegions
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    LineEdit *filter;
    QTableView *regions_table;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *DialogMemoryRegions)
    {
        if (DialogMemoryRegions->objectName().isEmpty())
            DialogMemoryRegions->setObjectName(QString::fromUtf8("DialogMemoryRegions"));
        DialogMemoryRegions->resize(632, 321);
        DialogMemoryRegions->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(DialogMemoryRegions);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DialogMemoryRegions);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        filter = new LineEdit(DialogMemoryRegions);
        filter->setObjectName(QString::fromUtf8("filter"));

        gridLayout->addWidget(filter, 0, 1, 1, 1);

        regions_table = new QTableView(DialogMemoryRegions);
        regions_table->setObjectName(QString::fromUtf8("regions_table"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        regions_table->setFont(font);
        regions_table->setContextMenuPolicy(Qt::CustomContextMenu);
        regions_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        regions_table->setAlternatingRowColors(true);
        regions_table->setSelectionMode(QAbstractItemView::SingleSelection);
        regions_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        regions_table->setSortingEnabled(true);
        regions_table->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(regions_table, 1, 0, 1, 2);

        button_box = new QDialogButtonBox(DialogMemoryRegions);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(button_box, 2, 0, 1, 2);

        QWidget::setTabOrder(filter, regions_table);

        retranslateUi(DialogMemoryRegions);
        QObject::connect(button_box, SIGNAL(accepted()), DialogMemoryRegions, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), DialogMemoryRegions, SLOT(reject()));
        QObject::connect(regions_table, SIGNAL(doubleClicked(QModelIndex)), DialogMemoryRegions, SLOT(accept()));

        QMetaObject::connectSlotsByName(DialogMemoryRegions);
    } // setupUi

    void retranslateUi(QDialog *DialogMemoryRegions)
    {
        DialogMemoryRegions->setWindowTitle(QApplication::translate("DialogMemoryRegions", "Memory Regions", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogMemoryRegions", "Filter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogMemoryRegions: public Ui_DialogMemoryRegions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MEMORYREGIONS_H
