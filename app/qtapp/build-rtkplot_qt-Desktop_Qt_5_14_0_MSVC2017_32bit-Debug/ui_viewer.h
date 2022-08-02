/********************************************************************************
** Form generated from reading UI file 'viewer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWER_H
#define UI_VIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextViewer
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *FindStr;
    QPushButton *BtnFind;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnReload;
    QPushButton *BtnRead;
    QPushButton *BtnOpt;
    QPushButton *BtnClose;
    QPlainTextEdit *Text;

    void setupUi(QWidget *TextViewer)
    {
        if (TextViewer->objectName().isEmpty())
            TextViewer->setObjectName(QString::fromUtf8("TextViewer"));
        TextViewer->resize(624, 415);
        verticalLayout = new QVBoxLayout(TextViewer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(TextViewer);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        FindStr = new QLineEdit(widget);
        FindStr->setObjectName(QString::fromUtf8("FindStr"));
        FindStr->setEnabled(true);

        horizontalLayout->addWidget(FindStr);

        BtnFind = new QPushButton(widget);
        BtnFind->setObjectName(QString::fromUtf8("BtnFind"));
        BtnFind->setEnabled(true);

        horizontalLayout->addWidget(BtnFind);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BtnReload = new QPushButton(widget);
        BtnReload->setObjectName(QString::fromUtf8("BtnReload"));
        BtnReload->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BtnReload->sizePolicy().hasHeightForWidth());
        BtnReload->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/reload.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnReload->setIcon(icon);
        BtnReload->setFlat(true);

        horizontalLayout->addWidget(BtnReload);

        BtnRead = new QPushButton(widget);
        BtnRead->setObjectName(QString::fromUtf8("BtnRead"));
        BtnRead->setEnabled(true);

        horizontalLayout->addWidget(BtnRead);

        BtnOpt = new QPushButton(widget);
        BtnOpt->setObjectName(QString::fromUtf8("BtnOpt"));
        BtnOpt->setEnabled(true);

        horizontalLayout->addWidget(BtnOpt);

        BtnClose = new QPushButton(widget);
        BtnClose->setObjectName(QString::fromUtf8("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setAutoDefault(true);

        horizontalLayout->addWidget(BtnClose);


        verticalLayout->addWidget(widget);

        Text = new QPlainTextEdit(TextViewer);
        Text->setObjectName(QString::fromUtf8("Text"));

        verticalLayout->addWidget(Text);


        retranslateUi(TextViewer);

        BtnClose->setDefault(true);


        QMetaObject::connectSlotsByName(TextViewer);
    } // setupUi

    void retranslateUi(QWidget *TextViewer)
    {
        TextViewer->setWindowTitle(QCoreApplication::translate("TextViewer", "TEXT VIEWER", nullptr));
#if QT_CONFIG(tooltip)
        TextViewer->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        FindStr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FindStr->setText(QString());
#if QT_CONFIG(tooltip)
        BtnFind->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFind->setText(QCoreApplication::translate("TextViewer", "Find", nullptr));
#if QT_CONFIG(tooltip)
        BtnReload->setToolTip(QCoreApplication::translate("TextViewer", "Reload", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnReload->setText(QString());
#if QT_CONFIG(tooltip)
        BtnRead->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnRead->setText(QCoreApplication::translate("TextViewer", "&Read...", nullptr));
#if QT_CONFIG(tooltip)
        BtnOpt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOpt->setText(QCoreApplication::translate("TextViewer", "&Option...", nullptr));
#if QT_CONFIG(tooltip)
        BtnClose->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnClose->setText(QCoreApplication::translate("TextViewer", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextViewer: public Ui_TextViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWER_H
