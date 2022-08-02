/********************************************************************************
** Form generated from reading UI file 'skydlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKYDLG_H
#define UI_SKYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkyImgDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout;
    QLabel *Label1;
    QDoubleSpinBox *SkySize1;
    QLabel *Label2;
    QDoubleSpinBox *SkySize2;
    QCheckBox *SkyFlip;
    QWidget *Panel2;
    QGridLayout *gridLayout;
    QLabel *Label6;
    QDoubleSpinBox *SkyCent1;
    QDoubleSpinBox *SkyFov1;
    QLabel *Label9;
    QLabel *Label7;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *Label17;
    QLineEdit *SkyDest4;
    QLineEdit *SkyDest2;
    QLineEdit *SkyDest7;
    QLineEdit *SkyDest3;
    QLineEdit *SkyDest9;
    QLineEdit *SkyDest8;
    QLineEdit *SkyDest5;
    QLineEdit *SkyDest1;
    QLineEdit *SkyDest6;
    QLabel *Label19;
    QLabel *Label16;
    QLabel *Label18;
    QLabel *Label15;
    QLabel *Label14;
    QLabel *Label13;
    QLabel *Label12;
    QLabel *Label11;
    QLabel *Label20;
    QLabel *Label5;
    QDoubleSpinBox *SkyCent2;
    QLabel *Label3;
    QDoubleSpinBox *SkyFov2;
    QLabel *Label4;
    QDoubleSpinBox *SkyScale;
    QDoubleSpinBox *SkyFov3;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QCheckBox *SkyDestCorr;
    QCheckBox *SkyElMask;
    QLabel *Label8;
    QComboBox *SkyRes;
    QCheckBox *SkyBinarize;
    QDoubleSpinBox *SkyBinThres1;
    QDoubleSpinBox *SkyBinThres2;
    QLabel *Label10;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnSave;
    QPushButton *BtnLoad;
    QPushButton *BtnGenMask;
    QPushButton *BtnUpdate;
    QPushButton *BtnClose;

    void setupUi(QWidget *SkyImgDialog)
    {
        if (SkyImgDialog->objectName().isEmpty())
            SkyImgDialog->setObjectName(QString::fromUtf8("SkyImgDialog"));
        SkyImgDialog->resize(602, 267);
        verticalLayout = new QVBoxLayout(SkyImgDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Panel1 = new QWidget(SkyImgDialog);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(Panel1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Label1 = new QLabel(Panel1);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        horizontalLayout->addWidget(Label1);

        SkySize1 = new QDoubleSpinBox(Panel1);
        SkySize1->setObjectName(QString::fromUtf8("SkySize1"));
        SkySize1->setEnabled(true);

        horizontalLayout->addWidget(SkySize1);

        Label2 = new QLabel(Panel1);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        horizontalLayout->addWidget(Label2);

        SkySize2 = new QDoubleSpinBox(Panel1);
        SkySize2->setObjectName(QString::fromUtf8("SkySize2"));
        SkySize2->setEnabled(true);

        horizontalLayout->addWidget(SkySize2);

        SkyFlip = new QCheckBox(Panel1);
        SkyFlip->setObjectName(QString::fromUtf8("SkyFlip"));
        SkyFlip->setChecked(false);

        horizontalLayout->addWidget(SkyFlip);


        verticalLayout->addWidget(Panel1);

        Panel2 = new QWidget(SkyImgDialog);
        Panel2->setObjectName(QString::fromUtf8("Panel2"));
        Panel2->setEnabled(true);
        Panel2->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(Panel2);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Label6 = new QLabel(Panel2);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 2, 0, 1, 1);

        SkyCent1 = new QDoubleSpinBox(Panel2);
        SkyCent1->setObjectName(QString::fromUtf8("SkyCent1"));
        SkyCent1->setMinimum(-1.000000000000000);
        SkyCent1->setMaximum(1.000000000000000);

        gridLayout->addWidget(SkyCent1, 1, 1, 1, 1);

        SkyFov1 = new QDoubleSpinBox(Panel2);
        SkyFov1->setObjectName(QString::fromUtf8("SkyFov1"));
        SkyFov1->setEnabled(true);
        SkyFov1->setMinimum(-180.000000000000000);
        SkyFov1->setMaximum(180.000000000000000);

        gridLayout->addWidget(SkyFov1, 2, 1, 1, 1);

        Label9 = new QLabel(Panel2);
        Label9->setObjectName(QString::fromUtf8("Label9"));
        Label9->setEnabled(true);

        gridLayout->addWidget(Label9, 1, 0, 1, 1);

        Label7 = new QLabel(Panel2);
        Label7->setObjectName(QString::fromUtf8("Label7"));
        Label7->setEnabled(true);

        gridLayout->addWidget(Label7, 0, 0, 1, 2);

        widget_2 = new QWidget(Panel2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Label17 = new QLabel(widget_2);
        Label17->setObjectName(QString::fromUtf8("Label17"));
        Label17->setEnabled(true);

        gridLayout_2->addWidget(Label17, 1, 6, 1, 1);

        SkyDest4 = new QLineEdit(widget_2);
        SkyDest4->setObjectName(QString::fromUtf8("SkyDest4"));
        SkyDest4->setEnabled(true);

        gridLayout_2->addWidget(SkyDest4, 2, 3, 1, 1);

        SkyDest2 = new QLineEdit(widget_2);
        SkyDest2->setObjectName(QString::fromUtf8("SkyDest2"));
        SkyDest2->setEnabled(true);

        gridLayout_2->addWidget(SkyDest2, 2, 1, 1, 1);

        SkyDest7 = new QLineEdit(widget_2);
        SkyDest7->setObjectName(QString::fromUtf8("SkyDest7"));
        SkyDest7->setEnabled(true);

        gridLayout_2->addWidget(SkyDest7, 2, 6, 1, 1);

        SkyDest3 = new QLineEdit(widget_2);
        SkyDest3->setObjectName(QString::fromUtf8("SkyDest3"));
        SkyDest3->setEnabled(true);

        gridLayout_2->addWidget(SkyDest3, 2, 2, 1, 1);

        SkyDest9 = new QLineEdit(widget_2);
        SkyDest9->setObjectName(QString::fromUtf8("SkyDest9"));
        SkyDest9->setEnabled(true);

        gridLayout_2->addWidget(SkyDest9, 2, 9, 1, 1);

        SkyDest8 = new QLineEdit(widget_2);
        SkyDest8->setObjectName(QString::fromUtf8("SkyDest8"));
        SkyDest8->setEnabled(true);

        gridLayout_2->addWidget(SkyDest8, 2, 7, 1, 1);

        SkyDest5 = new QLineEdit(widget_2);
        SkyDest5->setObjectName(QString::fromUtf8("SkyDest5"));
        SkyDest5->setEnabled(true);

        gridLayout_2->addWidget(SkyDest5, 2, 4, 1, 1);

        SkyDest1 = new QLineEdit(widget_2);
        SkyDest1->setObjectName(QString::fromUtf8("SkyDest1"));
        SkyDest1->setEnabled(true);

        gridLayout_2->addWidget(SkyDest1, 2, 0, 1, 1);

        SkyDest6 = new QLineEdit(widget_2);
        SkyDest6->setObjectName(QString::fromUtf8("SkyDest6"));
        SkyDest6->setEnabled(true);

        gridLayout_2->addWidget(SkyDest6, 2, 5, 1, 1);

        Label19 = new QLabel(widget_2);
        Label19->setObjectName(QString::fromUtf8("Label19"));
        Label19->setEnabled(true);

        gridLayout_2->addWidget(Label19, 1, 9, 1, 1);

        Label16 = new QLabel(widget_2);
        Label16->setObjectName(QString::fromUtf8("Label16"));
        Label16->setEnabled(true);

        gridLayout_2->addWidget(Label16, 1, 5, 1, 1);

        Label18 = new QLabel(widget_2);
        Label18->setObjectName(QString::fromUtf8("Label18"));
        Label18->setEnabled(true);

        gridLayout_2->addWidget(Label18, 1, 7, 1, 1);

        Label15 = new QLabel(widget_2);
        Label15->setObjectName(QString::fromUtf8("Label15"));
        Label15->setEnabled(true);

        gridLayout_2->addWidget(Label15, 1, 4, 1, 1);

        Label14 = new QLabel(widget_2);
        Label14->setObjectName(QString::fromUtf8("Label14"));
        Label14->setEnabled(true);

        gridLayout_2->addWidget(Label14, 1, 3, 1, 1);

        Label13 = new QLabel(widget_2);
        Label13->setObjectName(QString::fromUtf8("Label13"));
        Label13->setEnabled(true);

        gridLayout_2->addWidget(Label13, 1, 2, 1, 1);

        Label12 = new QLabel(widget_2);
        Label12->setObjectName(QString::fromUtf8("Label12"));
        Label12->setEnabled(true);

        gridLayout_2->addWidget(Label12, 1, 1, 1, 1);

        Label11 = new QLabel(widget_2);
        Label11->setObjectName(QString::fromUtf8("Label11"));
        Label11->setEnabled(true);

        gridLayout_2->addWidget(Label11, 1, 0, 1, 1);

        Label20 = new QLabel(widget_2);
        Label20->setObjectName(QString::fromUtf8("Label20"));
        Label20->setEnabled(true);

        gridLayout_2->addWidget(Label20, 0, 9, 1, 1);


        gridLayout->addWidget(widget_2, 3, 0, 1, 7);

        Label5 = new QLabel(Panel2);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 1, 2, 1, 1);

        SkyCent2 = new QDoubleSpinBox(Panel2);
        SkyCent2->setObjectName(QString::fromUtf8("SkyCent2"));
        SkyCent2->setEnabled(true);
        SkyCent2->setMinimum(-1.000000000000000);
        SkyCent2->setMaximum(1.000000000000000);

        gridLayout->addWidget(SkyCent2, 1, 3, 1, 1);

        Label3 = new QLabel(Panel2);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 2, 2, 1, 1);

        SkyFov2 = new QDoubleSpinBox(Panel2);
        SkyFov2->setObjectName(QString::fromUtf8("SkyFov2"));
        SkyFov2->setEnabled(true);
        SkyFov2->setMinimum(-180.000000000000000);
        SkyFov2->setMaximum(180.000000000000000);

        gridLayout->addWidget(SkyFov2, 2, 3, 1, 1);

        Label4 = new QLabel(Panel2);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);

        gridLayout->addWidget(Label4, 2, 4, 1, 1);

        SkyScale = new QDoubleSpinBox(Panel2);
        SkyScale->setObjectName(QString::fromUtf8("SkyScale"));
        SkyScale->setEnabled(true);
        SkyScale->setMinimum(-1.000000000000000);
        SkyScale->setMaximum(1.000000000000000);

        gridLayout->addWidget(SkyScale, 1, 5, 1, 1);

        SkyFov3 = new QDoubleSpinBox(Panel2);
        SkyFov3->setObjectName(QString::fromUtf8("SkyFov3"));
        SkyFov3->setEnabled(true);
        SkyFov3->setMinimum(-180.000000000000000);
        SkyFov3->setMaximum(180.000000000000000);

        gridLayout->addWidget(SkyFov3, 2, 5, 1, 1);

        widget_3 = new QWidget(Panel2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        SkyDestCorr = new QCheckBox(widget_3);
        SkyDestCorr->setObjectName(QString::fromUtf8("SkyDestCorr"));
        SkyDestCorr->setChecked(true);

        gridLayout_3->addWidget(SkyDestCorr, 0, 0, 1, 1);

        SkyElMask = new QCheckBox(widget_3);
        SkyElMask->setObjectName(QString::fromUtf8("SkyElMask"));
        SkyElMask->setChecked(true);

        gridLayout_3->addWidget(SkyElMask, 1, 0, 1, 1);

        Label8 = new QLabel(widget_3);
        Label8->setObjectName(QString::fromUtf8("Label8"));
        Label8->setEnabled(true);

        gridLayout_3->addWidget(Label8, 1, 1, 1, 1);

        SkyRes = new QComboBox(widget_3);
        SkyRes->addItem(QString());
        SkyRes->addItem(QString());
        SkyRes->setObjectName(QString::fromUtf8("SkyRes"));
        SkyRes->setEnabled(true);

        gridLayout_3->addWidget(SkyRes, 1, 2, 1, 1);

        SkyBinarize = new QCheckBox(widget_3);
        SkyBinarize->setObjectName(QString::fromUtf8("SkyBinarize"));
        SkyBinarize->setChecked(false);

        gridLayout_3->addWidget(SkyBinarize, 1, 3, 1, 1);

        SkyBinThres1 = new QDoubleSpinBox(widget_3);
        SkyBinThres1->setObjectName(QString::fromUtf8("SkyBinThres1"));
        SkyBinThres1->setMaximum(1.000000000000000);

        gridLayout_3->addWidget(SkyBinThres1, 1, 4, 1, 1);

        SkyBinThres2 = new QDoubleSpinBox(widget_3);
        SkyBinThres2->setObjectName(QString::fromUtf8("SkyBinThres2"));
        SkyBinThres2->setMaximum(1.000000000000000);

        gridLayout_3->addWidget(SkyBinThres2, 1, 5, 1, 1);


        gridLayout->addWidget(widget_3, 4, 0, 1, 6);

        Label10 = new QLabel(Panel2);
        Label10->setObjectName(QString::fromUtf8("Label10"));
        Label10->setEnabled(true);

        gridLayout->addWidget(Label10, 0, 4, 1, 2);


        verticalLayout->addWidget(Panel2);

        widget = new QWidget(SkyImgDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnSave = new QPushButton(widget);
        BtnSave->setObjectName(QString::fromUtf8("BtnSave"));
        BtnSave->setEnabled(true);
        BtnSave->setFlat(false);

        horizontalLayout_2->addWidget(BtnSave);

        BtnLoad = new QPushButton(widget);
        BtnLoad->setObjectName(QString::fromUtf8("BtnLoad"));
        BtnLoad->setEnabled(true);
        BtnLoad->setFlat(false);

        horizontalLayout_2->addWidget(BtnLoad);

        BtnGenMask = new QPushButton(widget);
        BtnGenMask->setObjectName(QString::fromUtf8("BtnGenMask"));
        BtnGenMask->setEnabled(true);
        BtnGenMask->setFlat(false);

        horizontalLayout_2->addWidget(BtnGenMask);

        BtnUpdate = new QPushButton(widget);
        BtnUpdate->setObjectName(QString::fromUtf8("BtnUpdate"));
        BtnUpdate->setEnabled(true);
        BtnUpdate->setFlat(false);

        horizontalLayout_2->addWidget(BtnUpdate);

        BtnClose = new QPushButton(widget);
        BtnClose->setObjectName(QString::fromUtf8("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setFlat(false);

        horizontalLayout_2->addWidget(BtnClose);


        verticalLayout->addWidget(widget);


        retranslateUi(SkyImgDialog);

        QMetaObject::connectSlotsByName(SkyImgDialog);
    } // setupUi

    void retranslateUi(QWidget *SkyImgDialog)
    {
        SkyImgDialog->setWindowTitle(QCoreApplication::translate("SkyImgDialog", "Sky Image", nullptr));
#if QT_CONFIG(tooltip)
        SkyImgDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("SkyImgDialog", "Image Size W/ H (pixels)", nullptr));
#if QT_CONFIG(tooltip)
        SkySize1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("SkyImgDialog", "x", nullptr));
#if QT_CONFIG(tooltip)
        SkySize2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SkyFlip->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SkyFlip->setText(QCoreApplication::translate("SkyImgDialog", "Flip", nullptr));
#if QT_CONFIG(tooltip)
        Panel2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("SkyImgDialog", "Roll", nullptr));
#if QT_CONFIG(tooltip)
        SkyFov1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label9->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label9->setText(QCoreApplication::translate("SkyImgDialog", "X", nullptr));
#if QT_CONFIG(tooltip)
        Label7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label7->setText(QCoreApplication::translate("SkyImgDialog", "Plot Center (pixels)", nullptr));
#if QT_CONFIG(tooltip)
        Label17->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label17->setText(QCoreApplication::translate("SkyImgDialog", "20", nullptr));
#if QT_CONFIG(tooltip)
        SkyDest4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SkyDest4->setText(QCoreApplication::translate("SkyImgDialog", "0.0", nullptr));
#if QT_CONFIG(tooltip)
        SkyDest2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SkyDest2->setText(QCoreApplication::translate("SkyImgDialog", "0.0", nullptr));
#if QT_CONFIG(tooltip)
        SkyDest7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SkyDest7->setText(QCoreApplication::translate("SkyImgDialog", "0.0", nullptr));
#if QT_CONFIG(tooltip)
        SkyDest3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SkyDest3->setText(QCoreApplication::translate("SkyImgDialog", "0.0", nullptr));
#if QT_CONFIG(tooltip)
        SkyDest9->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SkyDest9->setText(QCoreApplication::translate("SkyImgDialog", "0.0", nullptr));
#if QT_CONFIG(tooltip)
        SkyDest8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SkyDest8->setText(QCoreApplication::translate("SkyImgDialog", "0.0", nullptr));
#if QT_CONFIG(tooltip)
        SkyDest5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SkyDest5->setText(QCoreApplication::translate("SkyImgDialog", "0.0", nullptr));
#if QT_CONFIG(tooltip)
        SkyDest1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SkyDest1->setText(QCoreApplication::translate("SkyImgDialog", "0.0", nullptr));
#if QT_CONFIG(tooltip)
        SkyDest6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SkyDest6->setText(QCoreApplication::translate("SkyImgDialog", "0.0", nullptr));
#if QT_CONFIG(tooltip)
        Label19->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label19->setText(QCoreApplication::translate("SkyImgDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        Label16->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label16->setText(QCoreApplication::translate("SkyImgDialog", "30", nullptr));
#if QT_CONFIG(tooltip)
        Label18->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label18->setText(QCoreApplication::translate("SkyImgDialog", "10", nullptr));
#if QT_CONFIG(tooltip)
        Label15->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label15->setText(QCoreApplication::translate("SkyImgDialog", "40", nullptr));
#if QT_CONFIG(tooltip)
        Label14->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label14->setText(QCoreApplication::translate("SkyImgDialog", "50", nullptr));
#if QT_CONFIG(tooltip)
        Label13->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label13->setText(QCoreApplication::translate("SkyImgDialog", "60", nullptr));
#if QT_CONFIG(tooltip)
        Label12->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label12->setText(QCoreApplication::translate("SkyImgDialog", "70", nullptr));
#if QT_CONFIG(tooltip)
        Label11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label11->setText(QCoreApplication::translate("SkyImgDialog", "80", nullptr));
#if QT_CONFIG(tooltip)
        Label20->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label20->setText(QCoreApplication::translate("SkyImgDialog", "(deg)", nullptr));
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("SkyImgDialog", "Y", nullptr));
#if QT_CONFIG(tooltip)
        SkyCent2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label3->setText(QCoreApplication::translate("SkyImgDialog", "Pitch", nullptr));
#if QT_CONFIG(tooltip)
        SkyFov2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QCoreApplication::translate("SkyImgDialog", "Yaw", nullptr));
#if QT_CONFIG(tooltip)
        SkyScale->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SkyFov3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SkyDestCorr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SkyDestCorr->setText(QCoreApplication::translate("SkyImgDialog", "Pixels from Center - Elevation", nullptr));
#if QT_CONFIG(tooltip)
        SkyElMask->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SkyElMask->setText(QCoreApplication::translate("SkyImgDialog", "Elevation Mask", nullptr));
#if QT_CONFIG(tooltip)
        Label8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label8->setText(QCoreApplication::translate("SkyImgDialog", "Resample", nullptr));
        SkyRes->setItemText(0, QCoreApplication::translate("SkyImgDialog", "NN", nullptr));
        SkyRes->setItemText(1, QCoreApplication::translate("SkyImgDialog", "BL", nullptr));

#if QT_CONFIG(tooltip)
        SkyRes->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SkyBinarize->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SkyBinarize->setText(QCoreApplication::translate("SkyImgDialog", "Binarize", nullptr));
#if QT_CONFIG(tooltip)
        Label10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label10->setText(QCoreApplication::translate("SkyImgDialog", "Plot Radius (pixels)", nullptr));
#if QT_CONFIG(tooltip)
        BtnSave->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnSave->setText(QCoreApplication::translate("SkyImgDialog", "&Save Tag", nullptr));
#if QT_CONFIG(tooltip)
        BtnLoad->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnLoad->setText(QCoreApplication::translate("SkyImgDialog", "&Load Tag...", nullptr));
#if QT_CONFIG(tooltip)
        BtnGenMask->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnGenMask->setText(QCoreApplication::translate("SkyImgDialog", "&Gen Mask", nullptr));
#if QT_CONFIG(tooltip)
        BtnUpdate->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnUpdate->setText(QCoreApplication::translate("SkyImgDialog", "&Update", nullptr));
#if QT_CONFIG(tooltip)
        BtnClose->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnClose->setText(QCoreApplication::translate("SkyImgDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SkyImgDialog: public Ui_SkyImgDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKYDLG_H
