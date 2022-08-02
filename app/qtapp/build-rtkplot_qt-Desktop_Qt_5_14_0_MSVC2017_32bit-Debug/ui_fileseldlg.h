/********************************************************************************
** Form generated from reading UI file 'fileseldlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESELDLG_H
#define UI_FILESELDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileSelDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *DriveSel;
    QWidget *Panel2;
    QVBoxLayout *verticalLayout_2;
    QWidget *Panel5;
    QHBoxLayout *horizontalLayout;
    QLabel *DirSelected;
    QToolButton *BtnDirSel;
    QListView *FileList;
    QWidget *Panel3;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *Filter;

    void setupUi(QWidget *FileSelDialog)
    {
        if (FileSelDialog->objectName().isEmpty())
            FileSelDialog->setObjectName(QString::fromUtf8("FileSelDialog"));
        FileSelDialog->resize(251, 507);
        verticalLayout = new QVBoxLayout(FileSelDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Panel1 = new QWidget(FileSelDialog);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_5 = new QHBoxLayout(Panel1);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        DriveSel = new QComboBox(Panel1);
        DriveSel->setObjectName(QString::fromUtf8("DriveSel"));

        horizontalLayout_5->addWidget(DriveSel);


        verticalLayout->addWidget(Panel1);

        Panel2 = new QWidget(FileSelDialog);
        Panel2->setObjectName(QString::fromUtf8("Panel2"));
        Panel2->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel2->sizePolicy().hasHeightForWidth());
        Panel2->setSizePolicy(sizePolicy);
        Panel2->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_2 = new QVBoxLayout(Panel2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, -1);
        Panel5 = new QWidget(Panel2);
        Panel5->setObjectName(QString::fromUtf8("Panel5"));
        Panel5->setEnabled(true);
        Panel5->setLayoutDirection(Qt::LeftToRight);
        Panel5->setProperty("editable", QVariant(true));
        horizontalLayout = new QHBoxLayout(Panel5);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        DirSelected = new QLabel(Panel5);
        DirSelected->setObjectName(QString::fromUtf8("DirSelected"));

        horizontalLayout->addWidget(DirSelected);

        BtnDirSel = new QToolButton(Panel5);
        BtnDirSel->setObjectName(QString::fromUtf8("BtnDirSel"));

        horizontalLayout->addWidget(BtnDirSel);


        verticalLayout_2->addWidget(Panel5);


        verticalLayout->addWidget(Panel2);

        FileList = new QListView(FileSelDialog);
        FileList->setObjectName(QString::fromUtf8("FileList"));
        FileList->setFrameShape(QFrame::StyledPanel);

        verticalLayout->addWidget(FileList);

        Panel3 = new QWidget(FileSelDialog);
        Panel3->setObjectName(QString::fromUtf8("Panel3"));
        Panel3->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel3->sizePolicy().hasHeightForWidth());
        Panel3->setSizePolicy(sizePolicy);
        Panel3->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_2 = new QHBoxLayout(Panel3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Filter = new QComboBox(Panel3);
        Filter->addItem(QString());
        Filter->addItem(QString());
        Filter->setObjectName(QString::fromUtf8("Filter"));

        horizontalLayout_2->addWidget(Filter);


        verticalLayout->addWidget(Panel3);


        retranslateUi(FileSelDialog);

        QMetaObject::connectSlotsByName(FileSelDialog);
    } // setupUi

    void retranslateUi(QWidget *FileSelDialog)
    {
        FileSelDialog->setWindowTitle(QCoreApplication::translate("FileSelDialog", "Solutions", nullptr));
#if QT_CONFIG(tooltip)
        FileSelDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Panel2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel2->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Panel5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel5->setProperty("text", QVariant(QString()));
        DirSelected->setText(QCoreApplication::translate("FileSelDialog", "TextLabel", nullptr));
        BtnDirSel->setText(QCoreApplication::translate("FileSelDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Panel3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel3->setProperty("text", QVariant(QCoreApplication::translate("FileSelDialog", "Panel3", nullptr)));
        Filter->setItemText(0, QCoreApplication::translate("FileSelDialog", "Position File (*.pos *.nmea)", nullptr));
        Filter->setItemText(1, QCoreApplication::translate("FileSelDialog", "All (*.*)", nullptr));

    } // retranslateUi

};

namespace Ui {
    class FileSelDialog: public Ui_FileSelDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESELDLG_H
