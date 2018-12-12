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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditEndereco;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QTextBrowser *textBrowser;
    QLabel *label;
    QSlider *horizontalSliderMIN;
    QLCDNumber *lcdNumberMIN;
    QLabel *label_2;
    QSlider *horizontalSliderMAX;
    QLCDNumber *lcdNumberMAX;
    QLabel *label_3;
    QSlider *horizontalSliderTimings;
    QLCDNumber *lcdNumberTimings;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(463, 346);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEditEndereco = new QLineEdit(centralWidget);
        lineEditEndereco->setObjectName(QStringLiteral("lineEditEndereco"));

        verticalLayout->addWidget(lineEditEndereco);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));

        horizontalLayout_2->addWidget(pushButtonConnect);

        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName(QStringLiteral("pushButtonDisconnect"));

        horizontalLayout_2->addWidget(pushButtonDisconnect);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 3);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 3, 8, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 2, 1, 1);

        horizontalSliderMIN = new QSlider(centralWidget);
        horizontalSliderMIN->setObjectName(QStringLiteral("horizontalSliderMIN"));
        horizontalSliderMIN->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderMIN, 2, 0, 1, 2);

        lcdNumberMIN = new QLCDNumber(centralWidget);
        lcdNumberMIN->setObjectName(QStringLiteral("lcdNumberMIN"));

        gridLayout->addWidget(lcdNumberMIN, 2, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 2, 1, 1);

        horizontalSliderMAX = new QSlider(centralWidget);
        horizontalSliderMAX->setObjectName(QStringLiteral("horizontalSliderMAX"));
        horizontalSliderMAX->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderMAX, 4, 0, 1, 2);

        lcdNumberMAX = new QLCDNumber(centralWidget);
        lcdNumberMAX->setObjectName(QStringLiteral("lcdNumberMAX"));

        gridLayout->addWidget(lcdNumberMAX, 4, 2, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        horizontalSliderTimings = new QSlider(centralWidget);
        horizontalSliderTimings->setObjectName(QStringLiteral("horizontalSliderTimings"));
        horizontalSliderTimings->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderTimings, 5, 1, 1, 1);

        lcdNumberTimings = new QLCDNumber(centralWidget);
        lcdNumberTimings->setObjectName(QStringLiteral("lcdNumberTimings"));
        lcdNumberTimings->setFrameShape(QFrame::NoFrame);
        lcdNumberTimings->setProperty("intValue", QVariant(1));

        gridLayout->addWidget(lcdNumberTimings, 5, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));

        horizontalLayout->addWidget(pushButtonStart);

        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));

        horizontalLayout->addWidget(pushButtonStop);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 463, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderMIN, SIGNAL(valueChanged(int)), lcdNumberMIN, SLOT(display(int)));
        QObject::connect(horizontalSliderMAX, SIGNAL(valueChanged(int)), lcdNumberMAX, SLOT(display(int)));
        QObject::connect(horizontalSliderTimings, SIGNAL(valueChanged(int)), lcdNumberTimings, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", nullptr));
        label->setText(QApplication::translate("MainWindow", "Min", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Max", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Timing(s)", nullptr));
        pushButtonStart->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
