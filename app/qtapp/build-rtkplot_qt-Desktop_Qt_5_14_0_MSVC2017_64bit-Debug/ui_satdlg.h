/********************************************************************************
** Form generated from reading UI file 'satdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATDLG_H
#define UI_SATDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SatDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *Panel2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *PRN09;
    QCheckBox *PRN10;
    QCheckBox *PRN11;
    QCheckBox *PRN12;
    QCheckBox *PRN13;
    QCheckBox *PRN14;
    QCheckBox *PRN15;
    QCheckBox *PRN16;
    QWidget *Panel3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *PRN17;
    QCheckBox *PRN18;
    QCheckBox *PRN19;
    QCheckBox *PRN20;
    QCheckBox *PRN21;
    QCheckBox *PRN22;
    QCheckBox *PRN23;
    QCheckBox *PRN24;
    QWidget *Panel5;
    QVBoxLayout *verticalLayout;
    QCheckBox *PRN25;
    QCheckBox *PRN26;
    QCheckBox *PRN27;
    QCheckBox *PRN28;
    QCheckBox *PRN29;
    QCheckBox *PRN30;
    QCheckBox *PRN31;
    QCheckBox *PRN32;
    QWidget *Panel4;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *SBAS;
    QCheckBox *GLO;
    QCheckBox *GAL;
    QCheckBox *PRN33;
    QWidget *Panel1;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *PRN01;
    QCheckBox *PRN02;
    QCheckBox *PRN03;
    QCheckBox *PRN04;
    QCheckBox *PRN05;
    QCheckBox *PRN06;
    QCheckBox *PRN07;
    QCheckBox *PRN08;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnChkAll;
    QPushButton *BtnUnchkAll;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *SatDialog)
    {
        if (SatDialog->objectName().isEmpty())
            SatDialog->setObjectName(QString::fromUtf8("SatDialog"));
        SatDialog->resize(501, 271);
        gridLayout = new QGridLayout(SatDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Panel2 = new QWidget(SatDialog);
        Panel2->setObjectName(QString::fromUtf8("Panel2"));
        Panel2->setEnabled(true);
        Panel2->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_2 = new QVBoxLayout(Panel2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        PRN09 = new QCheckBox(Panel2);
        PRN09->setObjectName(QString::fromUtf8("PRN09"));
        PRN09->setChecked(false);

        verticalLayout_2->addWidget(PRN09);

        PRN10 = new QCheckBox(Panel2);
        PRN10->setObjectName(QString::fromUtf8("PRN10"));
        PRN10->setChecked(false);

        verticalLayout_2->addWidget(PRN10);

        PRN11 = new QCheckBox(Panel2);
        PRN11->setObjectName(QString::fromUtf8("PRN11"));
        PRN11->setChecked(false);

        verticalLayout_2->addWidget(PRN11);

        PRN12 = new QCheckBox(Panel2);
        PRN12->setObjectName(QString::fromUtf8("PRN12"));
        PRN12->setChecked(false);

        verticalLayout_2->addWidget(PRN12);

        PRN13 = new QCheckBox(Panel2);
        PRN13->setObjectName(QString::fromUtf8("PRN13"));
        PRN13->setChecked(false);

        verticalLayout_2->addWidget(PRN13);

        PRN14 = new QCheckBox(Panel2);
        PRN14->setObjectName(QString::fromUtf8("PRN14"));
        PRN14->setChecked(false);

        verticalLayout_2->addWidget(PRN14);

        PRN15 = new QCheckBox(Panel2);
        PRN15->setObjectName(QString::fromUtf8("PRN15"));
        PRN15->setChecked(false);

        verticalLayout_2->addWidget(PRN15);

        PRN16 = new QCheckBox(Panel2);
        PRN16->setObjectName(QString::fromUtf8("PRN16"));
        PRN16->setChecked(false);

        verticalLayout_2->addWidget(PRN16);


        gridLayout->addWidget(Panel2, 0, 2, 1, 1);

        Panel3 = new QWidget(SatDialog);
        Panel3->setObjectName(QString::fromUtf8("Panel3"));
        Panel3->setEnabled(true);
        Panel3->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_4 = new QVBoxLayout(Panel3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        PRN17 = new QCheckBox(Panel3);
        PRN17->setObjectName(QString::fromUtf8("PRN17"));
        PRN17->setChecked(false);

        verticalLayout_4->addWidget(PRN17);

        PRN18 = new QCheckBox(Panel3);
        PRN18->setObjectName(QString::fromUtf8("PRN18"));
        PRN18->setChecked(false);

        verticalLayout_4->addWidget(PRN18);

        PRN19 = new QCheckBox(Panel3);
        PRN19->setObjectName(QString::fromUtf8("PRN19"));
        PRN19->setChecked(false);

        verticalLayout_4->addWidget(PRN19);

        PRN20 = new QCheckBox(Panel3);
        PRN20->setObjectName(QString::fromUtf8("PRN20"));
        PRN20->setChecked(false);

        verticalLayout_4->addWidget(PRN20);

        PRN21 = new QCheckBox(Panel3);
        PRN21->setObjectName(QString::fromUtf8("PRN21"));
        PRN21->setChecked(false);

        verticalLayout_4->addWidget(PRN21);

        PRN22 = new QCheckBox(Panel3);
        PRN22->setObjectName(QString::fromUtf8("PRN22"));
        PRN22->setChecked(false);

        verticalLayout_4->addWidget(PRN22);

        PRN23 = new QCheckBox(Panel3);
        PRN23->setObjectName(QString::fromUtf8("PRN23"));
        PRN23->setChecked(false);

        verticalLayout_4->addWidget(PRN23);

        PRN24 = new QCheckBox(Panel3);
        PRN24->setObjectName(QString::fromUtf8("PRN24"));
        PRN24->setChecked(false);

        verticalLayout_4->addWidget(PRN24);


        gridLayout->addWidget(Panel3, 0, 3, 1, 1);

        Panel5 = new QWidget(SatDialog);
        Panel5->setObjectName(QString::fromUtf8("Panel5"));
        Panel5->setEnabled(true);
        Panel5->setLayoutDirection(Qt::LeftToRight);
        verticalLayout = new QVBoxLayout(Panel5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        PRN25 = new QCheckBox(Panel5);
        PRN25->setObjectName(QString::fromUtf8("PRN25"));
        PRN25->setChecked(false);

        verticalLayout->addWidget(PRN25);

        PRN26 = new QCheckBox(Panel5);
        PRN26->setObjectName(QString::fromUtf8("PRN26"));
        PRN26->setChecked(false);

        verticalLayout->addWidget(PRN26);

        PRN27 = new QCheckBox(Panel5);
        PRN27->setObjectName(QString::fromUtf8("PRN27"));
        PRN27->setChecked(false);

        verticalLayout->addWidget(PRN27);

        PRN28 = new QCheckBox(Panel5);
        PRN28->setObjectName(QString::fromUtf8("PRN28"));
        PRN28->setChecked(false);

        verticalLayout->addWidget(PRN28);

        PRN29 = new QCheckBox(Panel5);
        PRN29->setObjectName(QString::fromUtf8("PRN29"));
        PRN29->setChecked(false);

        verticalLayout->addWidget(PRN29);

        PRN30 = new QCheckBox(Panel5);
        PRN30->setObjectName(QString::fromUtf8("PRN30"));
        PRN30->setChecked(false);

        verticalLayout->addWidget(PRN30);

        PRN31 = new QCheckBox(Panel5);
        PRN31->setObjectName(QString::fromUtf8("PRN31"));
        PRN31->setChecked(false);

        verticalLayout->addWidget(PRN31);

        PRN32 = new QCheckBox(Panel5);
        PRN32->setObjectName(QString::fromUtf8("PRN32"));
        PRN32->setChecked(false);

        verticalLayout->addWidget(PRN32);


        gridLayout->addWidget(Panel5, 0, 4, 1, 1);

        Panel4 = new QWidget(SatDialog);
        Panel4->setObjectName(QString::fromUtf8("Panel4"));
        Panel4->setEnabled(true);
        Panel4->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_5 = new QVBoxLayout(Panel4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        SBAS = new QCheckBox(Panel4);
        SBAS->setObjectName(QString::fromUtf8("SBAS"));
        SBAS->setChecked(false);

        verticalLayout_5->addWidget(SBAS);

        GLO = new QCheckBox(Panel4);
        GLO->setObjectName(QString::fromUtf8("GLO"));
        GLO->setChecked(false);

        verticalLayout_5->addWidget(GLO);

        GAL = new QCheckBox(Panel4);
        GAL->setObjectName(QString::fromUtf8("GAL"));
        GAL->setChecked(false);

        verticalLayout_5->addWidget(GAL);

        PRN33 = new QCheckBox(Panel4);
        PRN33->setObjectName(QString::fromUtf8("PRN33"));
        PRN33->setChecked(false);

        verticalLayout_5->addWidget(PRN33);


        gridLayout->addWidget(Panel4, 0, 5, 1, 1);

        Panel1 = new QWidget(SatDialog);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_3 = new QVBoxLayout(Panel1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        PRN01 = new QCheckBox(Panel1);
        PRN01->setObjectName(QString::fromUtf8("PRN01"));
        PRN01->setChecked(false);

        verticalLayout_3->addWidget(PRN01);

        PRN02 = new QCheckBox(Panel1);
        PRN02->setObjectName(QString::fromUtf8("PRN02"));
        PRN02->setChecked(false);

        verticalLayout_3->addWidget(PRN02);

        PRN03 = new QCheckBox(Panel1);
        PRN03->setObjectName(QString::fromUtf8("PRN03"));
        PRN03->setChecked(false);

        verticalLayout_3->addWidget(PRN03);

        PRN04 = new QCheckBox(Panel1);
        PRN04->setObjectName(QString::fromUtf8("PRN04"));
        PRN04->setChecked(false);

        verticalLayout_3->addWidget(PRN04);

        PRN05 = new QCheckBox(Panel1);
        PRN05->setObjectName(QString::fromUtf8("PRN05"));
        PRN05->setChecked(false);

        verticalLayout_3->addWidget(PRN05);

        PRN06 = new QCheckBox(Panel1);
        PRN06->setObjectName(QString::fromUtf8("PRN06"));
        PRN06->setChecked(false);

        verticalLayout_3->addWidget(PRN06);

        PRN07 = new QCheckBox(Panel1);
        PRN07->setObjectName(QString::fromUtf8("PRN07"));
        PRN07->setChecked(false);

        verticalLayout_3->addWidget(PRN07);

        PRN08 = new QCheckBox(Panel1);
        PRN08->setObjectName(QString::fromUtf8("PRN08"));
        PRN08->setChecked(false);

        verticalLayout_3->addWidget(PRN08);


        gridLayout->addWidget(Panel1, 0, 1, 1, 1);

        widget = new QWidget(SatDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnChkAll = new QPushButton(widget);
        BtnChkAll->setObjectName(QString::fromUtf8("BtnChkAll"));
        BtnChkAll->setEnabled(true);

        horizontalLayout->addWidget(BtnChkAll);

        BtnUnchkAll = new QPushButton(widget);
        BtnUnchkAll->setObjectName(QString::fromUtf8("BtnUnchkAll"));
        BtnUnchkAll->setEnabled(true);

        horizontalLayout->addWidget(BtnUnchkAll);

        BtnOk = new QPushButton(widget);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        horizontalLayout->addWidget(BtnOk);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        horizontalLayout->addWidget(BtnCancel);


        gridLayout->addWidget(widget, 1, 1, 1, 5);


        retranslateUi(SatDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(SatDialog);
    } // setupUi

    void retranslateUi(QWidget *SatDialog)
    {
        SatDialog->setWindowTitle(QCoreApplication::translate("SatDialog", "Satellites", nullptr));
#if QT_CONFIG(tooltip)
        SatDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel2->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        PRN09->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN09->setText(QCoreApplication::translate("SatDialog", "PRN09", nullptr));
#if QT_CONFIG(tooltip)
        PRN10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN10->setText(QCoreApplication::translate("SatDialog", "PRN10", nullptr));
#if QT_CONFIG(tooltip)
        PRN11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN11->setText(QCoreApplication::translate("SatDialog", "PRN11", nullptr));
#if QT_CONFIG(tooltip)
        PRN12->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN12->setText(QCoreApplication::translate("SatDialog", "PRN12", nullptr));
#if QT_CONFIG(tooltip)
        PRN13->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN13->setText(QCoreApplication::translate("SatDialog", "PRN13", nullptr));
#if QT_CONFIG(tooltip)
        PRN14->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN14->setText(QCoreApplication::translate("SatDialog", "PRN14", nullptr));
#if QT_CONFIG(tooltip)
        PRN15->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN15->setText(QCoreApplication::translate("SatDialog", "PRN15", nullptr));
#if QT_CONFIG(tooltip)
        PRN16->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN16->setText(QCoreApplication::translate("SatDialog", "PRN16", nullptr));
#if QT_CONFIG(tooltip)
        Panel3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel3->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        PRN17->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN17->setText(QCoreApplication::translate("SatDialog", "PRN17", nullptr));
#if QT_CONFIG(tooltip)
        PRN18->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN18->setText(QCoreApplication::translate("SatDialog", "PRN18", nullptr));
#if QT_CONFIG(tooltip)
        PRN19->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN19->setText(QCoreApplication::translate("SatDialog", "PRN19", nullptr));
#if QT_CONFIG(tooltip)
        PRN20->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN20->setText(QCoreApplication::translate("SatDialog", "PRN20", nullptr));
#if QT_CONFIG(tooltip)
        PRN21->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN21->setText(QCoreApplication::translate("SatDialog", "PRN21", nullptr));
#if QT_CONFIG(tooltip)
        PRN22->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN22->setText(QCoreApplication::translate("SatDialog", "PRN22", nullptr));
#if QT_CONFIG(tooltip)
        PRN23->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN23->setText(QCoreApplication::translate("SatDialog", "PRN23", nullptr));
#if QT_CONFIG(tooltip)
        PRN24->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN24->setText(QCoreApplication::translate("SatDialog", "PRN24", nullptr));
#if QT_CONFIG(tooltip)
        Panel5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel5->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        PRN25->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN25->setText(QCoreApplication::translate("SatDialog", "PRN25", nullptr));
#if QT_CONFIG(tooltip)
        PRN26->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN26->setText(QCoreApplication::translate("SatDialog", "PRN26", nullptr));
#if QT_CONFIG(tooltip)
        PRN27->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN27->setText(QCoreApplication::translate("SatDialog", "PRN27", nullptr));
#if QT_CONFIG(tooltip)
        PRN28->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN28->setText(QCoreApplication::translate("SatDialog", "PRN28", nullptr));
#if QT_CONFIG(tooltip)
        PRN29->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN29->setText(QCoreApplication::translate("SatDialog", "PRN29", nullptr));
#if QT_CONFIG(tooltip)
        PRN30->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN30->setText(QCoreApplication::translate("SatDialog", "PRN30", nullptr));
#if QT_CONFIG(tooltip)
        PRN31->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN31->setText(QCoreApplication::translate("SatDialog", "PRN31", nullptr));
#if QT_CONFIG(tooltip)
        PRN32->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN32->setText(QCoreApplication::translate("SatDialog", "PRN32", nullptr));
#if QT_CONFIG(tooltip)
        Panel4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel4->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        SBAS->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SBAS->setText(QCoreApplication::translate("SatDialog", "SBAS", nullptr));
#if QT_CONFIG(tooltip)
        GLO->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GLO->setText(QCoreApplication::translate("SatDialog", "GLO", nullptr));
#if QT_CONFIG(tooltip)
        GAL->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GAL->setText(QCoreApplication::translate("SatDialog", "GAL", nullptr));
#if QT_CONFIG(tooltip)
        PRN33->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN33->setText(QCoreApplication::translate("SatDialog", "PRN33-", nullptr));
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        PRN01->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN01->setText(QCoreApplication::translate("SatDialog", "PRN01", nullptr));
#if QT_CONFIG(tooltip)
        PRN02->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN02->setText(QCoreApplication::translate("SatDialog", "PRN02", nullptr));
#if QT_CONFIG(tooltip)
        PRN03->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN03->setText(QCoreApplication::translate("SatDialog", "PRN03", nullptr));
#if QT_CONFIG(tooltip)
        PRN04->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN04->setText(QCoreApplication::translate("SatDialog", "PRN04", nullptr));
#if QT_CONFIG(tooltip)
        PRN05->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN05->setText(QCoreApplication::translate("SatDialog", "PRN05", nullptr));
#if QT_CONFIG(tooltip)
        PRN06->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN06->setText(QCoreApplication::translate("SatDialog", "PRN06", nullptr));
#if QT_CONFIG(tooltip)
        PRN07->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN07->setText(QCoreApplication::translate("SatDialog", "PRN07", nullptr));
#if QT_CONFIG(tooltip)
        PRN08->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PRN08->setText(QCoreApplication::translate("SatDialog", "PRN08", nullptr));
#if QT_CONFIG(tooltip)
        BtnChkAll->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnChkAll->setText(QCoreApplication::translate("SatDialog", "&Check All", nullptr));
#if QT_CONFIG(tooltip)
        BtnUnchkAll->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnUnchkAll->setText(QCoreApplication::translate("SatDialog", "&Uncheck All", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("SatDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("SatDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SatDialog: public Ui_SatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATDLG_H
