/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEditAdress;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QListWidget *listWidgetAdress;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonUpdate;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonStop;
    QPushButton *pushButtonStart;
    QGridLayout *gridLayout;
    QSlider *horizontalSliderSeg;
    QLCDNumber *lcdNumberSeg;
    QLabel *label;
    Plotter *widgetPlotter;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(516, 484);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_5 = new QGridLayout(centralWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plainTextEditAdress = new QPlainTextEdit(centralWidget);
        plainTextEditAdress->setObjectName(QStringLiteral("plainTextEditAdress"));
        QFont font;
        font.setPointSize(10);
        plainTextEditAdress->setFont(font);

        verticalLayout->addWidget(plainTextEditAdress);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));
        pushButtonConnect->setFont(font);

        horizontalLayout->addWidget(pushButtonConnect);

        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName(QStringLiteral("pushButtonDisconnect"));
        pushButtonDisconnect->setFont(font);

        horizontalLayout->addWidget(pushButtonDisconnect);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(1, 100);

        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        listWidgetAdress = new QListWidget(centralWidget);
        listWidgetAdress->setObjectName(QStringLiteral("listWidgetAdress"));

        gridLayout_3->addWidget(listWidgetAdress, 1, 0, 1, 1);

        gridLayout_3->setRowStretch(0, 10);
        gridLayout_3->setRowStretch(1, 90);

        verticalLayout_3->addLayout(gridLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonUpdate = new QPushButton(centralWidget);
        pushButtonUpdate->setObjectName(QStringLiteral("pushButtonUpdate"));

        horizontalLayout_2->addWidget(pushButtonUpdate);


        verticalLayout_2->addLayout(horizontalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));
        pushButtonStop->setFont(font);

        gridLayout_2->addWidget(pushButtonStop, 1, 1, 1, 1);

        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));
        pushButtonStart->setFont(font);

        gridLayout_2->addWidget(pushButtonStart, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSliderSeg = new QSlider(centralWidget);
        horizontalSliderSeg->setObjectName(QStringLiteral("horizontalSliderSeg"));
        horizontalSliderSeg->setMinimum(1);
        horizontalSliderSeg->setMaximum(10);
        horizontalSliderSeg->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderSeg, 1, 0, 1, 1);

        lcdNumberSeg = new QLCDNumber(centralWidget);
        lcdNumberSeg->setObjectName(QStringLiteral("lcdNumberSeg"));
        lcdNumberSeg->setFrameShadow(QFrame::Raised);
        lcdNumberSeg->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumberSeg, 1, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(9);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);


        verticalLayout_2->addLayout(gridLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3->setStretch(0, 50);

        gridLayout_4->addLayout(verticalLayout_3, 0, 0, 1, 1);

        widgetPlotter = new Plotter(centralWidget);
        widgetPlotter->setObjectName(QStringLiteral("widgetPlotter"));

        gridLayout_4->addWidget(widgetPlotter, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 40);
        gridLayout_4->setColumnStretch(1, 60);

        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 516, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButtonUpdate->setText(QApplication::translate("MainWindow", "Update", nullptr));
        pushButtonStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        pushButtonStart->setText(QApplication::translate("MainWindow", "Start", nullptr));
        label->setText(QApplication::translate("MainWindow", "Timing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
