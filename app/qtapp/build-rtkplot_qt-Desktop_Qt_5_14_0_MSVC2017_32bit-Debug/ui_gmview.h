/********************************************************************************
** Form generated from reading UI file 'gmview.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GMVIEW_H
#define UI_GMVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GoogleMapView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnFixCent;
    QPushButton *BtnShrink;
    QPushButton *BtnExpand;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnClose;
    QWidget *Panel2;

    void setupUi(QWidget *GoogleMapView)
    {
        if (GoogleMapView->objectName().isEmpty())
            GoogleMapView->setObjectName(QString::fromUtf8("GoogleMapView"));
        GoogleMapView->resize(504, 506);
        verticalLayout = new QVBoxLayout(GoogleMapView);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Panel1 = new QWidget(GoogleMapView);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(Panel1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnFixCent = new QPushButton(Panel1);
        BtnFixCent->setObjectName(QString::fromUtf8("BtnFixCent"));
        BtnFixCent->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/trackc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnFixCent->setIcon(icon);
        BtnFixCent->setCheckable(true);
        BtnFixCent->setFlat(true);

        horizontalLayout->addWidget(BtnFixCent);

        BtnShrink = new QPushButton(Panel1);
        BtnShrink->setObjectName(QString::fromUtf8("BtnShrink"));
        BtnShrink->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/shrink.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnShrink->setIcon(icon1);
        BtnShrink->setFlat(true);

        horizontalLayout->addWidget(BtnShrink);

        BtnExpand = new QPushButton(Panel1);
        BtnExpand->setObjectName(QString::fromUtf8("BtnExpand"));
        BtnExpand->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/expand.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnExpand->setIcon(icon2);
        BtnExpand->setFlat(true);

        horizontalLayout->addWidget(BtnExpand);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BtnClose = new QPushButton(Panel1);
        BtnClose->setObjectName(QString::fromUtf8("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setAutoDefault(true);

        horizontalLayout->addWidget(BtnClose);


        verticalLayout->addWidget(Panel1);

        Panel2 = new QWidget(GoogleMapView);
        Panel2->setObjectName(QString::fromUtf8("Panel2"));
        Panel2->setEnabled(true);
        Panel2->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(Panel2);


        retranslateUi(GoogleMapView);

        BtnClose->setDefault(true);


        QMetaObject::connectSlotsByName(GoogleMapView);
    } // setupUi

    void retranslateUi(QWidget *GoogleMapView)
    {
        GoogleMapView->setWindowTitle(QCoreApplication::translate("GoogleMapView", "Google Map View", nullptr));
#if QT_CONFIG(tooltip)
        GoogleMapView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnFixCent->setToolTip(QCoreApplication::translate("GoogleMapView", "Fix Plot Center", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnFixCent->setText(QString());
#if QT_CONFIG(tooltip)
        BtnShrink->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnShrink->setText(QString());
#if QT_CONFIG(tooltip)
        BtnExpand->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnExpand->setText(QString());
#if QT_CONFIG(tooltip)
        BtnClose->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnClose->setText(QCoreApplication::translate("GoogleMapView", "Close", nullptr));
#if QT_CONFIG(tooltip)
        Panel2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel2->setProperty("text", QVariant(QString()));
    } // retranslateUi

};

namespace Ui {
    class GoogleMapView: public Ui_GoogleMapView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GMVIEW_H
