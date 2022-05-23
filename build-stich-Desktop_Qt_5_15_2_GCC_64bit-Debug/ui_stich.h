/********************************************************************************
** Form generated from reading UI file 'stich.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STICH_H
#define UI_STICH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stich
{
public:
    QWidget *centralwidget;
    QVBoxLayout *_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_show_origin_img;
    QPushButton *btn_show_stitch_img;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *stich)
    {
        if (stich->objectName().isEmpty())
            stich->setObjectName(QString::fromUtf8("stich"));
        stich->resize(1093, 618);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stich->sizePolicy().hasHeightForWidth());
        stich->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(stich);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        _2 = new QVBoxLayout(centralwidget);
        _2->setObjectName(QString::fromUtf8("_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_show_origin_img = new QPushButton(centralwidget);
        btn_show_origin_img->setObjectName(QString::fromUtf8("btn_show_origin_img"));

        horizontalLayout->addWidget(btn_show_origin_img);

        btn_show_stitch_img = new QPushButton(centralwidget);
        btn_show_stitch_img->setObjectName(QString::fromUtf8("btn_show_stitch_img"));

        horizontalLayout->addWidget(btn_show_stitch_img);


        _2->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1073, 516));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        _2->addWidget(scrollArea);

        stich->setCentralWidget(centralwidget);
        menubar = new QMenuBar(stich);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1093, 22));
        stich->setMenuBar(menubar);
        statusbar = new QStatusBar(stich);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        stich->setStatusBar(statusbar);

        retranslateUi(stich);

        QMetaObject::connectSlotsByName(stich);
    } // setupUi

    void retranslateUi(QMainWindow *stich)
    {
        stich->setWindowTitle(QCoreApplication::translate("stich", "stich", nullptr));
        btn_show_origin_img->setText(QCoreApplication::translate("stich", "\346\230\276\347\244\272\345\216\237\345\233\276", nullptr));
        btn_show_stitch_img->setText(QCoreApplication::translate("stich", "\346\230\276\347\244\272\346\213\274\346\216\245\346\225\210\346\236\234", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class stich: public Ui_stich {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STICH_H
