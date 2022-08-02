/********************************************************************************
** Form generated from reading UI file 'plotmain.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTMAIN_H
#define UI_PLOTMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Plot
{
public:
    QAction *MenuOpenSol1;
    QAction *MenuOpenSol2;
    QAction *MenuOpenMapImage;
    QAction *MenuOpenShape;
    QAction *MenuOpenSkyImage;
    QAction *MenuFileSel;
    QAction *MenuOpenObs;
    QAction *MenuOpenNav;
    QAction *MenuOpenElevMask;
    QAction *MenuVisAna;
    QAction *MenuSaveImage;
    QAction *MenuSaveDop;
    QAction *MenuSaveSnrMp;
    QAction *MenuSaveElMask;
    QAction *MenuConnect;
    QAction *MenuDisconnect;
    QAction *MenuPort;
    QAction *MenuReload;
    QAction *MenuClear;
    QAction *MenuQuit;
    QAction *MenuTime;
    QAction *MenuMapImg;
    QAction *MenuSkyImg;
    QAction *MenuWaypnt;
    QAction *MenuSrcSol;
    QAction *MenuSrcObs;
    QAction *MenuQcObs;
    QAction *MenyCopy;
    QAction *MenuOptions;
    QAction *MenuToolBar;
    QAction *MenuStatusBar;
    QAction *MenuGE;
    QAction *MenuGM;
    QAction *MenuMonitor1;
    QAction *MenuMonitor2;
    QAction *MenuCenterOri;
    QAction *MenuFitHoriz;
    QAction *MenuFitVert;
    QAction *MenuShowTrack;
    QAction *MenuFixCent;
    QAction *MenuFixHoriz;
    QAction *MenuFixVert;
    QAction *MenuShowSkyplot;
    QAction *MenuShowImg;
    QAction *MenuShowMap;
    QAction *MenuAnimStart;
    QAction *MenuAnimStop;
    QAction *MenuOverlap;
    QAction *MenuMax;
    QAction *MenuPlotGE;
    QAction *MenuPlotGM;
    QAction *MenuPlotGEGM;
    QAction *MenuAbout;
    QAction *MenuOpenWaypoint;
    QAction *MenuSaveWaypoint;
    QAction *MenuMapLayer;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout_8;
    QWidget *Panel10;
    QHBoxLayout *horizontalLayout;
    QToolButton *BtnConnect;
    QToolButton *BtnSol1;
    QToolButton *BtnSol2;
    QToolButton *BtnSol12;
    QWidget *Panel101;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *PlotTypeS;
    QWidget *Panel102;
    QVBoxLayout *verticalLayout;
    QPushButton *BtnOn1;
    QPushButton *BtnOn2;
    QPushButton *BtnOn3;
    QWidget *Panel103;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *QFlag;
    QComboBox *ObsType2;
    QComboBox *ObsType;
    QComboBox *FrqType;
    QComboBox *DopType;
    QWidget *Panel104;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *BtnCenterOri;
    QToolButton *BtnRangeList;
    QComboBox *SatList;
    QToolButton *BtnFitHoriz;
    QToolButton *BtnFitVert;
    QToolButton *BtnShowTrack;
    QToolButton *BtnShowSkyplot;
    QToolButton *BtnShowImg;
    QToolButton *BtnFixCent;
    QToolButton *BtnFixHoriz;
    QToolButton *BtnFixVert;
    QToolButton *BtnShowMap;
    QToolButton *BtnGE;
    QToolButton *BtnGM;
    QWidget *Panel12;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *BtnAnimate;
    QScrollBar *TimeScroll;
    QWidget *Panel11;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *ConnectMsg;
    QToolButton *BtnClear;
    QToolButton *BtnReload;
    QLabel *StrStatus1;
    QLabel *StrStatus2;
    QToolButton *BtnOptions;
    QLabel *Disp;
    QListWidget *RangeList;
    QMenuBar *menubar;
    QMenu *MenuFile;
    QMenu *MenuEdit;
    QMenu *MenuView;
    QMenu *Windows1;
    QMenu *MenuHelp;
    QStatusBar *statusbar;
    QWidget *Panel21;
    QHBoxLayout *horizontalLayout_9;
    QLabel *Message1;
    QLabel *QL1;
    QLabel *QL2;
    QLabel *QL3;
    QLabel *QL4;
    QLabel *QL5;
    QLabel *QL6;
    QLabel *QL7;
    QSpacerItem *horizontalSpacer;
    QLabel *Message2;
    QToolButton *BtnMessage2;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Plot)
    {
        if (Plot->objectName().isEmpty())
            Plot->setObjectName(QString::fromUtf8("Plot"));
        Plot->resize(1124, 662);
        MenuOpenSol1 = new QAction(Plot);
        MenuOpenSol1->setObjectName(QString::fromUtf8("MenuOpenSol1"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/data1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuOpenSol1->setIcon(icon);
        MenuOpenSol2 = new QAction(Plot);
        MenuOpenSol2->setObjectName(QString::fromUtf8("MenuOpenSol2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/data2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuOpenSol2->setIcon(icon1);
        MenuOpenMapImage = new QAction(Plot);
        MenuOpenMapImage->setObjectName(QString::fromUtf8("MenuOpenMapImage"));
        MenuOpenShape = new QAction(Plot);
        MenuOpenShape->setObjectName(QString::fromUtf8("MenuOpenShape"));
        MenuOpenSkyImage = new QAction(Plot);
        MenuOpenSkyImage->setObjectName(QString::fromUtf8("MenuOpenSkyImage"));
        MenuFileSel = new QAction(Plot);
        MenuFileSel->setObjectName(QString::fromUtf8("MenuFileSel"));
        MenuOpenObs = new QAction(Plot);
        MenuOpenObs->setObjectName(QString::fromUtf8("MenuOpenObs"));
        MenuOpenNav = new QAction(Plot);
        MenuOpenNav->setObjectName(QString::fromUtf8("MenuOpenNav"));
        MenuOpenElevMask = new QAction(Plot);
        MenuOpenElevMask->setObjectName(QString::fromUtf8("MenuOpenElevMask"));
        MenuVisAna = new QAction(Plot);
        MenuVisAna->setObjectName(QString::fromUtf8("MenuVisAna"));
        MenuSaveImage = new QAction(Plot);
        MenuSaveImage->setObjectName(QString::fromUtf8("MenuSaveImage"));
        MenuSaveDop = new QAction(Plot);
        MenuSaveDop->setObjectName(QString::fromUtf8("MenuSaveDop"));
        MenuSaveSnrMp = new QAction(Plot);
        MenuSaveSnrMp->setObjectName(QString::fromUtf8("MenuSaveSnrMp"));
        MenuSaveElMask = new QAction(Plot);
        MenuSaveElMask->setObjectName(QString::fromUtf8("MenuSaveElMask"));
        MenuConnect = new QAction(Plot);
        MenuConnect->setObjectName(QString::fromUtf8("MenuConnect"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/connect1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuConnect->setIcon(icon2);
        MenuDisconnect = new QAction(Plot);
        MenuDisconnect->setObjectName(QString::fromUtf8("MenuDisconnect"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/buttons/connect2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuDisconnect->setIcon(icon3);
        MenuPort = new QAction(Plot);
        MenuPort->setObjectName(QString::fromUtf8("MenuPort"));
        MenuReload = new QAction(Plot);
        MenuReload->setObjectName(QString::fromUtf8("MenuReload"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/buttons/reload.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuReload->setIcon(icon4);
        MenuClear = new QAction(Plot);
        MenuClear->setObjectName(QString::fromUtf8("MenuClear"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/buttons/del.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuClear->setIcon(icon5);
        MenuQuit = new QAction(Plot);
        MenuQuit->setObjectName(QString::fromUtf8("MenuQuit"));
        MenuTime = new QAction(Plot);
        MenuTime->setObjectName(QString::fromUtf8("MenuTime"));
        MenuMapImg = new QAction(Plot);
        MenuMapImg->setObjectName(QString::fromUtf8("MenuMapImg"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/buttons/map.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuMapImg->setIcon(icon6);
        MenuSkyImg = new QAction(Plot);
        MenuSkyImg->setObjectName(QString::fromUtf8("MenuSkyImg"));
        MenuWaypnt = new QAction(Plot);
        MenuWaypnt->setObjectName(QString::fromUtf8("MenuWaypnt"));
        MenuSrcSol = new QAction(Plot);
        MenuSrcSol->setObjectName(QString::fromUtf8("MenuSrcSol"));
        MenuSrcObs = new QAction(Plot);
        MenuSrcObs->setObjectName(QString::fromUtf8("MenuSrcObs"));
        MenuQcObs = new QAction(Plot);
        MenuQcObs->setObjectName(QString::fromUtf8("MenuQcObs"));
        MenyCopy = new QAction(Plot);
        MenyCopy->setObjectName(QString::fromUtf8("MenyCopy"));
        MenuOptions = new QAction(Plot);
        MenuOptions->setObjectName(QString::fromUtf8("MenuOptions"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/buttons/toolbmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuOptions->setIcon(icon7);
        MenuToolBar = new QAction(Plot);
        MenuToolBar->setObjectName(QString::fromUtf8("MenuToolBar"));
        MenuToolBar->setCheckable(true);
        MenuToolBar->setChecked(true);
        MenuStatusBar = new QAction(Plot);
        MenuStatusBar->setObjectName(QString::fromUtf8("MenuStatusBar"));
        MenuStatusBar->setCheckable(true);
        MenuStatusBar->setChecked(true);
        MenuGE = new QAction(Plot);
        MenuGE->setObjectName(QString::fromUtf8("MenuGE"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/buttons/ge.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuGE->setIcon(icon8);
        MenuGM = new QAction(Plot);
        MenuGM->setObjectName(QString::fromUtf8("MenuGM"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/buttons/gm.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuGM->setIcon(icon9);
        MenuMonitor1 = new QAction(Plot);
        MenuMonitor1->setObjectName(QString::fromUtf8("MenuMonitor1"));
        MenuMonitor2 = new QAction(Plot);
        MenuMonitor2->setObjectName(QString::fromUtf8("MenuMonitor2"));
        MenuCenterOri = new QAction(Plot);
        MenuCenterOri->setObjectName(QString::fromUtf8("MenuCenterOri"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/buttons/ori.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuCenterOri->setIcon(icon10);
        MenuFitHoriz = new QAction(Plot);
        MenuFitHoriz->setObjectName(QString::fromUtf8("MenuFitHoriz"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/buttons/fith.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuFitHoriz->setIcon(icon11);
        MenuFitVert = new QAction(Plot);
        MenuFitVert->setObjectName(QString::fromUtf8("MenuFitVert"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/buttons/fitv.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuFitVert->setIcon(icon12);
        MenuShowTrack = new QAction(Plot);
        MenuShowTrack->setObjectName(QString::fromUtf8("MenuShowTrack"));
        MenuShowTrack->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/buttons/point.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuShowTrack->setIcon(icon13);
        MenuFixCent = new QAction(Plot);
        MenuFixCent->setObjectName(QString::fromUtf8("MenuFixCent"));
        MenuFixCent->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/buttons/trackc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuFixCent->setIcon(icon14);
        MenuFixHoriz = new QAction(Plot);
        MenuFixHoriz->setObjectName(QString::fromUtf8("MenuFixHoriz"));
        MenuFixHoriz->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/buttons/track.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuFixHoriz->setIcon(icon15);
        MenuFixVert = new QAction(Plot);
        MenuFixVert->setObjectName(QString::fromUtf8("MenuFixVert"));
        MenuFixVert->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/buttons/trackl.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuFixVert->setIcon(icon16);
        MenuShowSkyplot = new QAction(Plot);
        MenuShowSkyplot->setObjectName(QString::fromUtf8("MenuShowSkyplot"));
        MenuShowSkyplot->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/buttons/graph.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuShowSkyplot->setIcon(icon17);
        MenuShowImg = new QAction(Plot);
        MenuShowImg->setObjectName(QString::fromUtf8("MenuShowImg"));
        MenuShowImg->setCheckable(true);
        MenuShowImg->setIcon(icon6);
        MenuShowMap = new QAction(Plot);
        MenuShowMap->setObjectName(QString::fromUtf8("MenuShowMap"));
        MenuShowMap->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/buttons/showp.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuShowMap->setIcon(icon18);
        MenuAnimStart = new QAction(Plot);
        MenuAnimStart->setObjectName(QString::fromUtf8("MenuAnimStart"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/buttons/anim1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuAnimStart->setIcon(icon19);
        MenuAnimStop = new QAction(Plot);
        MenuAnimStop->setObjectName(QString::fromUtf8("MenuAnimStop"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/buttons/anim2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuAnimStop->setIcon(icon20);
        MenuOverlap = new QAction(Plot);
        MenuOverlap->setObjectName(QString::fromUtf8("MenuOverlap"));
        MenuMax = new QAction(Plot);
        MenuMax->setObjectName(QString::fromUtf8("MenuMax"));
        MenuPlotGE = new QAction(Plot);
        MenuPlotGE->setObjectName(QString::fromUtf8("MenuPlotGE"));
        MenuPlotGM = new QAction(Plot);
        MenuPlotGM->setObjectName(QString::fromUtf8("MenuPlotGM"));
        MenuPlotGEGM = new QAction(Plot);
        MenuPlotGEGM->setObjectName(QString::fromUtf8("MenuPlotGEGM"));
        MenuAbout = new QAction(Plot);
        MenuAbout->setObjectName(QString::fromUtf8("MenuAbout"));
        MenuOpenWaypoint = new QAction(Plot);
        MenuOpenWaypoint->setObjectName(QString::fromUtf8("MenuOpenWaypoint"));
        MenuSaveWaypoint = new QAction(Plot);
        MenuSaveWaypoint->setObjectName(QString::fromUtf8("MenuSaveWaypoint"));
        MenuMapLayer = new QAction(Plot);
        MenuMapLayer->setObjectName(QString::fromUtf8("MenuMapLayer"));
        centralwidget = new QWidget(Plot);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        Panel1 = new QWidget(widget);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy1);
        horizontalLayout_8 = new QHBoxLayout(Panel1);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        Panel10 = new QWidget(Panel1);
        Panel10->setObjectName(QString::fromUtf8("Panel10"));
        Panel10->setEnabled(true);
        sizePolicy1.setHeightForWidth(Panel10->sizePolicy().hasHeightForWidth());
        Panel10->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(Panel10);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnConnect = new QToolButton(Panel10);
        BtnConnect->setObjectName(QString::fromUtf8("BtnConnect"));
        BtnConnect->setEnabled(true);
        BtnConnect->setMaximumSize(QSize(25, 25));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/buttons/connect1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon21.addFile(QString::fromUtf8(":/buttons/connect2.bmp"), QSize(), QIcon::Normal, QIcon::On);
        BtnConnect->setIcon(icon21);
        BtnConnect->setCheckable(true);

        horizontalLayout->addWidget(BtnConnect);

        BtnSol1 = new QToolButton(Panel10);
        BtnSol1->setObjectName(QString::fromUtf8("BtnSol1"));
        BtnSol1->setEnabled(true);
        BtnSol1->setMaximumSize(QSize(25, 25));
        BtnSol1->setIcon(icon);
        BtnSol1->setCheckable(true);

        horizontalLayout->addWidget(BtnSol1);

        BtnSol2 = new QToolButton(Panel10);
        BtnSol2->setObjectName(QString::fromUtf8("BtnSol2"));
        BtnSol2->setEnabled(true);
        BtnSol2->setMaximumSize(QSize(25, 25));
        BtnSol2->setIcon(icon1);
        BtnSol2->setCheckable(true);

        horizontalLayout->addWidget(BtnSol2);

        BtnSol12 = new QToolButton(Panel10);
        BtnSol12->setObjectName(QString::fromUtf8("BtnSol12"));
        BtnSol12->setEnabled(true);
        BtnSol12->setMaximumSize(QSize(25, 25));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/buttons/data12.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnSol12->setIcon(icon22);
        BtnSol12->setCheckable(true);

        horizontalLayout->addWidget(BtnSol12);

        Panel101 = new QWidget(Panel10);
        Panel101->setObjectName(QString::fromUtf8("Panel101"));
        Panel101->setEnabled(true);
        horizontalLayout_2 = new QHBoxLayout(Panel101);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PlotTypeS = new QComboBox(Panel101);
        PlotTypeS->setObjectName(QString::fromUtf8("PlotTypeS"));
        PlotTypeS->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(PlotTypeS->sizePolicy().hasHeightForWidth());
        PlotTypeS->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(PlotTypeS);


        horizontalLayout->addWidget(Panel101);

        Panel102 = new QWidget(Panel10);
        Panel102->setObjectName(QString::fromUtf8("Panel102"));
        Panel102->setEnabled(true);
        sizePolicy1.setHeightForWidth(Panel102->sizePolicy().hasHeightForWidth());
        Panel102->setSizePolicy(sizePolicy1);
        Panel102->setMaximumSize(QSize(30, 30));
        verticalLayout = new QVBoxLayout(Panel102);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        BtnOn1 = new QPushButton(Panel102);
        BtnOn1->setObjectName(QString::fromUtf8("BtnOn1"));
        BtnOn1->setEnabled(true);
        BtnOn1->setCheckable(true);
        BtnOn1->setChecked(true);

        verticalLayout->addWidget(BtnOn1);

        BtnOn2 = new QPushButton(Panel102);
        BtnOn2->setObjectName(QString::fromUtf8("BtnOn2"));
        BtnOn2->setEnabled(true);
        BtnOn2->setCheckable(true);
        BtnOn2->setChecked(true);

        verticalLayout->addWidget(BtnOn2);

        BtnOn3 = new QPushButton(Panel102);
        BtnOn3->setObjectName(QString::fromUtf8("BtnOn3"));
        BtnOn3->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(BtnOn3->sizePolicy().hasHeightForWidth());
        BtnOn3->setSizePolicy(sizePolicy3);
        BtnOn3->setCheckable(true);
        BtnOn3->setChecked(true);

        verticalLayout->addWidget(BtnOn3);


        horizontalLayout->addWidget(Panel102);

        Panel103 = new QWidget(Panel10);
        Panel103->setObjectName(QString::fromUtf8("Panel103"));
        Panel103->setEnabled(true);
        horizontalLayout_3 = new QHBoxLayout(Panel103);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        QFlag = new QComboBox(Panel103);
        QFlag->addItem(QString());
        QFlag->addItem(QString());
        QFlag->addItem(QString());
        QFlag->addItem(QString());
        QFlag->addItem(QString());
        QFlag->addItem(QString());
        QFlag->addItem(QString());
        QFlag->setObjectName(QString::fromUtf8("QFlag"));
        QFlag->setEnabled(true);
        sizePolicy2.setHeightForWidth(QFlag->sizePolicy().hasHeightForWidth());
        QFlag->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(QFlag);

        ObsType2 = new QComboBox(Panel103);
        ObsType2->addItem(QString());
        ObsType2->addItem(QString());
        ObsType2->setObjectName(QString::fromUtf8("ObsType2"));
        ObsType2->setEnabled(true);
        sizePolicy2.setHeightForWidth(ObsType2->sizePolicy().hasHeightForWidth());
        ObsType2->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(ObsType2);

        ObsType = new QComboBox(Panel103);
        ObsType->setObjectName(QString::fromUtf8("ObsType"));
        ObsType->setEnabled(true);
        sizePolicy2.setHeightForWidth(ObsType->sizePolicy().hasHeightForWidth());
        ObsType->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(ObsType);

        FrqType = new QComboBox(Panel103);
        FrqType->addItem(QString());
        FrqType->addItem(QString());
        FrqType->setObjectName(QString::fromUtf8("FrqType"));
        FrqType->setEnabled(true);
        sizePolicy2.setHeightForWidth(FrqType->sizePolicy().hasHeightForWidth());
        FrqType->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(FrqType);

        DopType = new QComboBox(Panel103);
        DopType->addItem(QString());
        DopType->addItem(QString());
        DopType->addItem(QString());
        DopType->addItem(QString());
        DopType->addItem(QString());
        DopType->addItem(QString());
        DopType->setObjectName(QString::fromUtf8("DopType"));
        DopType->setEnabled(true);
        sizePolicy2.setHeightForWidth(DopType->sizePolicy().hasHeightForWidth());
        DopType->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(DopType);


        horizontalLayout->addWidget(Panel103);

        Panel104 = new QWidget(Panel10);
        Panel104->setObjectName(QString::fromUtf8("Panel104"));
        Panel104->setEnabled(true);
        horizontalLayout_4 = new QHBoxLayout(Panel104);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        BtnCenterOri = new QToolButton(Panel104);
        BtnCenterOri->setObjectName(QString::fromUtf8("BtnCenterOri"));
        BtnCenterOri->setEnabled(true);
        BtnCenterOri->setMaximumSize(QSize(25, 25));
        BtnCenterOri->setIcon(icon14);

        horizontalLayout_4->addWidget(BtnCenterOri);

        BtnRangeList = new QToolButton(Panel104);
        BtnRangeList->setObjectName(QString::fromUtf8("BtnRangeList"));
        BtnRangeList->setEnabled(true);
        BtnRangeList->setMaximumSize(QSize(25, 25));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/buttons/down.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnRangeList->setIcon(icon23);

        horizontalLayout_4->addWidget(BtnRangeList);

        SatList = new QComboBox(Panel104);
        SatList->addItem(QString());
        SatList->setObjectName(QString::fromUtf8("SatList"));
        SatList->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(SatList->sizePolicy().hasHeightForWidth());
        SatList->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(SatList);


        horizontalLayout->addWidget(Panel104);

        BtnFitHoriz = new QToolButton(Panel10);
        BtnFitHoriz->setObjectName(QString::fromUtf8("BtnFitHoriz"));
        BtnFitHoriz->setEnabled(true);
        BtnFitHoriz->setMaximumSize(QSize(25, 25));
        BtnFitHoriz->setIcon(icon11);

        horizontalLayout->addWidget(BtnFitHoriz);

        BtnFitVert = new QToolButton(Panel10);
        BtnFitVert->setObjectName(QString::fromUtf8("BtnFitVert"));
        BtnFitVert->setEnabled(true);
        BtnFitVert->setMaximumSize(QSize(25, 25));
        BtnFitVert->setIcon(icon12);

        horizontalLayout->addWidget(BtnFitVert);

        BtnShowTrack = new QToolButton(Panel10);
        BtnShowTrack->setObjectName(QString::fromUtf8("BtnShowTrack"));
        BtnShowTrack->setEnabled(true);
        BtnShowTrack->setMaximumSize(QSize(25, 25));
        BtnShowTrack->setIcon(icon13);
        BtnShowTrack->setCheckable(true);

        horizontalLayout->addWidget(BtnShowTrack);

        BtnShowSkyplot = new QToolButton(Panel10);
        BtnShowSkyplot->setObjectName(QString::fromUtf8("BtnShowSkyplot"));
        BtnShowSkyplot->setEnabled(true);
        BtnShowSkyplot->setMaximumSize(QSize(25, 25));
        BtnShowSkyplot->setIcon(icon14);
        BtnShowSkyplot->setCheckable(true);
        BtnShowSkyplot->setChecked(true);

        horizontalLayout->addWidget(BtnShowSkyplot);

        BtnShowImg = new QToolButton(Panel10);
        BtnShowImg->setObjectName(QString::fromUtf8("BtnShowImg"));
        BtnShowImg->setEnabled(true);
        BtnShowImg->setMaximumSize(QSize(25, 25));
        BtnShowImg->setIcon(icon6);
        BtnShowImg->setCheckable(true);

        horizontalLayout->addWidget(BtnShowImg);

        BtnFixCent = new QToolButton(Panel10);
        BtnFixCent->setObjectName(QString::fromUtf8("BtnFixCent"));
        BtnFixCent->setEnabled(true);
        BtnFixCent->setMaximumSize(QSize(25, 25));
        BtnFixCent->setIcon(icon14);
        BtnFixCent->setCheckable(true);

        horizontalLayout->addWidget(BtnFixCent);

        BtnFixHoriz = new QToolButton(Panel10);
        BtnFixHoriz->setObjectName(QString::fromUtf8("BtnFixHoriz"));
        BtnFixHoriz->setEnabled(true);
        BtnFixHoriz->setMaximumSize(QSize(25, 25));
        BtnFixHoriz->setIcon(icon15);
        BtnFixHoriz->setCheckable(true);

        horizontalLayout->addWidget(BtnFixHoriz);

        BtnFixVert = new QToolButton(Panel10);
        BtnFixVert->setObjectName(QString::fromUtf8("BtnFixVert"));
        BtnFixVert->setEnabled(true);
        BtnFixVert->setMaximumSize(QSize(25, 25));
        BtnFixVert->setIcon(icon15);
        BtnFixVert->setCheckable(true);

        horizontalLayout->addWidget(BtnFixVert);

        BtnShowMap = new QToolButton(Panel10);
        BtnShowMap->setObjectName(QString::fromUtf8("BtnShowMap"));
        BtnShowMap->setEnabled(true);
        BtnShowMap->setMaximumSize(QSize(25, 25));
        BtnShowMap->setIcon(icon18);
        BtnShowMap->setCheckable(true);

        horizontalLayout->addWidget(BtnShowMap);

        BtnGE = new QToolButton(Panel10);
        BtnGE->setObjectName(QString::fromUtf8("BtnGE"));
        BtnGE->setEnabled(true);
        BtnGE->setMaximumSize(QSize(25, 25));
        BtnGE->setIcon(icon8);

        horizontalLayout->addWidget(BtnGE);

        BtnGM = new QToolButton(Panel10);
        BtnGM->setObjectName(QString::fromUtf8("BtnGM"));
        BtnGM->setEnabled(true);
        BtnGM->setMaximumSize(QSize(25, 25));
        BtnGM->setIcon(icon9);

        horizontalLayout->addWidget(BtnGM);


        horizontalLayout_8->addWidget(Panel10);

        Panel12 = new QWidget(Panel1);
        Panel12->setObjectName(QString::fromUtf8("Panel12"));
        Panel12->setEnabled(true);
        sizePolicy1.setHeightForWidth(Panel12->sizePolicy().hasHeightForWidth());
        Panel12->setSizePolicy(sizePolicy1);
        horizontalLayout_7 = new QHBoxLayout(Panel12);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        BtnAnimate = new QToolButton(Panel12);
        BtnAnimate->setObjectName(QString::fromUtf8("BtnAnimate"));
        BtnAnimate->setEnabled(true);
        BtnAnimate->setMaximumSize(QSize(25, 25));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/buttons/anim1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon24.addFile(QString::fromUtf8(":/buttons/anim2.bmp"), QSize(), QIcon::Normal, QIcon::On);
        BtnAnimate->setIcon(icon24);
        BtnAnimate->setCheckable(true);
        BtnAnimate->setProperty("flat", QVariant(true));

        horizontalLayout_7->addWidget(BtnAnimate);

        TimeScroll = new QScrollBar(Panel12);
        TimeScroll->setObjectName(QString::fromUtf8("TimeScroll"));
        TimeScroll->setEnabled(true);
        sizePolicy4.setHeightForWidth(TimeScroll->sizePolicy().hasHeightForWidth());
        TimeScroll->setSizePolicy(sizePolicy4);
        TimeScroll->setMinimum(0);
        TimeScroll->setMaximum(0);
        TimeScroll->setSingleStep(1);
        TimeScroll->setValue(0);
        TimeScroll->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(TimeScroll);

        Panel11 = new QWidget(Panel12);
        Panel11->setObjectName(QString::fromUtf8("Panel11"));
        Panel11->setEnabled(true);
        sizePolicy1.setHeightForWidth(Panel11->sizePolicy().hasHeightForWidth());
        Panel11->setSizePolicy(sizePolicy1);
        horizontalLayout_6 = new QHBoxLayout(Panel11);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        ConnectMsg = new QLabel(Panel11);
        ConnectMsg->setObjectName(QString::fromUtf8("ConnectMsg"));
        ConnectMsg->setEnabled(true);

        horizontalLayout_6->addWidget(ConnectMsg);

        BtnClear = new QToolButton(Panel11);
        BtnClear->setObjectName(QString::fromUtf8("BtnClear"));
        BtnClear->setEnabled(true);
        BtnClear->setMaximumSize(QSize(25, 25));
        BtnClear->setIcon(icon5);

        horizontalLayout_6->addWidget(BtnClear);

        BtnReload = new QToolButton(Panel11);
        BtnReload->setObjectName(QString::fromUtf8("BtnReload"));
        BtnReload->setEnabled(true);
        BtnReload->setMaximumSize(QSize(25, 25));
        BtnReload->setIcon(icon4);

        horizontalLayout_6->addWidget(BtnReload);

        StrStatus1 = new QLabel(Panel11);
        StrStatus1->setObjectName(QString::fromUtf8("StrStatus1"));
        StrStatus1->setEnabled(true);
        StrStatus1->setMaximumSize(QSize(25, 25));
        StrStatus1->setFrameShape(QFrame::Box);
        StrStatus1->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(StrStatus1);

        StrStatus2 = new QLabel(Panel11);
        StrStatus2->setObjectName(QString::fromUtf8("StrStatus2"));
        StrStatus2->setEnabled(true);
        StrStatus2->setMaximumSize(QSize(25, 25));
        StrStatus2->setFrameShape(QFrame::Box);
        StrStatus2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(StrStatus2);

        BtnOptions = new QToolButton(Panel11);
        BtnOptions->setObjectName(QString::fromUtf8("BtnOptions"));
        BtnOptions->setEnabled(true);
        BtnOptions->setMaximumSize(QSize(25, 25));
        BtnOptions->setIcon(icon7);

        horizontalLayout_6->addWidget(BtnOptions);


        horizontalLayout_7->addWidget(Panel11);


        horizontalLayout_8->addWidget(Panel12);


        verticalLayout_3->addWidget(Panel1);

        Disp = new QLabel(widget);
        Disp->setObjectName(QString::fromUtf8("Disp"));
        sizePolicy.setHeightForWidth(Disp->sizePolicy().hasHeightForWidth());
        Disp->setSizePolicy(sizePolicy);
        Disp->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(Disp);

        RangeList = new QListWidget(widget);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        RangeList->setObjectName(QString::fromUtf8("RangeList"));
        RangeList->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(RangeList->sizePolicy().hasHeightForWidth());
        RangeList->setSizePolicy(sizePolicy5);

        verticalLayout_3->addWidget(RangeList);


        verticalLayout_2->addWidget(widget);

        Plot->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Plot);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1124, 27));
        MenuFile = new QMenu(menubar);
        MenuFile->setObjectName(QString::fromUtf8("MenuFile"));
        MenuFile->setEnabled(true);
        MenuEdit = new QMenu(menubar);
        MenuEdit->setObjectName(QString::fromUtf8("MenuEdit"));
        MenuEdit->setEnabled(true);
        MenuView = new QMenu(menubar);
        MenuView->setObjectName(QString::fromUtf8("MenuView"));
        MenuView->setEnabled(true);
        Windows1 = new QMenu(menubar);
        Windows1->setObjectName(QString::fromUtf8("Windows1"));
        Windows1->setEnabled(true);
        MenuHelp = new QMenu(menubar);
        MenuHelp->setObjectName(QString::fromUtf8("MenuHelp"));
        MenuHelp->setEnabled(true);
        Plot->setMenuBar(menubar);
        statusbar = new QStatusBar(Plot);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(statusbar->sizePolicy().hasHeightForWidth());
        statusbar->setSizePolicy(sizePolicy6);
        Panel21 = new QWidget(statusbar);
        Panel21->setObjectName(QString::fromUtf8("Panel21"));
        Panel21->setEnabled(true);
        Panel21->setGeometry(QRect(0, 0, 1081, 16));
        sizePolicy4.setHeightForWidth(Panel21->sizePolicy().hasHeightForWidth());
        Panel21->setSizePolicy(sizePolicy4);
        horizontalLayout_9 = new QHBoxLayout(Panel21);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        Message1 = new QLabel(Panel21);
        Message1->setObjectName(QString::fromUtf8("Message1"));
        Message1->setEnabled(true);
        sizePolicy3.setHeightForWidth(Message1->sizePolicy().hasHeightForWidth());
        Message1->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(Message1);

        QL1 = new QLabel(Panel21);
        QL1->setObjectName(QString::fromUtf8("QL1"));
        QL1->setEnabled(true);
        sizePolicy3.setHeightForWidth(QL1->sizePolicy().hasHeightForWidth());
        QL1->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(QL1);

        QL2 = new QLabel(Panel21);
        QL2->setObjectName(QString::fromUtf8("QL2"));
        QL2->setEnabled(true);
        sizePolicy3.setHeightForWidth(QL2->sizePolicy().hasHeightForWidth());
        QL2->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(QL2);

        QL3 = new QLabel(Panel21);
        QL3->setObjectName(QString::fromUtf8("QL3"));
        QL3->setEnabled(true);
        sizePolicy3.setHeightForWidth(QL3->sizePolicy().hasHeightForWidth());
        QL3->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(QL3);

        QL4 = new QLabel(Panel21);
        QL4->setObjectName(QString::fromUtf8("QL4"));
        QL4->setEnabled(true);
        sizePolicy3.setHeightForWidth(QL4->sizePolicy().hasHeightForWidth());
        QL4->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(QL4);

        QL5 = new QLabel(Panel21);
        QL5->setObjectName(QString::fromUtf8("QL5"));
        QL5->setEnabled(true);
        sizePolicy3.setHeightForWidth(QL5->sizePolicy().hasHeightForWidth());
        QL5->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(QL5);

        QL6 = new QLabel(Panel21);
        QL6->setObjectName(QString::fromUtf8("QL6"));
        QL6->setEnabled(true);
        sizePolicy3.setHeightForWidth(QL6->sizePolicy().hasHeightForWidth());
        QL6->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(QL6);

        QL7 = new QLabel(Panel21);
        QL7->setObjectName(QString::fromUtf8("QL7"));
        QL7->setEnabled(true);
        sizePolicy3.setHeightForWidth(QL7->sizePolicy().hasHeightForWidth());
        QL7->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(QL7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        Message2 = new QLabel(Panel21);
        Message2->setObjectName(QString::fromUtf8("Message2"));
        Message2->setEnabled(true);
        sizePolicy3.setHeightForWidth(Message2->sizePolicy().hasHeightForWidth());
        Message2->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(Message2);

        BtnMessage2 = new QToolButton(Panel21);
        BtnMessage2->setObjectName(QString::fromUtf8("BtnMessage2"));
        BtnMessage2->setEnabled(true);
        BtnMessage2->setMaximumSize(QSize(16, 16));
        BtnMessage2->setIcon(icon18);

        horizontalLayout_9->addWidget(BtnMessage2);

        Plot->setStatusBar(statusbar);
        toolBar = new QToolBar(Plot);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Plot->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(MenuFile->menuAction());
        menubar->addAction(MenuEdit->menuAction());
        menubar->addAction(MenuView->menuAction());
        menubar->addAction(Windows1->menuAction());
        menubar->addAction(MenuHelp->menuAction());
        MenuFile->addAction(MenuOpenSol1);
        MenuFile->addAction(MenuOpenSol2);
        MenuFile->addAction(MenuOpenMapImage);
        MenuFile->addAction(MenuOpenSkyImage);
        MenuFile->addAction(MenuOpenShape);
        MenuFile->addAction(MenuOpenWaypoint);
        MenuFile->addSeparator();
        MenuFile->addAction(MenuFileSel);
        MenuFile->addSeparator();
        MenuFile->addAction(MenuOpenObs);
        MenuFile->addAction(MenuOpenNav);
        MenuFile->addAction(MenuOpenElevMask);
        MenuFile->addSeparator();
        MenuFile->addAction(MenuVisAna);
        MenuFile->addSeparator();
        MenuFile->addAction(MenuSaveImage);
        MenuFile->addAction(MenuSaveWaypoint);
        MenuFile->addAction(MenuSaveDop);
        MenuFile->addAction(MenuSaveSnrMp);
        MenuFile->addAction(MenuSaveElMask);
        MenuFile->addSeparator();
        MenuFile->addAction(MenuConnect);
        MenuFile->addAction(MenuDisconnect);
        MenuFile->addAction(MenuPort);
        MenuFile->addSeparator();
        MenuFile->addAction(MenuReload);
        MenuFile->addAction(MenuClear);
        MenuFile->addSeparator();
        MenuFile->addAction(MenuQuit);
        MenuEdit->addAction(MenuTime);
        MenuEdit->addAction(MenuMapImg);
        MenuEdit->addAction(MenuSkyImg);
        MenuEdit->addAction(MenuMapLayer);
        MenuEdit->addAction(MenuWaypnt);
        MenuEdit->addSeparator();
        MenuEdit->addAction(MenuSrcSol);
        MenuEdit->addAction(MenuSrcObs);
        MenuEdit->addAction(MenuQcObs);
        MenuEdit->addSeparator();
        MenuEdit->addAction(MenyCopy);
        MenuEdit->addSeparator();
        MenuEdit->addAction(MenuOptions);
        MenuView->addAction(MenuToolBar);
        MenuView->addAction(MenuStatusBar);
        MenuView->addSeparator();
        MenuView->addAction(MenuGE);
        MenuView->addAction(MenuGM);
        MenuView->addSeparator();
        MenuView->addAction(MenuMonitor1);
        MenuView->addAction(MenuMonitor2);
        MenuView->addSeparator();
        MenuView->addAction(MenuCenterOri);
        MenuView->addAction(MenuFitHoriz);
        MenuView->addAction(MenuFitVert);
        MenuView->addSeparator();
        MenuView->addAction(MenuShowTrack);
        MenuView->addAction(MenuFixCent);
        MenuView->addAction(MenuFixHoriz);
        MenuView->addAction(MenuFixVert);
        MenuView->addSeparator();
        MenuView->addAction(MenuShowSkyplot);
        MenuView->addAction(MenuShowImg);
        MenuView->addAction(MenuShowMap);
        MenuView->addSeparator();
        MenuView->addAction(MenuAnimStart);
        MenuView->addAction(MenuAnimStop);
        Windows1->addAction(MenuMax);
        Windows1->addSeparator();
        Windows1->addAction(MenuPlotGE);
        Windows1->addAction(MenuPlotGM);
        Windows1->addAction(MenuPlotGEGM);
        MenuHelp->addAction(MenuAbout);

        retranslateUi(Plot);

        QMetaObject::connectSlotsByName(Plot);
    } // setupUi

    void retranslateUi(QMainWindow *Plot)
    {
        Plot->setWindowTitle(QCoreApplication::translate("Plot", "Plot", nullptr));
        MenuOpenSol1->setText(QCoreApplication::translate("Plot", "Open Solution-&1...", nullptr));
#if QT_CONFIG(shortcut)
        MenuOpenSol1->setShortcut(QCoreApplication::translate("Plot", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuOpenSol2->setText(QCoreApplication::translate("Plot", "Open Solution-&2...", nullptr));
#if QT_CONFIG(shortcut)
        MenuOpenSol2->setShortcut(QCoreApplication::translate("Plot", "Ctrl+Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuOpenMapImage->setText(QCoreApplication::translate("Plot", "Open &Map Image...", nullptr));
        MenuOpenShape->setText(QCoreApplication::translate("Plot", "Open &Shapefile", nullptr));
        MenuOpenSkyImage->setText(QCoreApplication::translate("Plot", "Open S&ky Image...", nullptr));
        MenuFileSel->setText(QCoreApplication::translate("Plot", "&Browse Solutions...", nullptr));
#if QT_CONFIG(shortcut)
        MenuFileSel->setShortcut(QCoreApplication::translate("Plot", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuOpenObs->setText(QCoreApplication::translate("Plot", "Open &Obs Data...", nullptr));
#if QT_CONFIG(shortcut)
        MenuOpenObs->setShortcut(QCoreApplication::translate("Plot", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuOpenNav->setText(QCoreApplication::translate("Plot", "Open &Nav Data...", nullptr));
#if QT_CONFIG(shortcut)
        MenuOpenNav->setShortcut(QCoreApplication::translate("Plot", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuOpenElevMask->setText(QCoreApplication::translate("Plot", "O&pen Elev Mask...", nullptr));
        MenuVisAna->setText(QCoreApplication::translate("Plot", "&Visibility Analysis...", nullptr));
        MenuSaveImage->setText(QCoreApplication::translate("Plot", "Save &Image...", nullptr));
        MenuSaveDop->setText(QCoreApplication::translate("Plot", "Save # o&f Sats/DOP...", nullptr));
        MenuSaveSnrMp->setText(QCoreApplication::translate("Plot", "Save A&Z/EL/SNR/MP...", nullptr));
        MenuSaveElMask->setText(QCoreApplication::translate("Plot", "S&ave Elev Mask...", nullptr));
        MenuConnect->setText(QCoreApplication::translate("Plot", "&Connect", nullptr));
#if QT_CONFIG(shortcut)
        MenuConnect->setShortcut(QCoreApplication::translate("Plot", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuDisconnect->setText(QCoreApplication::translate("Plot", "&Disconnect", nullptr));
        MenuPort->setText(QCoreApplication::translate("Plot", "Connection Settin&gs...", nullptr));
        MenuReload->setText(QCoreApplication::translate("Plot", "&Reload", nullptr));
#if QT_CONFIG(shortcut)
        MenuReload->setShortcut(QCoreApplication::translate("Plot", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuClear->setText(QCoreApplication::translate("Plot", "C&lear", nullptr));
        MenuQuit->setText(QCoreApplication::translate("Plot", "&Exit", nullptr));
#if QT_CONFIG(shortcut)
        MenuQuit->setShortcut(QCoreApplication::translate("Plot", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuTime->setText(QCoreApplication::translate("Plot", "&Time Span/Interval...", nullptr));
#if QT_CONFIG(shortcut)
        MenuTime->setShortcut(QCoreApplication::translate("Plot", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuMapImg->setText(QCoreApplication::translate("Plot", "&Map Image...", nullptr));
        MenuSkyImg->setText(QCoreApplication::translate("Plot", "&Sky Image...", nullptr));
        MenuWaypnt->setText(QCoreApplication::translate("Plot", "&Waypoint...", nullptr));
#if QT_CONFIG(shortcut)
        MenuWaypnt->setShortcut(QCoreApplication::translate("Plot", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuSrcSol->setText(QCoreApplication::translate("Plot", "So&lution Source...", nullptr));
        MenuSrcObs->setText(QCoreApplication::translate("Plot", "Obs &Data Source...", nullptr));
        MenuQcObs->setText(QCoreApplication::translate("Plot", "Obs Data &QC...", nullptr));
        MenyCopy->setText(QCoreApplication::translate("Plot", "&Copy To Clipboard", nullptr));
#if QT_CONFIG(shortcut)
        MenyCopy->setShortcut(QCoreApplication::translate("Plot", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuOptions->setText(QCoreApplication::translate("Plot", "&Options...", nullptr));
#if QT_CONFIG(shortcut)
        MenuOptions->setShortcut(QCoreApplication::translate("Plot", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuToolBar->setText(QCoreApplication::translate("Plot", "Show &Tool Bar", nullptr));
        MenuStatusBar->setText(QCoreApplication::translate("Plot", "Show &Status Bar", nullptr));
        MenuGE->setText(QCoreApplication::translate("Plot", "&Google Earth View...", nullptr));
        MenuGM->setText(QCoreApplication::translate("Plot", "Google &Map View...", nullptr));
        MenuMonitor1->setText(QCoreApplication::translate("Plot", "Input Monitor &1...", nullptr));
        MenuMonitor2->setText(QCoreApplication::translate("Plot", "Input Monitor &2...", nullptr));
        MenuCenterOri->setText(QCoreApplication::translate("Plot", "&Center Origin", nullptr));
        MenuFitHoriz->setText(QCoreApplication::translate("Plot", "Fit &Horizontal", nullptr));
#if QT_CONFIG(shortcut)
        MenuFitHoriz->setShortcut(QCoreApplication::translate("Plot", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuFitVert->setText(QCoreApplication::translate("Plot", "Fit &Vertical", nullptr));
#if QT_CONFIG(shortcut)
        MenuFitVert->setShortcut(QCoreApplication::translate("Plot", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuShowTrack->setText(QCoreApplication::translate("Plot", "Show Track &Point", nullptr));
        MenuFixCent->setText(QCoreApplication::translate("Plot", "&Fix Track Center", nullptr));
        MenuFixHoriz->setText(QCoreApplication::translate("Plot", "Fi&x Track Horizontal", nullptr));
#if QT_CONFIG(shortcut)
        MenuFixHoriz->setShortcut(QCoreApplication::translate("Plot", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        MenuFixVert->setText(QCoreApplication::translate("Plot", "Fix T&rack Vertical", nullptr));
        MenuShowSkyplot->setText(QCoreApplication::translate("Plot", "Sh&ow Skyplot", nullptr));
        MenuShowImg->setText(QCoreApplication::translate("Plot", "Show &Image", nullptr));
        MenuShowMap->setText(QCoreApplication::translate("Plot", "Show Map/&Waypoint", nullptr));
#if QT_CONFIG(tooltip)
        MenuShowMap->setToolTip(QCoreApplication::translate("Plot", "Show Map/Waypoint", nullptr));
#endif // QT_CONFIG(tooltip)
        MenuAnimStart->setText(QCoreApplication::translate("Plot", "&Animation Start", nullptr));
        MenuAnimStop->setText(QCoreApplication::translate("Plot", "A&nimation Stop", nullptr));
        MenuOverlap->setText(QCoreApplication::translate("Plot", "&Overlapped", nullptr));
        MenuMax->setText(QCoreApplication::translate("Plot", "&Maximized", nullptr));
        MenuPlotGE->setText(QCoreApplication::translate("Plot", "Plot - &GE View Horizontal", nullptr));
        MenuPlotGM->setText(QCoreApplication::translate("Plot", "Plot - GM &View Horizontal", nullptr));
        MenuPlotGEGM->setText(QCoreApplication::translate("Plot", "Plot - GE/GM Views &Horizontal", nullptr));
        MenuAbout->setText(QCoreApplication::translate("Plot", "&About...", nullptr));
        MenuOpenWaypoint->setText(QCoreApplication::translate("Plot", "Open &Waypoint...", nullptr));
        MenuSaveWaypoint->setText(QCoreApplication::translate("Plot", "Save Wa&ypoint...", nullptr));
        MenuMapLayer->setText(QCoreApplication::translate("Plot", "Ma&p Layer...", nullptr));
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Panel10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel10->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnConnect->setToolTip(QCoreApplication::translate("Plot", "Connect/Disconnect", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnConnect->setText(QString());
#if QT_CONFIG(tooltip)
        BtnSol1->setToolTip(QCoreApplication::translate("Plot", "Data 1", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnSol1->setText(QString());
#if QT_CONFIG(tooltip)
        BtnSol2->setToolTip(QCoreApplication::translate("Plot", "Data 2", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnSol2->setText(QString());
#if QT_CONFIG(tooltip)
        BtnSol12->setToolTip(QCoreApplication::translate("Plot", "Data 1-2", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnSol12->setText(QString());
#if QT_CONFIG(tooltip)
        Panel101->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel101->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        PlotTypeS->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel102->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel102->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnOn1->setToolTip(QCoreApplication::translate("Plot", "Plot1", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOn1->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOn2->setToolTip(QCoreApplication::translate("Plot", "Plot2", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOn2->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOn3->setToolTip(QCoreApplication::translate("Plot", "Plot3", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOn3->setText(QString());
#if QT_CONFIG(tooltip)
        Panel103->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel103->setProperty("text", QVariant(QString()));
        QFlag->setItemText(0, QCoreApplication::translate("Plot", "ALL", nullptr));
        QFlag->setItemText(1, QCoreApplication::translate("Plot", "Q=1", nullptr));
        QFlag->setItemText(2, QCoreApplication::translate("Plot", "Q=2", nullptr));
        QFlag->setItemText(3, QCoreApplication::translate("Plot", "Q=3", nullptr));
        QFlag->setItemText(4, QCoreApplication::translate("Plot", "Q=4", nullptr));
        QFlag->setItemText(5, QCoreApplication::translate("Plot", "Q=5", nullptr));
        QFlag->setItemText(6, QCoreApplication::translate("Plot", "Q=6", nullptr));

#if QT_CONFIG(tooltip)
        QFlag->setToolTip(QCoreApplication::translate("Plot", "Quality Flag", nullptr));
#endif // QT_CONFIG(tooltip)
        ObsType2->setItemText(0, QCoreApplication::translate("Plot", "L1", nullptr));
        ObsType2->setItemText(1, QCoreApplication::translate("Plot", "L2", nullptr));

#if QT_CONFIG(tooltip)
        ObsType2->setToolTip(QCoreApplication::translate("Plot", "Freq Type", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ObsType->setToolTip(QCoreApplication::translate("Plot", "Obs Type", nullptr));
#endif // QT_CONFIG(tooltip)
        FrqType->setItemText(0, QCoreApplication::translate("Plot", "L1", nullptr));
        FrqType->setItemText(1, QCoreApplication::translate("Plot", "L2", nullptr));

#if QT_CONFIG(tooltip)
        FrqType->setToolTip(QCoreApplication::translate("Plot", "Freq Type", nullptr));
#endif // QT_CONFIG(tooltip)
        DopType->setItemText(0, QCoreApplication::translate("Plot", "ALL", nullptr));
        DopType->setItemText(1, QCoreApplication::translate("Plot", "NSAT", nullptr));
        DopType->setItemText(2, QCoreApplication::translate("Plot", "GDOP", nullptr));
        DopType->setItemText(3, QCoreApplication::translate("Plot", "PDOP", nullptr));
        DopType->setItemText(4, QCoreApplication::translate("Plot", "HDOP", nullptr));
        DopType->setItemText(5, QCoreApplication::translate("Plot", "VDOP", nullptr));

#if QT_CONFIG(tooltip)
        DopType->setToolTip(QCoreApplication::translate("Plot", "Dop Type", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel104->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel104->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnCenterOri->setToolTip(QCoreApplication::translate("Plot", "Center Origin", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnCenterOri->setText(QString());
#if QT_CONFIG(tooltip)
        BtnRangeList->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnRangeList->setText(QString());
        SatList->setItemText(0, QCoreApplication::translate("Plot", "ALL", nullptr));

#if QT_CONFIG(tooltip)
        SatList->setToolTip(QCoreApplication::translate("Plot", "Satllite List", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnFitHoriz->setToolTip(QCoreApplication::translate("Plot", "Fit Horizontal", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnFitHoriz->setText(QString());
#if QT_CONFIG(tooltip)
        BtnFitVert->setToolTip(QCoreApplication::translate("Plot", "Fit Vertical", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnFitVert->setText(QString());
#if QT_CONFIG(tooltip)
        BtnShowTrack->setToolTip(QCoreApplication::translate("Plot", "Show Track Point", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnShowTrack->setText(QString());
#if QT_CONFIG(tooltip)
        BtnShowSkyplot->setToolTip(QCoreApplication::translate("Plot", "Show Skyplot", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnShowSkyplot->setText(QString());
#if QT_CONFIG(tooltip)
        BtnShowImg->setToolTip(QCoreApplication::translate("Plot", "Map/Sky Image", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnShowImg->setText(QString());
#if QT_CONFIG(tooltip)
        BtnFixCent->setToolTip(QCoreApplication::translate("Plot", "Fix Track Center", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnFixCent->setText(QString());
#if QT_CONFIG(tooltip)
        BtnFixHoriz->setToolTip(QCoreApplication::translate("Plot", "Fix Track Horizotal", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnFixHoriz->setText(QString());
#if QT_CONFIG(tooltip)
        BtnFixVert->setToolTip(QCoreApplication::translate("Plot", "Fix Track Vertical", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnFixVert->setText(QString());
#if QT_CONFIG(tooltip)
        BtnShowMap->setToolTip(QCoreApplication::translate("Plot", "Show Map/Waypoint", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnShowMap->setText(QString());
#if QT_CONFIG(tooltip)
        BtnGE->setToolTip(QCoreApplication::translate("Plot", "Google Earth View", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnGE->setText(QString());
#if QT_CONFIG(tooltip)
        BtnGM->setToolTip(QCoreApplication::translate("Plot", "Google Map View", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnGM->setText(QString());
#if QT_CONFIG(tooltip)
        Panel12->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel12->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnAnimate->setToolTip(QCoreApplication::translate("Plot", "Animation", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnAnimate->setText(QString());
#if QT_CONFIG(tooltip)
        TimeScroll->setToolTip(QCoreApplication::translate("Plot", "Time Scroll", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel11->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        ConnectMsg->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ConnectMsg->setText(QString());
#if QT_CONFIG(tooltip)
        BtnClear->setToolTip(QCoreApplication::translate("Plot", "Clear", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnClear->setText(QString());
#if QT_CONFIG(tooltip)
        BtnReload->setToolTip(QCoreApplication::translate("Plot", "Reload", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnReload->setText(QString());
#if QT_CONFIG(tooltip)
        StrStatus1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        StrStatus1->setText(QString());
#if QT_CONFIG(tooltip)
        StrStatus2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        StrStatus2->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOptions->setToolTip(QCoreApplication::translate("Plot", "Options", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOptions->setText(QString());

        const bool __sortingEnabled = RangeList->isSortingEnabled();
        RangeList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = RangeList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Plot", "0.05", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = RangeList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Plot", "0.1", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = RangeList->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("Plot", "0.2", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = RangeList->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("Plot", "0.5", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = RangeList->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("Plot", "1", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = RangeList->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("Plot", "2", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = RangeList->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("Plot", "5", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = RangeList->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("Plot", "10", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = RangeList->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("Plot", "20", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = RangeList->item(9);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("Plot", "50", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = RangeList->item(10);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("Plot", "100", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = RangeList->item(11);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("Plot", "200", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = RangeList->item(12);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("Plot", "500", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = RangeList->item(13);
        ___qlistwidgetitem13->setText(QCoreApplication::translate("Plot", "1000", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = RangeList->item(14);
        ___qlistwidgetitem14->setText(QCoreApplication::translate("Plot", "2000", nullptr));
        QListWidgetItem *___qlistwidgetitem15 = RangeList->item(15);
        ___qlistwidgetitem15->setText(QCoreApplication::translate("Plot", "5000", nullptr));
        QListWidgetItem *___qlistwidgetitem16 = RangeList->item(16);
        ___qlistwidgetitem16->setText(QCoreApplication::translate("Plot", "10000", nullptr));
        QListWidgetItem *___qlistwidgetitem17 = RangeList->item(17);
        ___qlistwidgetitem17->setText(QCoreApplication::translate("Plot", "50000", nullptr));
        QListWidgetItem *___qlistwidgetitem18 = RangeList->item(18);
        ___qlistwidgetitem18->setText(QCoreApplication::translate("Plot", "100000", nullptr));
        RangeList->setSortingEnabled(__sortingEnabled);

#if QT_CONFIG(tooltip)
        RangeList->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MenuFile->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MenuFile->setTitle(QCoreApplication::translate("Plot", "&File", nullptr));
#if QT_CONFIG(tooltip)
        MenuEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MenuEdit->setTitle(QCoreApplication::translate("Plot", "&Edit", nullptr));
#if QT_CONFIG(tooltip)
        MenuView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MenuView->setTitle(QCoreApplication::translate("Plot", "&View", nullptr));
#if QT_CONFIG(tooltip)
        Windows1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Windows1->setTitle(QCoreApplication::translate("Plot", "Wi&ndows", nullptr));
#if QT_CONFIG(tooltip)
        MenuHelp->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MenuHelp->setTitle(QCoreApplication::translate("Plot", "&Help", nullptr));
#if QT_CONFIG(tooltip)
        Panel21->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel21->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Message1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Message1->setText(QString());
#if QT_CONFIG(tooltip)
        QL1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        QL1->setText(QString());
#if QT_CONFIG(tooltip)
        QL2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        QL2->setText(QString());
#if QT_CONFIG(tooltip)
        QL3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        QL3->setText(QString());
#if QT_CONFIG(tooltip)
        QL4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        QL4->setText(QString());
#if QT_CONFIG(tooltip)
        QL5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        QL5->setText(QString());
#if QT_CONFIG(tooltip)
        QL6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        QL6->setText(QString());
#if QT_CONFIG(tooltip)
        QL7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        QL7->setText(QString());
#if QT_CONFIG(tooltip)
        Message2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Message2->setText(QString());
        BtnMessage2->setText(QCoreApplication::translate("Plot", "...", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Plot", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Plot: public Ui_Plot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTMAIN_H
