/********************************************************************************
** Form generated from reading UI file 'conndlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNDLG_H
#define UI_CONNDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label1;
    QLabel *Label2;
    QLabel *Label4;
    QLabel *Label3;
    QLabel *Label9;
    QComboBox *SelStream1;
    QPushButton *BtnOpt1;
    QPushButton *BtnCmd1;
    QComboBox *SolFormat1;
    QLabel *Label10;
    QComboBox *SelStream2;
    QPushButton *BtnOpt2;
    QPushButton *BtnCmd2;
    QComboBox *SolFormat2;
    QLabel *Label5;
    QLabel *Label6;
    QLabel *Label7;
    QComboBox *TimeFormS;
    QComboBox *DegFormS;
    QLineEdit *FieldSepS;
    QLabel *Label8;
    QLineEdit *TimeOutTimeE;
    QLineEdit *ReConnTimeE;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *ConnectDialog)
    {
        if (ConnectDialog->objectName().isEmpty())
            ConnectDialog->setObjectName(QString::fromUtf8("ConnectDialog"));
        ConnectDialog->resize(491, 229);
        gridLayout = new QGridLayout(ConnectDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Label1 = new QLabel(ConnectDialog);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 0, 1, 1, 1);

        Label2 = new QLabel(ConnectDialog);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 0, 3, 1, 1);

        Label4 = new QLabel(ConnectDialog);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);

        gridLayout->addWidget(Label4, 0, 4, 1, 1);

        Label3 = new QLabel(ConnectDialog);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 0, 5, 1, 3);

        Label9 = new QLabel(ConnectDialog);
        Label9->setObjectName(QString::fromUtf8("Label9"));
        Label9->setEnabled(true);

        gridLayout->addWidget(Label9, 1, 0, 1, 1);

        SelStream1 = new QComboBox(ConnectDialog);
        SelStream1->addItem(QString());
        SelStream1->addItem(QString());
        SelStream1->addItem(QString());
        SelStream1->addItem(QString());
        SelStream1->addItem(QString());
        SelStream1->addItem(QString());
        SelStream1->setObjectName(QString::fromUtf8("SelStream1"));
        SelStream1->setEnabled(true);

        gridLayout->addWidget(SelStream1, 1, 1, 1, 2);

        BtnOpt1 = new QPushButton(ConnectDialog);
        BtnOpt1->setObjectName(QString::fromUtf8("BtnOpt1"));
        BtnOpt1->setEnabled(true);

        gridLayout->addWidget(BtnOpt1, 1, 3, 1, 1);

        BtnCmd1 = new QPushButton(ConnectDialog);
        BtnCmd1->setObjectName(QString::fromUtf8("BtnCmd1"));
        BtnCmd1->setEnabled(true);

        gridLayout->addWidget(BtnCmd1, 1, 4, 1, 1);

        SolFormat1 = new QComboBox(ConnectDialog);
        SolFormat1->addItem(QString());
        SolFormat1->addItem(QString());
        SolFormat1->addItem(QString());
        SolFormat1->addItem(QString());
        SolFormat1->addItem(QString());
        SolFormat1->setObjectName(QString::fromUtf8("SolFormat1"));
        SolFormat1->setEnabled(true);

        gridLayout->addWidget(SolFormat1, 1, 5, 1, 3);

        Label10 = new QLabel(ConnectDialog);
        Label10->setObjectName(QString::fromUtf8("Label10"));
        Label10->setEnabled(true);

        gridLayout->addWidget(Label10, 2, 0, 1, 1);

        SelStream2 = new QComboBox(ConnectDialog);
        SelStream2->addItem(QString());
        SelStream2->addItem(QString());
        SelStream2->addItem(QString());
        SelStream2->addItem(QString());
        SelStream2->addItem(QString());
        SelStream2->addItem(QString());
        SelStream2->setObjectName(QString::fromUtf8("SelStream2"));
        SelStream2->setEnabled(true);

        gridLayout->addWidget(SelStream2, 2, 1, 1, 2);

        BtnOpt2 = new QPushButton(ConnectDialog);
        BtnOpt2->setObjectName(QString::fromUtf8("BtnOpt2"));
        BtnOpt2->setEnabled(true);

        gridLayout->addWidget(BtnOpt2, 2, 3, 1, 1);

        BtnCmd2 = new QPushButton(ConnectDialog);
        BtnCmd2->setObjectName(QString::fromUtf8("BtnCmd2"));
        BtnCmd2->setEnabled(true);

        gridLayout->addWidget(BtnCmd2, 2, 4, 1, 1);

        SolFormat2 = new QComboBox(ConnectDialog);
        SolFormat2->addItem(QString());
        SolFormat2->addItem(QString());
        SolFormat2->addItem(QString());
        SolFormat2->addItem(QString());
        SolFormat2->addItem(QString());
        SolFormat2->setObjectName(QString::fromUtf8("SolFormat2"));
        SolFormat2->setEnabled(true);

        gridLayout->addWidget(SolFormat2, 2, 5, 1, 3);

        Label5 = new QLabel(ConnectDialog);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 3, 1, 1, 1);

        Label6 = new QLabel(ConnectDialog);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 3, 3, 1, 4);

        Label7 = new QLabel(ConnectDialog);
        Label7->setObjectName(QString::fromUtf8("Label7"));
        Label7->setEnabled(true);

        gridLayout->addWidget(Label7, 3, 7, 1, 1);

        TimeFormS = new QComboBox(ConnectDialog);
        TimeFormS->addItem(QString());
        TimeFormS->addItem(QString());
        TimeFormS->addItem(QString());
        TimeFormS->addItem(QString());
        TimeFormS->setObjectName(QString::fromUtf8("TimeFormS"));
        TimeFormS->setEnabled(true);

        gridLayout->addWidget(TimeFormS, 4, 0, 1, 3);

        DegFormS = new QComboBox(ConnectDialog);
        DegFormS->addItem(QString());
        DegFormS->addItem(QString());
        DegFormS->setObjectName(QString::fromUtf8("DegFormS"));
        DegFormS->setEnabled(true);

        gridLayout->addWidget(DegFormS, 4, 3, 1, 4);

        FieldSepS = new QLineEdit(ConnectDialog);
        FieldSepS->setObjectName(QString::fromUtf8("FieldSepS"));
        FieldSepS->setEnabled(true);

        gridLayout->addWidget(FieldSepS, 4, 7, 1, 1);

        Label8 = new QLabel(ConnectDialog);
        Label8->setObjectName(QString::fromUtf8("Label8"));
        Label8->setEnabled(true);

        gridLayout->addWidget(Label8, 5, 0, 1, 5);

        TimeOutTimeE = new QLineEdit(ConnectDialog);
        TimeOutTimeE->setObjectName(QString::fromUtf8("TimeOutTimeE"));
        TimeOutTimeE->setEnabled(true);

        gridLayout->addWidget(TimeOutTimeE, 5, 5, 1, 2);

        ReConnTimeE = new QLineEdit(ConnectDialog);
        ReConnTimeE->setObjectName(QString::fromUtf8("ReConnTimeE"));
        ReConnTimeE->setEnabled(true);

        gridLayout->addWidget(ReConnTimeE, 5, 7, 1, 1);

        BtnOk = new QPushButton(ConnectDialog);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 6, 2, 1, 4);

        BtnCancel = new QPushButton(ConnectDialog);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 6, 6, 1, 2);


        retranslateUi(ConnectDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(ConnectDialog);
    } // setupUi

    void retranslateUi(QWidget *ConnectDialog)
    {
        ConnectDialog->setWindowTitle(QCoreApplication::translate("ConnectDialog", "Connection Settings", nullptr));
#if QT_CONFIG(tooltip)
        ConnectDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("ConnectDialog", "Stream Type", nullptr));
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("ConnectDialog", "Opt", nullptr));
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QCoreApplication::translate("ConnectDialog", "Cmd", nullptr));
#if QT_CONFIG(tooltip)
        Label3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label3->setText(QCoreApplication::translate("ConnectDialog", "Solution Format", nullptr));
#if QT_CONFIG(tooltip)
        Label9->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label9->setText(QCoreApplication::translate("ConnectDialog", "(1)", nullptr));
        SelStream1->setItemText(0, QString());
        SelStream1->setItemText(1, QCoreApplication::translate("ConnectDialog", "Serial", nullptr));
        SelStream1->setItemText(2, QCoreApplication::translate("ConnectDialog", "TCP Client", nullptr));
        SelStream1->setItemText(3, QCoreApplication::translate("ConnectDialog", "TCP Server", nullptr));
        SelStream1->setItemText(4, QCoreApplication::translate("ConnectDialog", "NTRIP Client", nullptr));
        SelStream1->setItemText(5, QCoreApplication::translate("ConnectDialog", "File", nullptr));

#if QT_CONFIG(tooltip)
        SelStream1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnOpt1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOpt1->setText(QCoreApplication::translate("ConnectDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnCmd1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCmd1->setText(QCoreApplication::translate("ConnectDialog", "...", nullptr));
        SolFormat1->setItemText(0, QCoreApplication::translate("ConnectDialog", "Lat/Lon/Height", nullptr));
        SolFormat1->setItemText(1, QCoreApplication::translate("ConnectDialog", "X/Y/Z-ECEF", nullptr));
        SolFormat1->setItemText(2, QCoreApplication::translate("ConnectDialog", "E/N/U-Baseline", nullptr));
        SolFormat1->setItemText(3, QCoreApplication::translate("ConnectDialog", "NMEA0183", nullptr));
        SolFormat1->setItemText(4, QCoreApplication::translate("ConnectDialog", "Solution Status", nullptr));

#if QT_CONFIG(tooltip)
        SolFormat1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label10->setText(QCoreApplication::translate("ConnectDialog", "(2)", nullptr));
        SelStream2->setItemText(0, QString());
        SelStream2->setItemText(1, QCoreApplication::translate("ConnectDialog", "Serial", nullptr));
        SelStream2->setItemText(2, QCoreApplication::translate("ConnectDialog", "TCP Client", nullptr));
        SelStream2->setItemText(3, QCoreApplication::translate("ConnectDialog", "TCP Server", nullptr));
        SelStream2->setItemText(4, QCoreApplication::translate("ConnectDialog", "NTRIP Client", nullptr));
        SelStream2->setItemText(5, QCoreApplication::translate("ConnectDialog", "File", nullptr));

#if QT_CONFIG(tooltip)
        SelStream2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnOpt2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOpt2->setText(QCoreApplication::translate("ConnectDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnCmd2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCmd2->setText(QCoreApplication::translate("ConnectDialog", "...", nullptr));
        SolFormat2->setItemText(0, QCoreApplication::translate("ConnectDialog", "Lat/Lon/Height", nullptr));
        SolFormat2->setItemText(1, QCoreApplication::translate("ConnectDialog", "X/Y/Z-ECEF", nullptr));
        SolFormat2->setItemText(2, QCoreApplication::translate("ConnectDialog", "E/N/U-Baseline", nullptr));
        SolFormat2->setItemText(3, QCoreApplication::translate("ConnectDialog", "NMEA0183", nullptr));
        SolFormat2->setItemText(4, QCoreApplication::translate("ConnectDialog", "Solution Status", nullptr));

#if QT_CONFIG(tooltip)
        SolFormat2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("ConnectDialog", "Time Format", nullptr));
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("ConnectDialog", "Lat/Lon Format", nullptr));
#if QT_CONFIG(tooltip)
        Label7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label7->setText(QCoreApplication::translate("ConnectDialog", "Field Sep", nullptr));
        TimeFormS->setItemText(0, QCoreApplication::translate("ConnectDialog", "ww ssss.ss GPST", nullptr));
        TimeFormS->setItemText(1, QCoreApplication::translate("ConnectDialog", "hh:mm:ss GPST", nullptr));
        TimeFormS->setItemText(2, QCoreApplication::translate("ConnectDialog", "hh:mm:ss UTC", nullptr));
        TimeFormS->setItemText(3, QCoreApplication::translate("ConnectDialog", "hh:mm:ss JST", nullptr));

#if QT_CONFIG(tooltip)
        TimeFormS->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        DegFormS->setItemText(0, QCoreApplication::translate("ConnectDialog", "ddd.ddddddd", nullptr));
        DegFormS->setItemText(1, QCoreApplication::translate("ConnectDialog", "ddd mm ss.sss", nullptr));

#if QT_CONFIG(tooltip)
        DegFormS->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        FieldSepS->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FieldSepS->setText(QString());
#if QT_CONFIG(tooltip)
        Label8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label8->setText(QCoreApplication::translate("ConnectDialog", "Timeout/Re-connect Intvl (ms)", nullptr));
#if QT_CONFIG(tooltip)
        TimeOutTimeE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeOutTimeE->setText(QCoreApplication::translate("ConnectDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        ReConnTimeE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ReConnTimeE->setText(QCoreApplication::translate("ConnectDialog", "10000", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("ConnectDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("ConnectDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectDialog: public Ui_ConnectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNDLG_H
