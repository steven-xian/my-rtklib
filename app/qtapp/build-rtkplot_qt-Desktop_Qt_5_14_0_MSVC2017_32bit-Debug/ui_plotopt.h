/********************************************************************************
** Form generated from reading UI file 'plotopt.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTOPT_H
#define UI_PLOTOPT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlotOptDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel2;
    QGridLayout *gridLayout_2;
    QLabel *Label16;
    QComboBox *HideLowSat;
    QLabel *Color4;
    QPushButton *BtnRefPos;
    QLabel *Label31;
    QLabel *Label8;
    QLabel *Label36;
    QPushButton *BtnTLEFile;
    QLabel *Label19;
    QComboBox *AutoScale;
    QLabel *Label10;
    QLabel *Label25;
    QComboBox *RcvPos;
    QComboBox *ShowScale;
    QComboBox *YRange;
    QLabel *Label24;
    QLineEdit *RefPos2;
    QLabel *Color1;
    QLineEdit *RefPos3;
    QLabel *LabelExSats;
    QPushButton *BtnTLESatFile;
    QLabel *Label1;
    QPushButton *BtnColor2;
    QComboBox *ElMaskP;
    QComboBox *ShowGLabel;
    QComboBox *ShowLabel;
    QLabel *Label27;
    QComboBox *TimeLabel;
    QLabel *Label6;
    QLabel *FontLabel;
    QLabel *Label34;
    QLabel *Label33;
    QLabel *LabelFont;
    QLabel *Label23;
    QLabel *Label7;
    QComboBox *ShowEph;
    QComboBox *ElMask;
    QComboBox *MarkSize;
    QLineEdit *RnxOpts;
    QLabel *Label5;
    QPushButton *BtnColor1;
    QPushButton *BtnFont;
    QComboBox *LatLonFmt;
    QComboBox *ShowArrow;
    QLabel *Label15;
    QLabel *Label12;
    QLabel *LabelRefPos;
    QLabel *Color3;
    QLabel *Label37;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout;
    QCheckBox *NavSys1;
    QCheckBox *NavSys2;
    QCheckBox *NavSys3;
    QCheckBox *NavSys4;
    QCheckBox *NavSys5;
    QCheckBox *NavSys6;
    QCheckBox *NavSys7;
    QComboBox *ShowHalfC;
    QComboBox *PlotStyle;
    QLabel *Label26;
    QLabel *Label4;
    QLabel *Label17;
    QComboBox *MaxMP;
    QLabel *Label30;
    QLineEdit *TLESatFile;
    QLabel *Label13;
    QLabel *Label29;
    QLabel *Label2;
    QComboBox *ShowSlip;
    QComboBox *ShowErr;
    QLabel *Label18;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QToolButton *MColor1;
    QToolButton *MColor4;
    QLabel *Label14;
    QToolButton *MColor5;
    QToolButton *MColor6;
    QToolButton *MColor3;
    QToolButton *MColor2;
    QLabel *Label32;
    QToolButton *MColor7;
    QToolButton *MColor8;
    QToolButton *MColor9;
    QToolButton *MColor10;
    QToolButton *MColor11;
    QToolButton *MColor12;
    QLabel *Label21;
    QLineEdit *ExSats;
    QLabel *Label28;
    QLineEdit *TLEFile;
    QLineEdit *BuffSize;
    QLabel *Color2;
    QPushButton *BtnColor3;
    QLabel *Label22;
    QPushButton *BtnTLESatView;
    QPushButton *BtnTLEView;
    QComboBox *ShowCompass;
    QLineEdit *QcCmd;
    QComboBox *ShowStats;
    QLabel *Label20;
    QPushButton *BtnColor4;
    QLineEdit *RefCycle;
    QLineEdit *RefPos1;
    QLabel *Label35;
    QLabel *Label9;
    QComboBox *MaxDop;
    QLabel *Label3;
    QComboBox *Origin;
    QLabel *Label11;
    QComboBox *AnimCycle;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Msg;
    QPushButton *BtnOK;
    QPushButton *BtnCancel;

    void setupUi(QWidget *PlotOptDialog)
    {
        if (PlotOptDialog->objectName().isEmpty())
            PlotOptDialog->setObjectName(QString::fromUtf8("PlotOptDialog"));
        PlotOptDialog->resize(1015, 660);
        verticalLayout = new QVBoxLayout(PlotOptDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Panel2 = new QWidget(PlotOptDialog);
        Panel2->setObjectName(QString::fromUtf8("Panel2"));
        Panel2->setEnabled(true);
        Panel2->setLayoutDirection(Qt::LeftToRight);
        gridLayout_2 = new QGridLayout(Panel2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Label16 = new QLabel(Panel2);
        Label16->setObjectName(QString::fromUtf8("Label16"));
        Label16->setEnabled(true);

        gridLayout_2->addWidget(Label16, 5, 1, 1, 1);

        HideLowSat = new QComboBox(Panel2);
        HideLowSat->addItem(QString());
        HideLowSat->addItem(QString());
        HideLowSat->setObjectName(QString::fromUtf8("HideLowSat"));
        HideLowSat->setEnabled(true);

        gridLayout_2->addWidget(HideLowSat, 9, 3, 1, 1);

        Color4 = new QLabel(Panel2);
        Color4->setObjectName(QString::fromUtf8("Color4"));
        Color4->setEnabled(true);
        Color4->setLayoutDirection(Qt::LeftToRight);
        Color4->setFrameShape(QFrame::Box);
        Color4->setFrameShadow(QFrame::Sunken);
        Color4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Color4, 3, 12, 1, 6);

        BtnRefPos = new QPushButton(Panel2);
        BtnRefPos->setObjectName(QString::fromUtf8("BtnRefPos"));
        BtnRefPos->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnRefPos->setPalette(palette);
        BtnRefPos->setFlat(false);

        gridLayout_2->addWidget(BtnRefPos, 14, 19, 1, 1);

        Label31 = new QLabel(Panel2);
        Label31->setObjectName(QString::fromUtf8("Label31"));
        Label31->setEnabled(true);

        gridLayout_2->addWidget(Label31, 14, 1, 1, 2);

        Label8 = new QLabel(Panel2);
        Label8->setObjectName(QString::fromUtf8("Label8"));
        Label8->setEnabled(true);

        gridLayout_2->addWidget(Label8, 8, 4, 1, 3);

        Label36 = new QLabel(Panel2);
        Label36->setObjectName(QString::fromUtf8("Label36"));
        Label36->setEnabled(true);

        gridLayout_2->addWidget(Label36, 19, 1, 1, 1);

        BtnTLEFile = new QPushButton(Panel2);
        BtnTLEFile->setObjectName(QString::fromUtf8("BtnTLEFile"));
        BtnTLEFile->setEnabled(true);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnTLEFile->setPalette(palette1);
        BtnTLEFile->setFlat(false);

        gridLayout_2->addWidget(BtnTLEFile, 17, 19, 1, 1);

        Label19 = new QLabel(Panel2);
        Label19->setObjectName(QString::fromUtf8("Label19"));
        Label19->setEnabled(true);

        gridLayout_2->addWidget(Label19, 1, 4, 1, 3);

        AutoScale = new QComboBox(Panel2);
        AutoScale->addItem(QString());
        AutoScale->addItem(QString());
        AutoScale->setObjectName(QString::fromUtf8("AutoScale"));
        AutoScale->setEnabled(true);

        gridLayout_2->addWidget(AutoScale, 7, 7, 1, 3);

        Label10 = new QLabel(Panel2);
        Label10->setObjectName(QString::fromUtf8("Label10"));
        Label10->setEnabled(true);

        gridLayout_2->addWidget(Label10, 8, 10, 1, 1);

        Label25 = new QLabel(Panel2);
        Label25->setObjectName(QString::fromUtf8("Label25"));
        Label25->setEnabled(true);

        gridLayout_2->addWidget(Label25, 9, 1, 1, 2);

        RcvPos = new QComboBox(Panel2);
        RcvPos->addItem(QString());
        RcvPos->addItem(QString());
        RcvPos->addItem(QString());
        RcvPos->setObjectName(QString::fromUtf8("RcvPos"));
        RcvPos->setEnabled(true);

        gridLayout_2->addWidget(RcvPos, 14, 3, 1, 1);

        ShowScale = new QComboBox(Panel2);
        ShowScale->addItem(QString());
        ShowScale->addItem(QString());
        ShowScale->setObjectName(QString::fromUtf8("ShowScale"));
        ShowScale->setEnabled(true);

        gridLayout_2->addWidget(ShowScale, 6, 7, 1, 3);

        YRange = new QComboBox(Panel2);
        YRange->addItem(QString());
        YRange->addItem(QString());
        YRange->addItem(QString());
        YRange->addItem(QString());
        YRange->addItem(QString());
        YRange->addItem(QString());
        YRange->addItem(QString());
        YRange->addItem(QString());
        YRange->addItem(QString());
        YRange->addItem(QString());
        YRange->addItem(QString());
        YRange->addItem(QString());
        YRange->addItem(QString());
        YRange->addItem(QString());
        YRange->addItem(QString());
        YRange->setObjectName(QString::fromUtf8("YRange"));
        YRange->setEnabled(true);

        gridLayout_2->addWidget(YRange, 8, 7, 1, 3);

        Label24 = new QLabel(Panel2);
        Label24->setObjectName(QString::fromUtf8("Label24"));
        Label24->setEnabled(true);

        gridLayout_2->addWidget(Label24, 6, 1, 1, 1);

        RefPos2 = new QLineEdit(Panel2);
        RefPos2->setObjectName(QString::fromUtf8("RefPos2"));
        RefPos2->setEnabled(true);

        gridLayout_2->addWidget(RefPos2, 14, 8, 1, 3);

        Color1 = new QLabel(Panel2);
        Color1->setObjectName(QString::fromUtf8("Color1"));
        Color1->setEnabled(true);
        Color1->setLayoutDirection(Qt::LeftToRight);
        Color1->setFrameShape(QFrame::Box);
        Color1->setFrameShadow(QFrame::Sunken);
        Color1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Color1, 6, 12, 1, 6);

        RefPos3 = new QLineEdit(Panel2);
        RefPos3->setObjectName(QString::fromUtf8("RefPos3"));
        RefPos3->setEnabled(true);

        gridLayout_2->addWidget(RefPos3, 14, 11, 1, 7);

        LabelExSats = new QLabel(Panel2);
        LabelExSats->setObjectName(QString::fromUtf8("LabelExSats"));
        LabelExSats->setEnabled(true);

        gridLayout_2->addWidget(LabelExSats, 18, 1, 1, 1);

        BtnTLESatFile = new QPushButton(Panel2);
        BtnTLESatFile->setObjectName(QString::fromUtf8("BtnTLESatFile"));
        BtnTLESatFile->setEnabled(true);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnTLESatFile->setPalette(palette2);
        BtnTLESatFile->setFlat(false);

        gridLayout_2->addWidget(BtnTLESatFile, 18, 19, 1, 1);

        Label1 = new QLabel(Panel2);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout_2->addWidget(Label1, 6, 10, 1, 2);

        BtnColor2 = new QPushButton(Panel2);
        BtnColor2->setObjectName(QString::fromUtf8("BtnColor2"));
        BtnColor2->setEnabled(true);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnColor2->setPalette(palette3);
        BtnColor2->setFlat(false);

        gridLayout_2->addWidget(BtnColor2, 5, 19, 1, 1);

        ElMaskP = new QComboBox(Panel2);
        ElMaskP->addItem(QString());
        ElMaskP->addItem(QString());
        ElMaskP->setObjectName(QString::fromUtf8("ElMaskP"));
        ElMaskP->setEnabled(true);

        gridLayout_2->addWidget(ElMaskP, 8, 3, 1, 1);

        ShowGLabel = new QComboBox(Panel2);
        ShowGLabel->addItem(QString());
        ShowGLabel->addItem(QString());
        ShowGLabel->addItem(QString());
        ShowGLabel->addItem(QString());
        ShowGLabel->addItem(QString());
        ShowGLabel->setObjectName(QString::fromUtf8("ShowGLabel"));
        ShowGLabel->setEnabled(true);

        gridLayout_2->addWidget(ShowGLabel, 4, 7, 1, 3);

        ShowLabel = new QComboBox(Panel2);
        ShowLabel->addItem(QString());
        ShowLabel->addItem(QString());
        ShowLabel->setObjectName(QString::fromUtf8("ShowLabel"));
        ShowLabel->setEnabled(true);

        gridLayout_2->addWidget(ShowLabel, 3, 7, 1, 3);

        Label27 = new QLabel(Panel2);
        Label27->setObjectName(QString::fromUtf8("Label27"));
        Label27->setEnabled(true);

        gridLayout_2->addWidget(Label27, 13, 10, 1, 2);

        TimeLabel = new QComboBox(Panel2);
        TimeLabel->addItem(QString());
        TimeLabel->addItem(QString());
        TimeLabel->addItem(QString());
        TimeLabel->addItem(QString());
        TimeLabel->setObjectName(QString::fromUtf8("TimeLabel"));
        TimeLabel->setEnabled(true);

        gridLayout_2->addWidget(TimeLabel, 1, 3, 1, 1);

        Label6 = new QLabel(Panel2);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout_2->addWidget(Label6, 4, 10, 1, 1);

        FontLabel = new QLabel(Panel2);
        FontLabel->setObjectName(QString::fromUtf8("FontLabel"));
        FontLabel->setEnabled(true);

        gridLayout_2->addWidget(FontLabel, 9, 12, 1, 7);

        Label34 = new QLabel(Panel2);
        Label34->setObjectName(QString::fromUtf8("Label34"));
        Label34->setEnabled(true);

        gridLayout_2->addWidget(Label34, 17, 4, 1, 1);

        Label33 = new QLabel(Panel2);
        Label33->setObjectName(QString::fromUtf8("Label33"));
        Label33->setEnabled(true);

        gridLayout_2->addWidget(Label33, 16, 4, 1, 1);

        LabelFont = new QLabel(Panel2);
        LabelFont->setObjectName(QString::fromUtf8("LabelFont"));
        LabelFont->setEnabled(true);

        gridLayout_2->addWidget(LabelFont, 9, 10, 1, 1);

        Label23 = new QLabel(Panel2);
        Label23->setObjectName(QString::fromUtf8("Label23"));
        Label23->setEnabled(true);

        gridLayout_2->addWidget(Label23, 5, 4, 1, 2);

        Label7 = new QLabel(Panel2);
        Label7->setObjectName(QString::fromUtf8("Label7"));
        Label7->setEnabled(true);

        gridLayout_2->addWidget(Label7, 3, 10, 1, 1);

        ShowEph = new QComboBox(Panel2);
        ShowEph->addItem(QString());
        ShowEph->addItem(QString());
        ShowEph->setObjectName(QString::fromUtf8("ShowEph"));
        ShowEph->setEnabled(true);

        gridLayout_2->addWidget(ShowEph, 6, 3, 1, 1);

        ElMask = new QComboBox(Panel2);
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->addItem(QString());
        ElMask->setObjectName(QString::fromUtf8("ElMask"));
        ElMask->setEnabled(true);

        gridLayout_2->addWidget(ElMask, 7, 3, 1, 1);

        MarkSize = new QComboBox(Panel2);
        MarkSize->addItem(QString());
        MarkSize->addItem(QString());
        MarkSize->addItem(QString());
        MarkSize->addItem(QString());
        MarkSize->addItem(QString());
        MarkSize->addItem(QString());
        MarkSize->addItem(QString());
        MarkSize->addItem(QString());
        MarkSize->setObjectName(QString::fromUtf8("MarkSize"));
        MarkSize->setEnabled(true);

        gridLayout_2->addWidget(MarkSize, 8, 12, 1, 8);

        RnxOpts = new QLineEdit(Panel2);
        RnxOpts->setObjectName(QString::fromUtf8("RnxOpts"));
        RnxOpts->setEnabled(true);

        gridLayout_2->addWidget(RnxOpts, 16, 6, 1, 15);

        Label5 = new QLabel(Panel2);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout_2->addWidget(Label5, 5, 10, 1, 1);

        BtnColor1 = new QPushButton(Panel2);
        BtnColor1->setObjectName(QString::fromUtf8("BtnColor1"));
        BtnColor1->setEnabled(true);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnColor1->setPalette(palette4);
        BtnColor1->setFlat(false);

        gridLayout_2->addWidget(BtnColor1, 6, 19, 1, 1);

        BtnFont = new QPushButton(Panel2);
        BtnFont->setObjectName(QString::fromUtf8("BtnFont"));
        BtnFont->setEnabled(true);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnFont->setPalette(palette5);
        BtnFont->setFlat(false);

        gridLayout_2->addWidget(BtnFont, 9, 19, 1, 1);

        LatLonFmt = new QComboBox(Panel2);
        LatLonFmt->addItem(QString());
        LatLonFmt->addItem(QString());
        LatLonFmt->setObjectName(QString::fromUtf8("LatLonFmt"));
        LatLonFmt->setEnabled(true);

        gridLayout_2->addWidget(LatLonFmt, 2, 3, 1, 1);

        ShowArrow = new QComboBox(Panel2);
        ShowArrow->addItem(QString());
        ShowArrow->addItem(QString());
        ShowArrow->setObjectName(QString::fromUtf8("ShowArrow"));
        ShowArrow->setEnabled(true);

        gridLayout_2->addWidget(ShowArrow, 2, 7, 1, 3);

        Label15 = new QLabel(Panel2);
        Label15->setObjectName(QString::fromUtf8("Label15"));
        Label15->setEnabled(true);

        gridLayout_2->addWidget(Label15, 2, 1, 1, 1);

        Label12 = new QLabel(Panel2);
        Label12->setObjectName(QString::fromUtf8("Label12"));
        Label12->setEnabled(true);

        gridLayout_2->addWidget(Label12, 1, 1, 1, 1);

        LabelRefPos = new QLabel(Panel2);
        LabelRefPos->setObjectName(QString::fromUtf8("LabelRefPos"));
        LabelRefPos->setEnabled(true);

        gridLayout_2->addWidget(LabelRefPos, 14, 4, 1, 2);

        Color3 = new QLabel(Panel2);
        Color3->setObjectName(QString::fromUtf8("Color3"));
        Color3->setEnabled(true);
        Color3->setLayoutDirection(Qt::LeftToRight);
        Color3->setFrameShape(QFrame::Box);
        Color3->setFrameShadow(QFrame::Sunken);
        Color3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Color3, 4, 12, 1, 6);

        Label37 = new QLabel(Panel2);
        Label37->setObjectName(QString::fromUtf8("Label37"));
        Label37->setEnabled(true);

        gridLayout_2->addWidget(Label37, 13, 1, 1, 1);

        GroupBox1 = new QGroupBox(Panel2);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout = new QGridLayout(GroupBox1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        NavSys1 = new QCheckBox(GroupBox1);
        NavSys1->setObjectName(QString::fromUtf8("NavSys1"));
        NavSys1->setChecked(true);

        gridLayout->addWidget(NavSys1, 0, 0, 1, 1);

        NavSys2 = new QCheckBox(GroupBox1);
        NavSys2->setObjectName(QString::fromUtf8("NavSys2"));
        NavSys2->setChecked(false);

        gridLayout->addWidget(NavSys2, 0, 1, 1, 1);

        NavSys3 = new QCheckBox(GroupBox1);
        NavSys3->setObjectName(QString::fromUtf8("NavSys3"));
        NavSys3->setChecked(false);

        gridLayout->addWidget(NavSys3, 0, 2, 1, 1);

        NavSys4 = new QCheckBox(GroupBox1);
        NavSys4->setObjectName(QString::fromUtf8("NavSys4"));
        NavSys4->setChecked(false);

        gridLayout->addWidget(NavSys4, 1, 0, 1, 1);

        NavSys5 = new QCheckBox(GroupBox1);
        NavSys5->setObjectName(QString::fromUtf8("NavSys5"));
        NavSys5->setChecked(false);

        gridLayout->addWidget(NavSys5, 1, 1, 1, 1);

        NavSys6 = new QCheckBox(GroupBox1);
        NavSys6->setObjectName(QString::fromUtf8("NavSys6"));
        NavSys6->setChecked(false);

        gridLayout->addWidget(NavSys6, 1, 2, 1, 1);

        NavSys7 = new QCheckBox(GroupBox1);
        NavSys7->setObjectName(QString::fromUtf8("NavSys7"));

        gridLayout->addWidget(NavSys7, 1, 3, 1, 1);


        gridLayout_2->addWidget(GroupBox1, 15, 0, 3, 4);

        ShowHalfC = new QComboBox(Panel2);
        ShowHalfC->addItem(QString());
        ShowHalfC->addItem(QString());
        ShowHalfC->setObjectName(QString::fromUtf8("ShowHalfC"));
        ShowHalfC->setEnabled(true);

        gridLayout_2->addWidget(ShowHalfC, 5, 3, 1, 1);

        PlotStyle = new QComboBox(Panel2);
        PlotStyle->addItem(QString());
        PlotStyle->addItem(QString());
        PlotStyle->addItem(QString());
        PlotStyle->addItem(QString());
        PlotStyle->setObjectName(QString::fromUtf8("PlotStyle"));
        PlotStyle->setEnabled(true);

        gridLayout_2->addWidget(PlotStyle, 7, 12, 1, 8);

        Label26 = new QLabel(Panel2);
        Label26->setObjectName(QString::fromUtf8("Label26"));
        Label26->setEnabled(true);

        gridLayout_2->addWidget(Label26, 8, 1, 1, 2);

        Label4 = new QLabel(Panel2);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);

        gridLayout_2->addWidget(Label4, 2, 4, 1, 3);

        Label17 = new QLabel(Panel2);
        Label17->setObjectName(QString::fromUtf8("Label17"));
        Label17->setEnabled(true);

        gridLayout_2->addWidget(Label17, 4, 1, 1, 1);

        MaxMP = new QComboBox(Panel2);
        MaxMP->addItem(QString());
        MaxMP->addItem(QString());
        MaxMP->addItem(QString());
        MaxMP->addItem(QString());
        MaxMP->addItem(QString());
        MaxMP->addItem(QString());
        MaxMP->addItem(QString());
        MaxMP->setObjectName(QString::fromUtf8("MaxMP"));
        MaxMP->setEnabled(true);

        gridLayout_2->addWidget(MaxMP, 13, 3, 1, 1);

        Label30 = new QLabel(Panel2);
        Label30->setObjectName(QString::fromUtf8("Label30"));
        Label30->setEnabled(true);

        gridLayout_2->addWidget(Label30, 15, 4, 1, 1);

        TLESatFile = new QLineEdit(Panel2);
        TLESatFile->setObjectName(QString::fromUtf8("TLESatFile"));
        TLESatFile->setEnabled(true);

        gridLayout_2->addWidget(TLESatFile, 18, 6, 1, 12);

        Label13 = new QLabel(Panel2);
        Label13->setObjectName(QString::fromUtf8("Label13"));
        Label13->setEnabled(true);

        gridLayout_2->addWidget(Label13, 7, 4, 1, 1);

        Label29 = new QLabel(Panel2);
        Label29->setObjectName(QString::fromUtf8("Label29"));
        Label29->setEnabled(true);

        gridLayout_2->addWidget(Label29, 9, 4, 1, 3);

        Label2 = new QLabel(Panel2);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout_2->addWidget(Label2, 7, 10, 1, 1);

        ShowSlip = new QComboBox(Panel2);
        ShowSlip->addItem(QString());
        ShowSlip->addItem(QString());
        ShowSlip->addItem(QString());
        ShowSlip->setObjectName(QString::fromUtf8("ShowSlip"));
        ShowSlip->setEnabled(true);

        gridLayout_2->addWidget(ShowSlip, 4, 3, 1, 1);

        ShowErr = new QComboBox(Panel2);
        ShowErr->addItem(QString());
        ShowErr->addItem(QString());
        ShowErr->addItem(QString());
        ShowErr->setObjectName(QString::fromUtf8("ShowErr"));
        ShowErr->setEnabled(true);

        gridLayout_2->addWidget(ShowErr, 1, 7, 1, 3);

        Label18 = new QLabel(Panel2);
        Label18->setObjectName(QString::fromUtf8("Label18"));
        Label18->setEnabled(true);

        gridLayout_2->addWidget(Label18, 7, 1, 1, 2);

        widget_2 = new QWidget(Panel2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        MColor1 = new QToolButton(widget_2);
        MColor1->setObjectName(QString::fromUtf8("MColor1"));
        MColor1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MColor1->sizePolicy().hasHeightForWidth());
        MColor1->setSizePolicy(sizePolicy);
        MColor1->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor1, 0, 1, 1, 1);

        MColor4 = new QToolButton(widget_2);
        MColor4->setObjectName(QString::fromUtf8("MColor4"));
        MColor4->setEnabled(true);
        MColor4->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor4, 0, 4, 1, 1);

        Label14 = new QLabel(widget_2);
        Label14->setObjectName(QString::fromUtf8("Label14"));
        Label14->setEnabled(true);

        gridLayout_3->addWidget(Label14, 0, 0, 1, 1);

        MColor5 = new QToolButton(widget_2);
        MColor5->setObjectName(QString::fromUtf8("MColor5"));
        MColor5->setEnabled(true);
        MColor5->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor5, 0, 5, 1, 1);

        MColor6 = new QToolButton(widget_2);
        MColor6->setObjectName(QString::fromUtf8("MColor6"));
        MColor6->setEnabled(true);
        MColor6->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor6, 0, 6, 1, 1);

        MColor3 = new QToolButton(widget_2);
        MColor3->setObjectName(QString::fromUtf8("MColor3"));
        MColor3->setEnabled(true);
        MColor3->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor3, 0, 3, 1, 1);

        MColor2 = new QToolButton(widget_2);
        MColor2->setObjectName(QString::fromUtf8("MColor2"));
        MColor2->setEnabled(true);
        MColor2->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor2, 0, 2, 1, 1);

        Label32 = new QLabel(widget_2);
        Label32->setObjectName(QString::fromUtf8("Label32"));
        Label32->setEnabled(true);

        gridLayout_3->addWidget(Label32, 1, 0, 1, 1);

        MColor7 = new QToolButton(widget_2);
        MColor7->setObjectName(QString::fromUtf8("MColor7"));
        MColor7->setEnabled(true);
        sizePolicy.setHeightForWidth(MColor7->sizePolicy().hasHeightForWidth());
        MColor7->setSizePolicy(sizePolicy);
        MColor7->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor7, 1, 1, 1, 1);

        MColor8 = new QToolButton(widget_2);
        MColor8->setObjectName(QString::fromUtf8("MColor8"));
        MColor8->setEnabled(true);
        MColor8->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor8, 1, 2, 1, 1);

        MColor9 = new QToolButton(widget_2);
        MColor9->setObjectName(QString::fromUtf8("MColor9"));
        MColor9->setEnabled(true);
        MColor9->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor9, 1, 3, 1, 1);

        MColor10 = new QToolButton(widget_2);
        MColor10->setObjectName(QString::fromUtf8("MColor10"));
        MColor10->setEnabled(true);
        MColor10->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor10, 1, 4, 1, 1);

        MColor11 = new QToolButton(widget_2);
        MColor11->setObjectName(QString::fromUtf8("MColor11"));
        MColor11->setEnabled(true);
        MColor11->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor11, 1, 5, 1, 1);

        MColor12 = new QToolButton(widget_2);
        MColor12->setObjectName(QString::fromUtf8("MColor12"));
        MColor12->setEnabled(true);
        MColor12->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor12, 1, 6, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 10, 2, 10);

        Label21 = new QLabel(Panel2);
        Label21->setObjectName(QString::fromUtf8("Label21"));
        Label21->setEnabled(true);

        gridLayout_2->addWidget(Label21, 4, 4, 1, 3);

        ExSats = new QLineEdit(Panel2);
        ExSats->setObjectName(QString::fromUtf8("ExSats"));
        ExSats->setEnabled(true);

        gridLayout_2->addWidget(ExSats, 18, 3, 1, 1);

        Label28 = new QLabel(Panel2);
        Label28->setObjectName(QString::fromUtf8("Label28"));
        Label28->setEnabled(true);

        gridLayout_2->addWidget(Label28, 11, 1, 1, 1);

        TLEFile = new QLineEdit(Panel2);
        TLEFile->setObjectName(QString::fromUtf8("TLEFile"));
        TLEFile->setEnabled(true);

        gridLayout_2->addWidget(TLEFile, 17, 6, 1, 12);

        BuffSize = new QLineEdit(Panel2);
        BuffSize->setObjectName(QString::fromUtf8("BuffSize"));
        BuffSize->setEnabled(true);

        gridLayout_2->addWidget(BuffSize, 9, 7, 1, 2);

        Color2 = new QLabel(Panel2);
        Color2->setObjectName(QString::fromUtf8("Color2"));
        Color2->setEnabled(true);
        Color2->setLayoutDirection(Qt::LeftToRight);
        Color2->setFrameShape(QFrame::Box);
        Color2->setFrameShadow(QFrame::Sunken);
        Color2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Color2, 5, 12, 1, 6);

        BtnColor3 = new QPushButton(Panel2);
        BtnColor3->setObjectName(QString::fromUtf8("BtnColor3"));
        BtnColor3->setEnabled(true);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnColor3->setPalette(palette6);
        BtnColor3->setFlat(false);

        gridLayout_2->addWidget(BtnColor3, 4, 19, 1, 1);

        Label22 = new QLabel(Panel2);
        Label22->setObjectName(QString::fromUtf8("Label22"));
        Label22->setEnabled(true);

        gridLayout_2->addWidget(Label22, 6, 4, 1, 1);

        BtnTLESatView = new QPushButton(Panel2);
        BtnTLESatView->setObjectName(QString::fromUtf8("BtnTLESatView"));
        BtnTLESatView->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnTLESatView->sizePolicy().hasHeightForWidth());
        BtnTLESatView->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/doc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnTLESatView->setIcon(icon);
        BtnTLESatView->setFlat(true);

        gridLayout_2->addWidget(BtnTLESatView, 18, 18, 1, 1);

        BtnTLEView = new QPushButton(Panel2);
        BtnTLEView->setObjectName(QString::fromUtf8("BtnTLEView"));
        BtnTLEView->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnTLEView->sizePolicy().hasHeightForWidth());
        BtnTLEView->setSizePolicy(sizePolicy);
        BtnTLEView->setIcon(icon);
        BtnTLEView->setFlat(true);

        gridLayout_2->addWidget(BtnTLEView, 17, 18, 1, 1);

        ShowCompass = new QComboBox(Panel2);
        ShowCompass->addItem(QString());
        ShowCompass->addItem(QString());
        ShowCompass->setObjectName(QString::fromUtf8("ShowCompass"));
        ShowCompass->setEnabled(true);

        gridLayout_2->addWidget(ShowCompass, 5, 7, 1, 3);

        QcCmd = new QLineEdit(Panel2);
        QcCmd->setObjectName(QString::fromUtf8("QcCmd"));
        QcCmd->setEnabled(true);

        gridLayout_2->addWidget(QcCmd, 15, 6, 1, 15);

        ShowStats = new QComboBox(Panel2);
        ShowStats->addItem(QString());
        ShowStats->addItem(QString());
        ShowStats->setObjectName(QString::fromUtf8("ShowStats"));
        ShowStats->setEnabled(true);

        gridLayout_2->addWidget(ShowStats, 3, 3, 1, 1);

        Label20 = new QLabel(Panel2);
        Label20->setObjectName(QString::fromUtf8("Label20"));
        Label20->setEnabled(true);

        gridLayout_2->addWidget(Label20, 3, 4, 1, 2);

        BtnColor4 = new QPushButton(Panel2);
        BtnColor4->setObjectName(QString::fromUtf8("BtnColor4"));
        BtnColor4->setEnabled(true);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnColor4->setPalette(palette7);
        BtnColor4->setFlat(false);

        gridLayout_2->addWidget(BtnColor4, 3, 19, 1, 1);

        RefCycle = new QLineEdit(Panel2);
        RefCycle->setObjectName(QString::fromUtf8("RefCycle"));
        RefCycle->setEnabled(true);

        gridLayout_2->addWidget(RefCycle, 13, 12, 1, 9);

        RefPos1 = new QLineEdit(Panel2);
        RefPos1->setObjectName(QString::fromUtf8("RefPos1"));
        RefPos1->setEnabled(true);

        gridLayout_2->addWidget(RefPos1, 14, 6, 1, 2);

        Label35 = new QLabel(Panel2);
        Label35->setObjectName(QString::fromUtf8("Label35"));
        Label35->setEnabled(true);

        gridLayout_2->addWidget(Label35, 18, 4, 1, 1);

        Label9 = new QLabel(Panel2);
        Label9->setObjectName(QString::fromUtf8("Label9"));
        Label9->setEnabled(true);

        gridLayout_2->addWidget(Label9, 3, 1, 1, 1);

        MaxDop = new QComboBox(Panel2);
        MaxDop->addItem(QString());
        MaxDop->addItem(QString());
        MaxDop->addItem(QString());
        MaxDop->addItem(QString());
        MaxDop->addItem(QString());
        MaxDop->addItem(QString());
        MaxDop->setObjectName(QString::fromUtf8("MaxDop"));
        MaxDop->setEnabled(true);

        gridLayout_2->addWidget(MaxDop, 11, 3, 1, 1);

        Label3 = new QLabel(Panel2);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setEnabled(true);

        gridLayout_2->addWidget(Label3, 11, 4, 1, 1);

        Origin = new QComboBox(Panel2);
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->addItem(QString());
        Origin->setObjectName(QString::fromUtf8("Origin"));
        Origin->setEnabled(true);

        gridLayout_2->addWidget(Origin, 11, 7, 1, 1);

        Label11 = new QLabel(Panel2);
        Label11->setObjectName(QString::fromUtf8("Label11"));
        Label11->setEnabled(true);

        gridLayout_2->addWidget(Label11, 11, 10, 1, 1);

        AnimCycle = new QComboBox(Panel2);
        AnimCycle->addItem(QString());
        AnimCycle->addItem(QString());
        AnimCycle->addItem(QString());
        AnimCycle->addItem(QString());
        AnimCycle->addItem(QString());
        AnimCycle->addItem(QString());
        AnimCycle->addItem(QString());
        AnimCycle->setObjectName(QString::fromUtf8("AnimCycle"));
        AnimCycle->setEnabled(true);

        gridLayout_2->addWidget(AnimCycle, 11, 12, 1, 8);


        verticalLayout->addWidget(Panel2);

        widget = new QWidget(PlotOptDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Msg = new QLabel(widget);
        Msg->setObjectName(QString::fromUtf8("Msg"));
        Msg->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Msg->sizePolicy().hasHeightForWidth());
        Msg->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(Msg);

        BtnOK = new QPushButton(widget);
        BtnOK->setObjectName(QString::fromUtf8("BtnOK"));
        BtnOK->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnOK->sizePolicy().hasHeightForWidth());
        BtnOK->setSizePolicy(sizePolicy);
        BtnOK->setAutoDefault(true);

        horizontalLayout_2->addWidget(BtnOK);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnCancel->sizePolicy().hasHeightForWidth());
        BtnCancel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(BtnCancel);


        verticalLayout->addWidget(widget);


        retranslateUi(PlotOptDialog);

        BtnOK->setDefault(true);


        QMetaObject::connectSlotsByName(PlotOptDialog);
    } // setupUi

    void retranslateUi(QWidget *PlotOptDialog)
    {
        PlotOptDialog->setWindowTitle(QCoreApplication::translate("PlotOptDialog", "Options", nullptr));
#if QT_CONFIG(tooltip)
        PlotOptDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel2->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Label16->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label16->setText(QCoreApplication::translate("PlotOptDialog", "Parity Unknown", nullptr));
        HideLowSat->setItemText(0, QCoreApplication::translate("PlotOptDialog", "OFF", nullptr));
        HideLowSat->setItemText(1, QCoreApplication::translate("PlotOptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        HideLowSat->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Color4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Color4->setText(QString());
#if QT_CONFIG(tooltip)
        BtnRefPos->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnRefPos->setText(QCoreApplication::translate("PlotOptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label31->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label31->setText(QCoreApplication::translate("PlotOptDialog", "Receiver Position", nullptr));
#if QT_CONFIG(tooltip)
        Label8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label8->setText(QCoreApplication::translate("PlotOptDialog", "Y-Range (+/-)", nullptr));
#if QT_CONFIG(tooltip)
        Label36->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label36->setText(QCoreApplication::translate("PlotOptDialog", "(+Sn: Included)", nullptr));
#if QT_CONFIG(tooltip)
        BtnTLEFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnTLEFile->setText(QCoreApplication::translate("PlotOptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label19->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label19->setText(QCoreApplication::translate("PlotOptDialog", "Error Bar/Circle", nullptr));
        AutoScale->setItemText(0, QCoreApplication::translate("PlotOptDialog", "OFF", nullptr));
        AutoScale->setItemText(1, QCoreApplication::translate("PlotOptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        AutoScale->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label10->setText(QCoreApplication::translate("PlotOptDialog", "Mark Size", nullptr));
#if QT_CONFIG(tooltip)
        Label25->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label25->setText(QCoreApplication::translate("PlotOptDialog", "Hide Low Satellite", nullptr));
        RcvPos->setItemText(0, QCoreApplication::translate("PlotOptDialog", "Single Solution", nullptr));
        RcvPos->setItemText(1, QCoreApplication::translate("PlotOptDialog", "Lat/Lon/Hgt", nullptr));
        RcvPos->setItemText(2, QCoreApplication::translate("PlotOptDialog", "RINEX Header", nullptr));

#if QT_CONFIG(tooltip)
        RcvPos->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ShowScale->setItemText(0, QCoreApplication::translate("PlotOptDialog", "OFF", nullptr));
        ShowScale->setItemText(1, QCoreApplication::translate("PlotOptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        ShowScale->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        YRange->setItemText(0, QCoreApplication::translate("PlotOptDialog", "0.05", nullptr));
        YRange->setItemText(1, QCoreApplication::translate("PlotOptDialog", "0.1", nullptr));
        YRange->setItemText(2, QCoreApplication::translate("PlotOptDialog", "0.2", nullptr));
        YRange->setItemText(3, QCoreApplication::translate("PlotOptDialog", "0.5", nullptr));
        YRange->setItemText(4, QCoreApplication::translate("PlotOptDialog", "1", nullptr));
        YRange->setItemText(5, QCoreApplication::translate("PlotOptDialog", "2", nullptr));
        YRange->setItemText(6, QCoreApplication::translate("PlotOptDialog", "5", nullptr));
        YRange->setItemText(7, QCoreApplication::translate("PlotOptDialog", "10", nullptr));
        YRange->setItemText(8, QCoreApplication::translate("PlotOptDialog", "20", nullptr));
        YRange->setItemText(9, QCoreApplication::translate("PlotOptDialog", "50", nullptr));
        YRange->setItemText(10, QCoreApplication::translate("PlotOptDialog", "100", nullptr));
        YRange->setItemText(11, QCoreApplication::translate("PlotOptDialog", "500", nullptr));
        YRange->setItemText(12, QCoreApplication::translate("PlotOptDialog", "1000", nullptr));
        YRange->setItemText(13, QCoreApplication::translate("PlotOptDialog", "5000", nullptr));
        YRange->setItemText(14, QCoreApplication::translate("PlotOptDialog", "10000", nullptr));

#if QT_CONFIG(tooltip)
        YRange->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label24->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label24->setText(QCoreApplication::translate("PlotOptDialog", "Ephemeris", nullptr));
#if QT_CONFIG(tooltip)
        RefPos2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefPos2->setText(QCoreApplication::translate("PlotOptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        Color1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Color1->setText(QString());
#if QT_CONFIG(tooltip)
        RefPos3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefPos3->setText(QCoreApplication::translate("PlotOptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        LabelExSats->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelExSats->setText(QCoreApplication::translate("PlotOptDialog", "Excluded Sats", nullptr));
#if QT_CONFIG(tooltip)
        BtnTLESatFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnTLESatFile->setText(QCoreApplication::translate("PlotOptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("PlotOptDialog", "Background Color", nullptr));
#if QT_CONFIG(tooltip)
        BtnColor2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnColor2->setText(QCoreApplication::translate("PlotOptDialog", "...", nullptr));
        ElMaskP->setItemText(0, QCoreApplication::translate("PlotOptDialog", "OFF", nullptr));
        ElMaskP->setItemText(1, QCoreApplication::translate("PlotOptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        ElMaskP->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ShowGLabel->setItemText(0, QCoreApplication::translate("PlotOptDialog", "OFF", nullptr));
        ShowGLabel->setItemText(1, QCoreApplication::translate("PlotOptDialog", "Grid", nullptr));
        ShowGLabel->setItemText(2, QCoreApplication::translate("PlotOptDialog", "Grid/Label", nullptr));
        ShowGLabel->setItemText(3, QCoreApplication::translate("PlotOptDialog", "Circles", nullptr));
        ShowGLabel->setItemText(4, QCoreApplication::translate("PlotOptDialog", "Circles/Label", nullptr));

#if QT_CONFIG(tooltip)
        ShowGLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ShowLabel->setItemText(0, QCoreApplication::translate("PlotOptDialog", "OFF", nullptr));
        ShowLabel->setItemText(1, QCoreApplication::translate("PlotOptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        ShowLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label27->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label27->setText(QCoreApplication::translate("PlotOptDialog", "Update Cycle (ms)", nullptr));
        TimeLabel->setItemText(0, QCoreApplication::translate("PlotOptDialog", "www/ssss", nullptr));
        TimeLabel->setItemText(1, QCoreApplication::translate("PlotOptDialog", "h:m:s GPST", nullptr));
        TimeLabel->setItemText(2, QCoreApplication::translate("PlotOptDialog", "h:m:s UTC", nullptr));
        TimeLabel->setItemText(3, QCoreApplication::translate("PlotOptDialog", "h:m:s LT", nullptr));

#if QT_CONFIG(tooltip)
        TimeLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("PlotOptDialog", "Text Color", nullptr));
#if QT_CONFIG(tooltip)
        FontLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FontLabel->setText(QCoreApplication::translate("PlotOptDialog", "Font Name", nullptr));
#if QT_CONFIG(tooltip)
        Label34->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label34->setText(QCoreApplication::translate("PlotOptDialog", "TLE Data", nullptr));
#if QT_CONFIG(tooltip)
        Label33->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label33->setText(QCoreApplication::translate("PlotOptDialog", "RINEX Opt", nullptr));
#if QT_CONFIG(tooltip)
        LabelFont->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelFont->setText(QCoreApplication::translate("PlotOptDialog", "Font", nullptr));
#if QT_CONFIG(tooltip)
        Label23->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label23->setText(QCoreApplication::translate("PlotOptDialog", "Compass", nullptr));
#if QT_CONFIG(tooltip)
        Label7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label7->setText(QCoreApplication::translate("PlotOptDialog", "Line Color", nullptr));
        ShowEph->setItemText(0, QCoreApplication::translate("PlotOptDialog", "OFF", nullptr));
        ShowEph->setItemText(1, QCoreApplication::translate("PlotOptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        ShowEph->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ElMask->setItemText(0, QCoreApplication::translate("PlotOptDialog", "0", nullptr));
        ElMask->setItemText(1, QCoreApplication::translate("PlotOptDialog", "5", nullptr));
        ElMask->setItemText(2, QCoreApplication::translate("PlotOptDialog", "10", nullptr));
        ElMask->setItemText(3, QCoreApplication::translate("PlotOptDialog", "15", nullptr));
        ElMask->setItemText(4, QCoreApplication::translate("PlotOptDialog", "20", nullptr));
        ElMask->setItemText(5, QCoreApplication::translate("PlotOptDialog", "25", nullptr));
        ElMask->setItemText(6, QCoreApplication::translate("PlotOptDialog", "30", nullptr));
        ElMask->setItemText(7, QCoreApplication::translate("PlotOptDialog", "35", nullptr));
        ElMask->setItemText(8, QCoreApplication::translate("PlotOptDialog", "40", nullptr));
        ElMask->setItemText(9, QCoreApplication::translate("PlotOptDialog", "45", nullptr));

#if QT_CONFIG(tooltip)
        ElMask->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MarkSize->setItemText(0, QCoreApplication::translate("PlotOptDialog", "1", nullptr));
        MarkSize->setItemText(1, QCoreApplication::translate("PlotOptDialog", "2", nullptr));
        MarkSize->setItemText(2, QCoreApplication::translate("PlotOptDialog", "3", nullptr));
        MarkSize->setItemText(3, QCoreApplication::translate("PlotOptDialog", "4", nullptr));
        MarkSize->setItemText(4, QCoreApplication::translate("PlotOptDialog", "5", nullptr));
        MarkSize->setItemText(5, QCoreApplication::translate("PlotOptDialog", "10", nullptr));
        MarkSize->setItemText(6, QCoreApplication::translate("PlotOptDialog", "15", nullptr));
        MarkSize->setItemText(7, QCoreApplication::translate("PlotOptDialog", "20", nullptr));

#if QT_CONFIG(tooltip)
        MarkSize->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        RnxOpts->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RnxOpts->setText(QString());
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("PlotOptDialog", "Grid Color", nullptr));
#if QT_CONFIG(tooltip)
        BtnColor1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnColor1->setText(QCoreApplication::translate("PlotOptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnFont->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFont->setText(QCoreApplication::translate("PlotOptDialog", "...", nullptr));
        LatLonFmt->setItemText(0, QCoreApplication::translate("PlotOptDialog", "ddd.ddddd", nullptr));
        LatLonFmt->setItemText(1, QCoreApplication::translate("PlotOptDialog", "ddd mm ss.ss", nullptr));

#if QT_CONFIG(tooltip)
        LatLonFmt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ShowArrow->setItemText(0, QCoreApplication::translate("PlotOptDialog", "OFF", nullptr));
        ShowArrow->setItemText(1, QCoreApplication::translate("PlotOptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        ShowArrow->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label15->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label15->setText(QCoreApplication::translate("PlotOptDialog", "Lat/Lon Format", nullptr));
#if QT_CONFIG(tooltip)
        Label12->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label12->setText(QCoreApplication::translate("PlotOptDialog", "Time Format", nullptr));
#if QT_CONFIG(tooltip)
        LabelRefPos->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelRefPos->setText(QCoreApplication::translate("PlotOptDialog", "Lat/Lon/Hgt", nullptr));
#if QT_CONFIG(tooltip)
        Color3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Color3->setText(QString());
#if QT_CONFIG(tooltip)
        Label37->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label37->setText(QCoreApplication::translate("PlotOptDialog", "Max Multipath", nullptr));
#if QT_CONFIG(tooltip)
        GroupBox1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        GroupBox1->setTitle(QCoreApplication::translate("PlotOptDialog", "Satellite System", nullptr));
#if QT_CONFIG(tooltip)
        NavSys1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NavSys1->setText(QCoreApplication::translate("PlotOptDialog", "GPS", nullptr));
#if QT_CONFIG(tooltip)
        NavSys2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NavSys2->setText(QCoreApplication::translate("PlotOptDialog", "GLO", nullptr));
#if QT_CONFIG(tooltip)
        NavSys3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NavSys3->setText(QCoreApplication::translate("PlotOptDialog", "GAL", nullptr));
#if QT_CONFIG(tooltip)
        NavSys4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NavSys4->setText(QCoreApplication::translate("PlotOptDialog", "QZS", nullptr));
#if QT_CONFIG(tooltip)
        NavSys5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NavSys5->setText(QCoreApplication::translate("PlotOptDialog", "SBS", nullptr));
#if QT_CONFIG(tooltip)
        NavSys6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NavSys6->setText(QCoreApplication::translate("PlotOptDialog", "BDS", nullptr));
        NavSys7->setText(QCoreApplication::translate("PlotOptDialog", "IRN", nullptr));
        ShowHalfC->setItemText(0, QCoreApplication::translate("PlotOptDialog", "OFF", nullptr));
        ShowHalfC->setItemText(1, QCoreApplication::translate("PlotOptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        ShowHalfC->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        PlotStyle->setItemText(0, QCoreApplication::translate("PlotOptDialog", "Mark/Line", nullptr));
        PlotStyle->setItemText(1, QCoreApplication::translate("PlotOptDialog", "Mark", nullptr));
        PlotStyle->setItemText(2, QCoreApplication::translate("PlotOptDialog", "Line", nullptr));
        PlotStyle->setItemText(3, QCoreApplication::translate("PlotOptDialog", "None", nullptr));

#if QT_CONFIG(tooltip)
        PlotStyle->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label26->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label26->setText(QCoreApplication::translate("PlotOptDialog", "Elev Mask Pattern", nullptr));
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QCoreApplication::translate("PlotOptDialog", "Direction Arrow", nullptr));
#if QT_CONFIG(tooltip)
        Label17->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label17->setText(QCoreApplication::translate("PlotOptDialog", "Cycle-Slip", nullptr));
        MaxMP->setItemText(0, QCoreApplication::translate("PlotOptDialog", "1", nullptr));
        MaxMP->setItemText(1, QCoreApplication::translate("PlotOptDialog", "2", nullptr));
        MaxMP->setItemText(2, QCoreApplication::translate("PlotOptDialog", "3", nullptr));
        MaxMP->setItemText(3, QCoreApplication::translate("PlotOptDialog", "5", nullptr));
        MaxMP->setItemText(4, QCoreApplication::translate("PlotOptDialog", "10", nullptr));
        MaxMP->setItemText(5, QCoreApplication::translate("PlotOptDialog", "20", nullptr));
        MaxMP->setItemText(6, QCoreApplication::translate("PlotOptDialog", "30", nullptr));

#if QT_CONFIG(tooltip)
        MaxMP->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label30->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label30->setText(QCoreApplication::translate("PlotOptDialog", "QC Cmd", nullptr));
#if QT_CONFIG(tooltip)
        TLESatFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TLESatFile->setText(QString());
#if QT_CONFIG(tooltip)
        Label13->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label13->setText(QCoreApplication::translate("PlotOptDialog", "Auto Fit", nullptr));
#if QT_CONFIG(tooltip)
        Label29->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label29->setText(QCoreApplication::translate("PlotOptDialog", "RT Buffer Size", nullptr));
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("PlotOptDialog", "Plot Style", nullptr));
        ShowSlip->setItemText(0, QCoreApplication::translate("PlotOptDialog", "OFF", nullptr));
        ShowSlip->setItemText(1, QCoreApplication::translate("PlotOptDialog", "LG Jump", nullptr));
        ShowSlip->setItemText(2, QCoreApplication::translate("PlotOptDialog", "LLI Flag", nullptr));

#if QT_CONFIG(tooltip)
        ShowSlip->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ShowErr->setItemText(0, QCoreApplication::translate("PlotOptDialog", "OFF", nullptr));
        ShowErr->setItemText(1, QCoreApplication::translate("PlotOptDialog", "Bar/Circle", nullptr));
        ShowErr->setItemText(2, QCoreApplication::translate("PlotOptDialog", "Dots", nullptr));

#if QT_CONFIG(tooltip)
        ShowErr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label18->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label18->setText(QCoreApplication::translate("PlotOptDialog", "Elevation Mask (\302\260)", nullptr));
#if QT_CONFIG(tooltip)
        MColor1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MColor4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MColor4->setText(QString());
#if QT_CONFIG(tooltip)
        Label14->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label14->setText(QCoreApplication::translate("PlotOptDialog", "Mark Color 1 (1-6)", nullptr));
#if QT_CONFIG(tooltip)
        MColor5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MColor5->setText(QString());
#if QT_CONFIG(tooltip)
        MColor6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MColor6->setText(QString());
#if QT_CONFIG(tooltip)
        MColor3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MColor3->setText(QString());
#if QT_CONFIG(tooltip)
        MColor2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MColor2->setText(QString());
#if QT_CONFIG(tooltip)
        Label32->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label32->setText(QCoreApplication::translate("PlotOptDialog", "Mark Color 2 (1-6)", nullptr));
#if QT_CONFIG(tooltip)
        MColor7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MColor8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MColor8->setText(QString());
#if QT_CONFIG(tooltip)
        MColor9->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MColor9->setText(QString());
#if QT_CONFIG(tooltip)
        MColor10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MColor10->setText(QString());
#if QT_CONFIG(tooltip)
        MColor11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MColor11->setText(QString());
#if QT_CONFIG(tooltip)
        MColor12->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MColor12->setText(QString());
#if QT_CONFIG(tooltip)
        Label21->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label21->setText(QCoreApplication::translate("PlotOptDialog", "Grid/Grid Label", nullptr));
#if QT_CONFIG(tooltip)
        ExSats->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ExSats->setText(QString());
#if QT_CONFIG(tooltip)
        Label28->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label28->setText(QCoreApplication::translate("PlotOptDialog", "Max NSAT/DOP", nullptr));
#if QT_CONFIG(tooltip)
        TLEFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TLEFile->setText(QString());
#if QT_CONFIG(tooltip)
        BuffSize->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BuffSize->setText(QCoreApplication::translate("PlotOptDialog", "10800", nullptr));
#if QT_CONFIG(tooltip)
        Color2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Color2->setText(QString());
#if QT_CONFIG(tooltip)
        BtnColor3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnColor3->setText(QCoreApplication::translate("PlotOptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label22->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label22->setText(QCoreApplication::translate("PlotOptDialog", "Scale", nullptr));
#if QT_CONFIG(tooltip)
        BtnTLESatView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnTLESatView->setText(QString());
#if QT_CONFIG(tooltip)
        BtnTLEView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnTLEView->setText(QString());
        ShowCompass->setItemText(0, QCoreApplication::translate("PlotOptDialog", "OFF", nullptr));
        ShowCompass->setItemText(1, QCoreApplication::translate("PlotOptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        ShowCompass->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        QcCmd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        QcCmd->setText(QCoreApplication::translate("PlotOptDialog", "teqc", nullptr));
        ShowStats->setItemText(0, QCoreApplication::translate("PlotOptDialog", "OFF", nullptr));
        ShowStats->setItemText(1, QCoreApplication::translate("PlotOptDialog", "ON", nullptr));

#if QT_CONFIG(tooltip)
        ShowStats->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label20->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label20->setText(QCoreApplication::translate("PlotOptDialog", "Graph Label", nullptr));
#if QT_CONFIG(tooltip)
        BtnColor4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnColor4->setText(QCoreApplication::translate("PlotOptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        RefCycle->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefCycle->setText(QCoreApplication::translate("PlotOptDialog", "100", nullptr));
#if QT_CONFIG(tooltip)
        RefPos1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RefPos1->setText(QCoreApplication::translate("PlotOptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        Label35->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label35->setText(QCoreApplication::translate("PlotOptDialog", "TLE Sat No", nullptr));
#if QT_CONFIG(tooltip)
        Label9->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label9->setText(QCoreApplication::translate("PlotOptDialog", "Show Statistics", nullptr));
        MaxDop->setItemText(0, QCoreApplication::translate("PlotOptDialog", "10", nullptr));
        MaxDop->setItemText(1, QCoreApplication::translate("PlotOptDialog", "30", nullptr));
        MaxDop->setItemText(2, QCoreApplication::translate("PlotOptDialog", "50", nullptr));
        MaxDop->setItemText(3, QCoreApplication::translate("PlotOptDialog", "100", nullptr));
        MaxDop->setItemText(4, QCoreApplication::translate("PlotOptDialog", "200", nullptr));
        MaxDop->setItemText(5, QCoreApplication::translate("PlotOptDialog", "500", nullptr));

#if QT_CONFIG(tooltip)
        MaxDop->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label3->setText(QCoreApplication::translate("PlotOptDialog", "Coordinate Origin", nullptr));
        Origin->setItemText(0, QCoreApplication::translate("PlotOptDialog", "Start Pos", nullptr));
        Origin->setItemText(1, QCoreApplication::translate("PlotOptDialog", "End Pos", nullptr));
        Origin->setItemText(2, QCoreApplication::translate("PlotOptDialog", "Average Pos", nullptr));
        Origin->setItemText(3, QCoreApplication::translate("PlotOptDialog", "Linear Fit Pos", nullptr));
        Origin->setItemText(4, QCoreApplication::translate("PlotOptDialog", "Base Station", nullptr));
        Origin->setItemText(5, QCoreApplication::translate("PlotOptDialog", "Lat/Lon/Hgt", nullptr));
        Origin->setItemText(6, QCoreApplication::translate("PlotOptDialog", "Auto Input", nullptr));
        Origin->setItemText(7, QCoreApplication::translate("PlotOptDialog", "Image Center", nullptr));
        Origin->setItemText(8, QCoreApplication::translate("PlotOptDialog", "Map Center", nullptr));
        Origin->setItemText(9, QCoreApplication::translate("PlotOptDialog", "Waypnt1", nullptr));
        Origin->setItemText(10, QCoreApplication::translate("PlotOptDialog", "Waypnt2", nullptr));
        Origin->setItemText(11, QCoreApplication::translate("PlotOptDialog", "Waypnt3", nullptr));
        Origin->setItemText(12, QCoreApplication::translate("PlotOptDialog", "Waypnt4", nullptr));
        Origin->setItemText(13, QCoreApplication::translate("PlotOptDialog", "Waypnt5", nullptr));
        Origin->setItemText(14, QCoreApplication::translate("PlotOptDialog", "Waypnt6", nullptr));
        Origin->setItemText(15, QCoreApplication::translate("PlotOptDialog", "Waypnt7", nullptr));
        Origin->setItemText(16, QCoreApplication::translate("PlotOptDialog", "Waypnt8", nullptr));
        Origin->setItemText(17, QCoreApplication::translate("PlotOptDialog", "Waypnt9", nullptr));
        Origin->setItemText(18, QCoreApplication::translate("PlotOptDialog", "Waypnt10", nullptr));

#if QT_CONFIG(tooltip)
        Origin->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label11->setText(QCoreApplication::translate("PlotOptDialog", "Animation Interval", nullptr));
        AnimCycle->setItemText(0, QCoreApplication::translate("PlotOptDialog", "1", nullptr));
        AnimCycle->setItemText(1, QCoreApplication::translate("PlotOptDialog", "2", nullptr));
        AnimCycle->setItemText(2, QCoreApplication::translate("PlotOptDialog", "5", nullptr));
        AnimCycle->setItemText(3, QCoreApplication::translate("PlotOptDialog", "10", nullptr));
        AnimCycle->setItemText(4, QCoreApplication::translate("PlotOptDialog", "20", nullptr));
        AnimCycle->setItemText(5, QCoreApplication::translate("PlotOptDialog", "50", nullptr));
        AnimCycle->setItemText(6, QCoreApplication::translate("PlotOptDialog", "100", nullptr));

#if QT_CONFIG(tooltip)
        AnimCycle->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Msg->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Msg->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOK->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOK->setText(QCoreApplication::translate("PlotOptDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("PlotOptDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlotOptDialog: public Ui_PlotOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTOPT_H
