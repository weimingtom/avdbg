/********************************************************************************
** Form generated from reading UI file 'checkversion_options_page.ui'
**
** Created: Sat Sep 15 17:41:07 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKVERSION_OPTIONS_PAGE_H
#define UI_CHECKVERSION_OPTIONS_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckVersionOptionsPage
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CheckVersionOptionsPage)
    {
        if (CheckVersionOptionsPage->objectName().isEmpty())
            CheckVersionOptionsPage->setObjectName(QString::fromUtf8("CheckVersionOptionsPage"));
        CheckVersionOptionsPage->resize(400, 300);
        verticalLayout = new QVBoxLayout(CheckVersionOptionsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(CheckVersionOptionsPage);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        verticalSpacer = new QSpacerItem(20, 262, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(CheckVersionOptionsPage);

        QMetaObject::connectSlotsByName(CheckVersionOptionsPage);
    } // setupUi

    void retranslateUi(QWidget *CheckVersionOptionsPage)
    {
        CheckVersionOptionsPage->setWindowTitle(QApplication::translate("CheckVersionOptionsPage", "Check Version Plugin", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("CheckVersionOptionsPage", "Check for new version on startup", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CheckVersionOptionsPage: public Ui_CheckVersionOptionsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKVERSION_OPTIONS_PAGE_H
