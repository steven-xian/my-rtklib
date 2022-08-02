/********************************************************************************
** Form generated from reading UI file 'vieweropt.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWEROPT_H
#define UI_VIEWEROPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewerOptDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label6;
    QLabel *lbColor1;
    QPushButton *BtnColor1;
    QLabel *Label1;
    QLabel *lbColor2;
    QPushButton *BtnColor2;
    QLabel *Label15;
    QLabel *FontLabel;
    QPushButton *BtnFont;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *ViewerOptDialog)
    {
        if (ViewerOptDialog->objectName().isEmpty())
            ViewerOptDialog->setObjectName(QString::fromUtf8("ViewerOptDialog"));
        ViewerOptDialog->resize(311, 144);
        gridLayout = new QGridLayout(ViewerOptDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Label6 = new QLabel(ViewerOptDialog);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 0, 0, 1, 1);

        lbColor1 = new QLabel(ViewerOptDialog);
        lbColor1->setObjectName(QString::fromUtf8("lbColor1"));
        lbColor1->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        lbColor1->setPalette(palette);
        lbColor1->setFrameShape(QFrame::Box);
        lbColor1->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lbColor1, 0, 1, 1, 1);

        BtnColor1 = new QPushButton(ViewerOptDialog);
        BtnColor1->setObjectName(QString::fromUtf8("BtnColor1"));
        BtnColor1->setEnabled(true);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnColor1->setPalette(palette1);

        gridLayout->addWidget(BtnColor1, 0, 2, 1, 1);

        Label1 = new QLabel(ViewerOptDialog);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 1, 0, 1, 1);

        lbColor2 = new QLabel(ViewerOptDialog);
        lbColor2->setObjectName(QString::fromUtf8("lbColor2"));
        lbColor2->setEnabled(true);
        lbColor2->setFrameShape(QFrame::Box);
        lbColor2->setFrameShadow(QFrame::Sunken);
        lbColor2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbColor2, 1, 1, 1, 1);

        BtnColor2 = new QPushButton(ViewerOptDialog);
        BtnColor2->setObjectName(QString::fromUtf8("BtnColor2"));
        BtnColor2->setEnabled(true);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnColor2->setPalette(palette2);

        gridLayout->addWidget(BtnColor2, 1, 2, 1, 1);

        Label15 = new QLabel(ViewerOptDialog);
        Label15->setObjectName(QString::fromUtf8("Label15"));
        Label15->setEnabled(true);

        gridLayout->addWidget(Label15, 2, 0, 1, 1);

        FontLabel = new QLabel(ViewerOptDialog);
        FontLabel->setObjectName(QString::fromUtf8("FontLabel"));
        FontLabel->setEnabled(true);

        gridLayout->addWidget(FontLabel, 2, 1, 1, 1);

        BtnFont = new QPushButton(ViewerOptDialog);
        BtnFont->setObjectName(QString::fromUtf8("BtnFont"));
        BtnFont->setEnabled(true);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnFont->setPalette(palette3);

        gridLayout->addWidget(BtnFont, 2, 2, 1, 1);

        BtnOk = new QPushButton(ViewerOptDialog);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 3, 0, 1, 1);

        BtnCancel = new QPushButton(ViewerOptDialog);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 3, 1, 1, 2);


        retranslateUi(ViewerOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(ViewerOptDialog);
    } // setupUi

    void retranslateUi(QWidget *ViewerOptDialog)
    {
        ViewerOptDialog->setWindowTitle(QCoreApplication::translate("ViewerOptDialog", "Viewer Options", nullptr));
#if QT_CONFIG(tooltip)
        ViewerOptDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("ViewerOptDialog", "Text Color", nullptr));
#if QT_CONFIG(tooltip)
        lbColor1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        lbColor1->setText(QString());
#if QT_CONFIG(tooltip)
        BtnColor1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnColor1->setText(QCoreApplication::translate("ViewerOptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("ViewerOptDialog", "Background Color", nullptr));
#if QT_CONFIG(tooltip)
        lbColor2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        lbColor2->setText(QString());
#if QT_CONFIG(tooltip)
        BtnColor2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnColor2->setText(QCoreApplication::translate("ViewerOptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label15->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label15->setText(QCoreApplication::translate("ViewerOptDialog", "Font", nullptr));
#if QT_CONFIG(tooltip)
        FontLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FontLabel->setText(QCoreApplication::translate("ViewerOptDialog", "Font Name", nullptr));
#if QT_CONFIG(tooltip)
        BtnFont->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFont->setText(QCoreApplication::translate("ViewerOptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("ViewerOptDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("ViewerOptDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewerOptDialog: public Ui_ViewerOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWEROPT_H
