/********************************************************************************
** Form generated from reading UI file 'mapdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPDLG_H
#define UI_MAPDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapAreaDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout;
    QLabel *Label1;
    QSpinBox *MapSize1;
    QLabel *Label2;
    QSpinBox *MapSize2;
    QWidget *Panel2;
    QGridLayout *gridLayout;
    QLabel *Label5;
    QDoubleSpinBox *Lon;
    QDoubleSpinBox *Lat;
    QLabel *Label6;
    QCheckBox *ScaleEq;
    QDoubleSpinBox *ScaleX;
    QDoubleSpinBox *ScaleY;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnSave;
    QPushButton *BtnCenter;
    QPushButton *BtnUpdate;
    QPushButton *BtnClose;

    void setupUi(QWidget *MapAreaDialog)
    {
        if (MapAreaDialog->objectName().isEmpty())
            MapAreaDialog->setObjectName(QString::fromUtf8("MapAreaDialog"));
        MapAreaDialog->resize(488, 198);
        verticalLayout = new QVBoxLayout(MapAreaDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Panel1 = new QWidget(MapAreaDialog);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(Panel1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Label1 = new QLabel(Panel1);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        horizontalLayout->addWidget(Label1);

        MapSize1 = new QSpinBox(Panel1);
        MapSize1->setObjectName(QString::fromUtf8("MapSize1"));

        horizontalLayout->addWidget(MapSize1);

        Label2 = new QLabel(Panel1);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Label2->sizePolicy().hasHeightForWidth());
        Label2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(Label2);

        MapSize2 = new QSpinBox(Panel1);
        MapSize2->setObjectName(QString::fromUtf8("MapSize2"));

        horizontalLayout->addWidget(MapSize2);


        verticalLayout->addWidget(Panel1);

        Panel2 = new QWidget(MapAreaDialog);
        Panel2->setObjectName(QString::fromUtf8("Panel2"));
        Panel2->setEnabled(true);
        gridLayout = new QGridLayout(Panel2);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Label5 = new QLabel(Panel2);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 1, 0, 1, 2);

        Lon = new QDoubleSpinBox(Panel2);
        Lon->setObjectName(QString::fromUtf8("Lon"));
        Lon->setEnabled(true);
        Lon->setDecimals(9);
        Lon->setMinimum(-180.000000000000000);
        Lon->setMaximum(180.000000000000000);
        Lon->setSingleStep(0.000005000000000);

        gridLayout->addWidget(Lon, 1, 2, 1, 1);

        Lat = new QDoubleSpinBox(Panel2);
        Lat->setObjectName(QString::fromUtf8("Lat"));
        Lat->setEnabled(true);
        Lat->setDecimals(9);
        Lat->setMinimum(-90.000000000000000);
        Lat->setMaximum(90.000000000000000);
        Lat->setSingleStep(0.000005000000000);

        gridLayout->addWidget(Lat, 1, 3, 1, 1);

        Label6 = new QLabel(Panel2);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 2, 0, 1, 1);

        ScaleEq = new QCheckBox(Panel2);
        ScaleEq->setObjectName(QString::fromUtf8("ScaleEq"));
        ScaleEq->setChecked(false);

        gridLayout->addWidget(ScaleEq, 2, 1, 1, 1);

        ScaleX = new QDoubleSpinBox(Panel2);
        ScaleX->setObjectName(QString::fromUtf8("ScaleX"));
        ScaleX->setEnabled(true);
        ScaleX->setDecimals(4);
        ScaleX->setMaximum(1.000000000000000);
        ScaleX->setSingleStep(0.000500000000000);

        gridLayout->addWidget(ScaleX, 2, 2, 1, 1);

        ScaleY = new QDoubleSpinBox(Panel2);
        ScaleY->setObjectName(QString::fromUtf8("ScaleY"));
        ScaleY->setEnabled(true);
        ScaleY->setDecimals(4);
        ScaleY->setMaximum(8.000000000000000);
        ScaleY->setSingleStep(0.000500000000000);

        gridLayout->addWidget(ScaleY, 2, 3, 1, 1);


        verticalLayout->addWidget(Panel2);

        widget = new QWidget(MapAreaDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnSave = new QPushButton(widget);
        BtnSave->setObjectName(QString::fromUtf8("BtnSave"));
        BtnSave->setEnabled(true);

        horizontalLayout_2->addWidget(BtnSave);

        BtnCenter = new QPushButton(widget);
        BtnCenter->setObjectName(QString::fromUtf8("BtnCenter"));
        BtnCenter->setEnabled(true);

        horizontalLayout_2->addWidget(BtnCenter);

        BtnUpdate = new QPushButton(widget);
        BtnUpdate->setObjectName(QString::fromUtf8("BtnUpdate"));
        BtnUpdate->setEnabled(true);

        horizontalLayout_2->addWidget(BtnUpdate);

        BtnClose = new QPushButton(widget);
        BtnClose->setObjectName(QString::fromUtf8("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setAutoDefault(true);

        horizontalLayout_2->addWidget(BtnClose);


        verticalLayout->addWidget(widget);


        retranslateUi(MapAreaDialog);

        BtnClose->setDefault(true);


        QMetaObject::connectSlotsByName(MapAreaDialog);
    } // setupUi

    void retranslateUi(QWidget *MapAreaDialog)
    {
        MapAreaDialog->setWindowTitle(QCoreApplication::translate("MapAreaDialog", "Map Image", nullptr));
#if QT_CONFIG(tooltip)
        MapAreaDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("MapAreaDialog", "Image Size W/H (pixels)", nullptr));
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("MapAreaDialog", "x", nullptr));
#if QT_CONFIG(tooltip)
        Panel2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel2->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("MapAreaDialog", "Image Center Lon/Lat (\302\260)", nullptr));
#if QT_CONFIG(tooltip)
        Lon->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Lat->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("MapAreaDialog", "Scale X/Y (m/pixel)", nullptr));
#if QT_CONFIG(tooltip)
        ScaleEq->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ScaleEq->setText(QCoreApplication::translate("MapAreaDialog", "X=Y", nullptr));
#if QT_CONFIG(tooltip)
        ScaleX->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ScaleY->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnSave->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnSave->setText(QCoreApplication::translate("MapAreaDialog", "&Save Tag", nullptr));
#if QT_CONFIG(tooltip)
        BtnCenter->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCenter->setText(QCoreApplication::translate("MapAreaDialog", "&Center", nullptr));
#if QT_CONFIG(tooltip)
        BtnUpdate->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnUpdate->setText(QCoreApplication::translate("MapAreaDialog", "&Update", nullptr));
#if QT_CONFIG(tooltip)
        BtnClose->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnClose->setText(QCoreApplication::translate("MapAreaDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MapAreaDialog: public Ui_MapAreaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPDLG_H
