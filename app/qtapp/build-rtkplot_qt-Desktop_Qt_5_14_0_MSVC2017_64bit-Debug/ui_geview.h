/********************************************************************************
** Form generated from reading UI file 'geview.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEVIEW_H
#define UI_GEVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GoogleEarthView
{
public:
    QWidget *centralwidget;
    QToolButton *BtnExpand;
    QToolButton *BtnHeading;
    QToolButton *BtnFixCent;
    QToolButton *BtnGETilt;
    QToolButton *BtnOpt;
    QToolButton *BtnGENorm;
    QToolButton *BtnRotL;
    QToolButton *BtnEnaAlt;
    QToolButton *BtnShrink;
    QToolButton *BtnRotR;
    QLabel *Debug;
    QLabel *Panel3;
    QWidget *Panel5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnClose;
    QWidget *Panel8;
    QHBoxLayout *horizontalLayout;
    QToolButton *BtnOpt1;
    QToolButton *BtnOpt2;
    QToolButton *BtnOpt3;
    QToolButton *BtnOpt4;
    QToolButton *BtnOpt5;
    QToolButton *BtnOpt6;
    QToolButton *BtnOpt7;
    QToolButton *BtnOpt8;
    QToolButton *BtnOpt9;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *GoogleEarthView)
    {
        if (GoogleEarthView->objectName().isEmpty())
            GoogleEarthView->setObjectName(QString::fromUtf8("GoogleEarthView"));
        GoogleEarthView->resize(800, 600);
        centralwidget = new QWidget(GoogleEarthView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BtnExpand = new QToolButton(centralwidget);
        BtnExpand->setObjectName(QString::fromUtf8("BtnExpand"));
        BtnExpand->setEnabled(true);
        BtnExpand->setGeometry(QRect(190, 40, 30, 32));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/expand.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnExpand->setIcon(icon);
        BtnExpand->setProperty("flat", QVariant(true));
        BtnHeading = new QToolButton(centralwidget);
        BtnHeading->setObjectName(QString::fromUtf8("BtnHeading"));
        BtnHeading->setEnabled(true);
        BtnHeading->setGeometry(QRect(293, 0, 30, 32));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/headup.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnHeading->setIcon(icon1);
        BtnHeading->setCheckable(true);
        BtnHeading->setProperty("flat", QVariant(true));
        BtnFixCent = new QToolButton(centralwidget);
        BtnFixCent->setObjectName(QString::fromUtf8("BtnFixCent"));
        BtnFixCent->setEnabled(false);
        BtnFixCent->setGeometry(QRect(39, 0, 30, 32));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/point.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnFixCent->setIcon(icon2);
        BtnFixCent->setProperty("flat", QVariant(true));
        BtnGETilt = new QToolButton(centralwidget);
        BtnGETilt->setObjectName(QString::fromUtf8("BtnGETilt"));
        BtnGETilt->setEnabled(true);
        BtnGETilt->setGeometry(QRect(136, 0, 30, 32));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/buttons/tilt.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnGETilt->setIcon(icon3);
        BtnGETilt->setProperty("flat", QVariant(true));
        BtnOpt = new QToolButton(centralwidget);
        BtnOpt->setObjectName(QString::fromUtf8("BtnOpt"));
        BtnOpt->setEnabled(true);
        BtnOpt->setGeometry(QRect(0, 0, 30, 32));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/buttons/navctr.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt->setIcon(icon4);
        BtnOpt->setProperty("flat", QVariant(true));
        BtnGENorm = new QToolButton(centralwidget);
        BtnGENorm->setObjectName(QString::fromUtf8("BtnGENorm"));
        BtnGENorm->setEnabled(true);
        BtnGENorm->setGeometry(QRect(106, 0, 30, 32));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/buttons/norm.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnGENorm->setIcon(icon5);
        BtnGENorm->setProperty("flat", QVariant(true));
        BtnRotL = new QToolButton(centralwidget);
        BtnRotL->setObjectName(QString::fromUtf8("BtnRotL"));
        BtnRotL->setEnabled(true);
        BtnRotL->setGeometry(QRect(233, 0, 30, 32));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/buttons/rotl.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnRotL->setIcon(icon6);
        BtnRotL->setProperty("flat", QVariant(true));
        BtnEnaAlt = new QToolButton(centralwidget);
        BtnEnaAlt->setObjectName(QString::fromUtf8("BtnEnaAlt"));
        BtnEnaAlt->setEnabled(false);
        BtnEnaAlt->setGeometry(QRect(69, 0, 30, 32));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/buttons/alt.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnEnaAlt->setIcon(icon7);
        BtnEnaAlt->setCheckable(true);
        BtnEnaAlt->setProperty("flat", QVariant(true));
        BtnShrink = new QToolButton(centralwidget);
        BtnShrink->setObjectName(QString::fromUtf8("BtnShrink"));
        BtnShrink->setEnabled(true);
        BtnShrink->setGeometry(QRect(166, 0, 30, 32));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/buttons/shrink.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnShrink->setIcon(icon8);
        BtnShrink->setProperty("flat", QVariant(true));
        BtnRotR = new QToolButton(centralwidget);
        BtnRotR->setObjectName(QString::fromUtf8("BtnRotR"));
        BtnRotR->setEnabled(true);
        BtnRotR->setGeometry(QRect(270, 80, 30, 32));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/buttons/rotr.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnRotR->setIcon(icon9);
        BtnRotR->setProperty("flat", QVariant(true));
        Debug = new QLabel(centralwidget);
        Debug->setObjectName(QString::fromUtf8("Debug"));
        Debug->setEnabled(true);
        Debug->setGeometry(QRect(293, 0, 120, 45));
        Panel3 = new QLabel(centralwidget);
        Panel3->setObjectName(QString::fromUtf8("Panel3"));
        Panel3->setEnabled(true);
        Panel3->setGeometry(QRect(0, 0, 9, 45));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel3->sizePolicy().hasHeightForWidth());
        Panel3->setSizePolicy(sizePolicy);
        Panel3->setLayoutDirection(Qt::LeftToRight);
        Panel3->setFrameShape(QFrame::Panel);
        Panel3->setFrameShadow(QFrame::Sunken);
        Panel3->setAlignment(Qt::AlignCenter);
        Panel5 = new QWidget(centralwidget);
        Panel5->setObjectName(QString::fromUtf8("Panel5"));
        Panel5->setEnabled(true);
        Panel5->setGeometry(QRect(30, 170, 119, 45));
        Panel5->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_2 = new QHBoxLayout(Panel5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        BtnClose = new QPushButton(centralwidget);
        BtnClose->setObjectName(QString::fromUtf8("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setGeometry(QRect(420, 110, 101, 27));
        BtnClose->setFlat(false);
        Panel8 = new QWidget(centralwidget);
        Panel8->setObjectName(QString::fromUtf8("Panel8"));
        Panel8->setGeometry(QRect(410, 310, 348, 44));
        horizontalLayout = new QHBoxLayout(Panel8);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        BtnOpt1 = new QToolButton(Panel8);
        BtnOpt1->setObjectName(QString::fromUtf8("BtnOpt1"));
        BtnOpt1->setEnabled(true);
        BtnOpt1->setIcon(icon4);
        BtnOpt1->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt1);

        BtnOpt2 = new QToolButton(Panel8);
        BtnOpt2->setObjectName(QString::fromUtf8("BtnOpt2"));
        BtnOpt2->setEnabled(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/buttons/grid.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt2->setIcon(icon10);
        BtnOpt2->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt2);

        BtnOpt3 = new QToolButton(Panel8);
        BtnOpt3->setObjectName(QString::fromUtf8("BtnOpt3"));
        BtnOpt3->setEnabled(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/buttons/scale.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt3->setIcon(icon11);
        BtnOpt3->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt3);

        BtnOpt4 = new QToolButton(Panel8);
        BtnOpt4->setObjectName(QString::fromUtf8("BtnOpt4"));
        BtnOpt4->setEnabled(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/buttons/vmap.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt4->setIcon(icon12);
        BtnOpt4->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt4);

        BtnOpt5 = new QToolButton(Panel8);
        BtnOpt5->setObjectName(QString::fromUtf8("BtnOpt5"));
        BtnOpt5->setEnabled(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/buttons/status.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt5->setIcon(icon13);
        BtnOpt5->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt5);

        BtnOpt6 = new QToolButton(Panel8);
        BtnOpt6->setObjectName(QString::fromUtf8("BtnOpt6"));
        BtnOpt6->setEnabled(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/buttons/undu.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt6->setIcon(icon14);
        BtnOpt6->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt6);

        BtnOpt7 = new QToolButton(Panel8);
        BtnOpt7->setObjectName(QString::fromUtf8("BtnOpt7"));
        BtnOpt7->setEnabled(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/buttons/road.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt7->setIcon(icon15);
        BtnOpt7->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt7);

        BtnOpt8 = new QToolButton(Panel8);
        BtnOpt8->setObjectName(QString::fromUtf8("BtnOpt8"));
        BtnOpt8->setEnabled(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/buttons/building.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt8->setIcon(icon16);
        BtnOpt8->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt8);

        BtnOpt9 = new QToolButton(Panel8);
        BtnOpt9->setObjectName(QString::fromUtf8("BtnOpt9"));
        BtnOpt9->setEnabled(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/buttons/border.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt9->setIcon(icon17);
        BtnOpt9->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt9);

        GoogleEarthView->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(GoogleEarthView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GoogleEarthView->setStatusBar(statusbar);
        toolBar = new QToolBar(GoogleEarthView);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        GoogleEarthView->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(GoogleEarthView);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        GoogleEarthView->addToolBar(Qt::TopToolBarArea, toolBar_2);

        toolBar->addSeparator();

        retranslateUi(GoogleEarthView);

        QMetaObject::connectSlotsByName(GoogleEarthView);
    } // setupUi

    void retranslateUi(QMainWindow *GoogleEarthView)
    {
        GoogleEarthView->setWindowTitle(QCoreApplication::translate("GoogleEarthView", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        BtnExpand->setToolTip(QCoreApplication::translate("GoogleEarthView", "Zoom In", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnExpand->setText(QString());
#if QT_CONFIG(tooltip)
        BtnHeading->setToolTip(QCoreApplication::translate("GoogleEarthView", "Heading Up", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnHeading->setText(QString());
#if QT_CONFIG(tooltip)
        BtnFixCent->setToolTip(QCoreApplication::translate("GoogleEarthView", "Fix Plot Center", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnFixCent->setText(QString());
#if QT_CONFIG(tooltip)
        BtnGETilt->setToolTip(QCoreApplication::translate("GoogleEarthView", "Perspective View", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnGETilt->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOpt->setToolTip(QCoreApplication::translate("GoogleEarthView", "Show Objects", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOpt->setText(QString());
#if QT_CONFIG(tooltip)
        BtnGENorm->setToolTip(QCoreApplication::translate("GoogleEarthView", "Objective View", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnGENorm->setText(QString());
#if QT_CONFIG(tooltip)
        BtnRotL->setToolTip(QCoreApplication::translate("GoogleEarthView", "Rotate Left", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnRotL->setText(QString());
#if QT_CONFIG(tooltip)
        BtnEnaAlt->setToolTip(QCoreApplication::translate("GoogleEarthView", "Enable Altitude", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnEnaAlt->setText(QString());
#if QT_CONFIG(tooltip)
        BtnShrink->setToolTip(QCoreApplication::translate("GoogleEarthView", "Zoom Out", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnShrink->setText(QString());
#if QT_CONFIG(tooltip)
        BtnRotR->setToolTip(QCoreApplication::translate("GoogleEarthView", "Rotate Right", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnRotR->setText(QString());
#if QT_CONFIG(tooltip)
        Debug->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Debug->setText(QString());
#if QT_CONFIG(tooltip)
        Panel3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel3->setText(QString());
#if QT_CONFIG(tooltip)
        Panel5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel5->setProperty("text", QVariant(QCoreApplication::translate("GoogleEarthView", "Panel5", nullptr)));
#if QT_CONFIG(tooltip)
        BtnClose->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnClose->setText(QCoreApplication::translate("GoogleEarthView", "Close", nullptr));
#if QT_CONFIG(tooltip)
        BtnOpt1->setToolTip(QCoreApplication::translate("GoogleEarthView", "Layer Borders", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOpt1->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOpt2->setToolTip(QCoreApplication::translate("GoogleEarthView", "Show Navigation Control", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOpt2->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOpt3->setToolTip(QCoreApplication::translate("GoogleEarthView", "Show Scale Legend", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOpt3->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOpt4->setToolTip(QCoreApplication::translate("GoogleEarthView", "Show Overview Map", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOpt4->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOpt5->setToolTip(QCoreApplication::translate("GoogleEarthView", "Show Lat/Long Grid", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOpt5->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOpt6->setToolTip(QCoreApplication::translate("GoogleEarthView", "Show Status Bar", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOpt6->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOpt7->setToolTip(QCoreApplication::translate("GoogleEarthView", "Layer Terrain", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOpt7->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOpt8->setToolTip(QCoreApplication::translate("GoogleEarthView", "Layer Loads", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOpt8->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOpt9->setToolTip(QCoreApplication::translate("GoogleEarthView", "Layer Buildings", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnOpt9->setText(QString());
        toolBar->setWindowTitle(QCoreApplication::translate("GoogleEarthView", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("GoogleEarthView", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GoogleEarthView: public Ui_GoogleEarthView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEVIEW_H
