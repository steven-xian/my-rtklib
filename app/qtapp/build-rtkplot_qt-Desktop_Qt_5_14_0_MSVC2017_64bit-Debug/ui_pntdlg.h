/********************************************************************************
** Form generated from reading UI file 'pntdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PNTDLG_H
#define UI_PNTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PntDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *PntList;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnAdd;
    QPushButton *BtnDel;
    QPushButton *BtnUpdate;
    QPushButton *BtnClose;

    void setupUi(QWidget *PntDialog)
    {
        if (PntDialog->objectName().isEmpty())
            PntDialog->setObjectName(QString::fromUtf8("PntDialog"));
        PntDialog->resize(516, 216);
        verticalLayout = new QVBoxLayout(PntDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Panel1 = new QWidget(PntDialog);
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

        verticalLayout->addWidget(Panel1);

        frame = new QFrame(PntDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        PntList = new QTableWidget(frame);
        PntList->setObjectName(QString::fromUtf8("PntList"));

        horizontalLayout_3->addWidget(PntList);


        verticalLayout->addWidget(frame);

        widget = new QWidget(PntDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnAdd = new QPushButton(widget);
        BtnAdd->setObjectName(QString::fromUtf8("BtnAdd"));
        BtnAdd->setEnabled(true);

        horizontalLayout_2->addWidget(BtnAdd);

        BtnDel = new QPushButton(widget);
        BtnDel->setObjectName(QString::fromUtf8("BtnDel"));
        BtnDel->setEnabled(true);

        horizontalLayout_2->addWidget(BtnDel);

        BtnUpdate = new QPushButton(widget);
        BtnUpdate->setObjectName(QString::fromUtf8("BtnUpdate"));

        horizontalLayout_2->addWidget(BtnUpdate);

        BtnClose = new QPushButton(widget);
        BtnClose->setObjectName(QString::fromUtf8("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setAutoDefault(true);

        horizontalLayout_2->addWidget(BtnClose);


        verticalLayout->addWidget(widget);


        retranslateUi(PntDialog);

        BtnClose->setDefault(true);


        QMetaObject::connectSlotsByName(PntDialog);
    } // setupUi

    void retranslateUi(QWidget *PntDialog)
    {
        PntDialog->setWindowTitle(QCoreApplication::translate("PntDialog", "Waypoint", nullptr));
#if QT_CONFIG(tooltip)
        PntDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnAdd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnAdd->setText(QCoreApplication::translate("PntDialog", "&Add", nullptr));
#if QT_CONFIG(tooltip)
        BtnDel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnDel->setText(QCoreApplication::translate("PntDialog", "&Delete", nullptr));
        BtnUpdate->setText(QCoreApplication::translate("PntDialog", "Update", nullptr));
#if QT_CONFIG(tooltip)
        BtnClose->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnClose->setText(QCoreApplication::translate("PntDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PntDialog: public Ui_PntDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PNTDLG_H
