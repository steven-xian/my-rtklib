/********************************************************************************
** Form generated from reading UI file 'tspandlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TSPANDLG_H
#define UI_TSPANDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpanDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *TimeStartF;
    QDateEdit *TimeY1;
    QCheckBox *TimeEndF;
    QDateEdit *TimeY2;
    QCheckBox *TimeIntF;
    QPushButton *BtnOk;
    QComboBox *EditTimeInt;
    QTimeEdit *TimeH2;
    QTimeEdit *TimeH1;
    QPushButton *BtnCancel;

    void setupUi(QWidget *SpanDialog)
    {
        if (SpanDialog->objectName().isEmpty())
            SpanDialog->setObjectName(QString::fromUtf8("SpanDialog"));
        SpanDialog->resize(423, 156);
        gridLayout = new QGridLayout(SpanDialog);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TimeStartF = new QCheckBox(SpanDialog);
        TimeStartF->setObjectName(QString::fromUtf8("TimeStartF"));
        TimeStartF->setChecked(false);

        gridLayout->addWidget(TimeStartF, 0, 0, 1, 1);

        TimeY1 = new QDateEdit(SpanDialog);
        TimeY1->setObjectName(QString::fromUtf8("TimeY1"));
        TimeY1->setEnabled(true);

        gridLayout->addWidget(TimeY1, 0, 1, 1, 1);

        TimeEndF = new QCheckBox(SpanDialog);
        TimeEndF->setObjectName(QString::fromUtf8("TimeEndF"));
        TimeEndF->setChecked(false);

        gridLayout->addWidget(TimeEndF, 1, 0, 1, 1);

        TimeY2 = new QDateEdit(SpanDialog);
        TimeY2->setObjectName(QString::fromUtf8("TimeY2"));
        TimeY2->setEnabled(true);

        gridLayout->addWidget(TimeY2, 1, 1, 1, 1);

        TimeIntF = new QCheckBox(SpanDialog);
        TimeIntF->setObjectName(QString::fromUtf8("TimeIntF"));
        TimeIntF->setChecked(false);

        gridLayout->addWidget(TimeIntF, 2, 0, 1, 1);

        BtnOk = new QPushButton(SpanDialog);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 3, 1, 1, 1);

        EditTimeInt = new QComboBox(SpanDialog);
        EditTimeInt->addItem(QString());
        EditTimeInt->addItem(QString());
        EditTimeInt->addItem(QString());
        EditTimeInt->addItem(QString());
        EditTimeInt->addItem(QString());
        EditTimeInt->addItem(QString());
        EditTimeInt->addItem(QString());
        EditTimeInt->addItem(QString());
        EditTimeInt->addItem(QString());
        EditTimeInt->addItem(QString());
        EditTimeInt->addItem(QString());
        EditTimeInt->addItem(QString());
        EditTimeInt->addItem(QString());
        EditTimeInt->addItem(QString());
        EditTimeInt->addItem(QString());
        EditTimeInt->setObjectName(QString::fromUtf8("EditTimeInt"));
        EditTimeInt->setEnabled(true);

        gridLayout->addWidget(EditTimeInt, 2, 1, 1, 1);

        TimeH2 = new QTimeEdit(SpanDialog);
        TimeH2->setObjectName(QString::fromUtf8("TimeH2"));
        TimeH2->setEnabled(true);

        gridLayout->addWidget(TimeH2, 1, 2, 1, 1);

        TimeH1 = new QTimeEdit(SpanDialog);
        TimeH1->setObjectName(QString::fromUtf8("TimeH1"));
        TimeH1->setEnabled(true);

        gridLayout->addWidget(TimeH1, 0, 2, 1, 1);

        BtnCancel = new QPushButton(SpanDialog);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 3, 2, 1, 1);


        retranslateUi(SpanDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(SpanDialog);
    } // setupUi

    void retranslateUi(QWidget *SpanDialog)
    {
        SpanDialog->setWindowTitle(QCoreApplication::translate("SpanDialog", "Time Span/Interval", nullptr));
#if QT_CONFIG(tooltip)
        SpanDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimeStartF->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeStartF->setText(QCoreApplication::translate("SpanDialog", "Time Start (GPST)", nullptr));
#if QT_CONFIG(tooltip)
        TimeY1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeY1->setDisplayFormat(QCoreApplication::translate("SpanDialog", "dd.MM.yyyy", nullptr));
#if QT_CONFIG(tooltip)
        TimeEndF->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeEndF->setText(QCoreApplication::translate("SpanDialog", "Time End (GPST)", nullptr));
#if QT_CONFIG(tooltip)
        TimeY2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeY2->setDisplayFormat(QCoreApplication::translate("SpanDialog", "dd.MM.yyyy", nullptr));
#if QT_CONFIG(tooltip)
        TimeIntF->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeIntF->setText(QCoreApplication::translate("SpanDialog", "Interval (s)", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("SpanDialog", "&OK", nullptr));
        EditTimeInt->setItemText(0, QCoreApplication::translate("SpanDialog", "0.1", nullptr));
        EditTimeInt->setItemText(1, QCoreApplication::translate("SpanDialog", "0.2", nullptr));
        EditTimeInt->setItemText(2, QCoreApplication::translate("SpanDialog", "0.25", nullptr));
        EditTimeInt->setItemText(3, QCoreApplication::translate("SpanDialog", "0.5", nullptr));
        EditTimeInt->setItemText(4, QCoreApplication::translate("SpanDialog", "1", nullptr));
        EditTimeInt->setItemText(5, QCoreApplication::translate("SpanDialog", "2", nullptr));
        EditTimeInt->setItemText(6, QCoreApplication::translate("SpanDialog", "5", nullptr));
        EditTimeInt->setItemText(7, QCoreApplication::translate("SpanDialog", "10", nullptr));
        EditTimeInt->setItemText(8, QCoreApplication::translate("SpanDialog", "15", nullptr));
        EditTimeInt->setItemText(9, QCoreApplication::translate("SpanDialog", "30", nullptr));
        EditTimeInt->setItemText(10, QCoreApplication::translate("SpanDialog", "60", nullptr));
        EditTimeInt->setItemText(11, QCoreApplication::translate("SpanDialog", "300", nullptr));
        EditTimeInt->setItemText(12, QCoreApplication::translate("SpanDialog", "600", nullptr));
        EditTimeInt->setItemText(13, QCoreApplication::translate("SpanDialog", "1800", nullptr));
        EditTimeInt->setItemText(14, QCoreApplication::translate("SpanDialog", "3600", nullptr));

#if QT_CONFIG(tooltip)
        EditTimeInt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimeH2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimeH1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("SpanDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpanDialog: public Ui_SpanDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSPANDLG_H
