/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_2;
    QTextBrowser *UserName;
    QTextBrowser *textBrowser;
    QLabel *UN;
    QPushButton *SignInButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 700);
        MainWindow->setMaximumSize(QSize(2000, 2000));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 230, 300, 80));
        label_2->setMinimumSize(QSize(300, 80));
        label_2->setMaximumSize(QSize(300, 80));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 127);"));
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Sunken);
        label_2->setLineWidth(3);
        label_2->setMidLineWidth(2);
        UserName = new QTextBrowser(centralWidget);
        UserName->setObjectName(QStringLiteral("UserName"));
        UserName->setGeometry(QRect(200, 140, 300, 80));
        UserName->setMinimumSize(QSize(300, 80));
        UserName->setMaximumSize(QSize(300, 80));
        UserName->setFont(font);
        UserName->setAutoFillBackground(false);
        UserName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        UserName->setFrameShape(QFrame::Box);
        UserName->setLineWidth(3);
        UserName->setMidLineWidth(2);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(200, 320, 300, 80));
        textBrowser->setMinimumSize(QSize(300, 80));
        textBrowser->setMaximumSize(QSize(300, 80));
        textBrowser->setFont(font);
        textBrowser->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        textBrowser->setFrameShape(QFrame::Box);
        textBrowser->setLineWidth(3);
        textBrowser->setMidLineWidth(3);
        UN = new QLabel(centralWidget);
        UN->setObjectName(QStringLiteral("UN"));
        UN->setGeometry(QRect(200, 50, 300, 80));
        UN->setMinimumSize(QSize(300, 80));
        UN->setMaximumSize(QSize(300, 80));
        UN->setFont(font);
        UN->setAutoFillBackground(false);
        UN->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 127);\n"
"selection-color: rgb(0, 0, 255);"));
        UN->setFrameShape(QFrame::Box);
        UN->setFrameShadow(QFrame::Sunken);
        UN->setLineWidth(3);
        UN->setMidLineWidth(2);
        SignInButton = new QPushButton(centralWidget);
        SignInButton->setObjectName(QStringLiteral("SignInButton"));
        SignInButton->setGeometry(QRect(200, 420, 300, 80));
        SignInButton->setMinimumSize(QSize(300, 80));
        SignInButton->setMaximumSize(QSize(150, 40));
        SignInButton->setFont(font);
        SignInButton->setAcceptDrops(false);
        SignInButton->setAutoFillBackground(false);
        SignInButton->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 127);\n"
"selection-color: rgb(0, 0, 255);"));
        SignInButton->setCheckable(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 700, 21));
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
        label_2->setText(QApplication::translate("MainWindow", "Password", nullptr));
        UN->setText(QApplication::translate("MainWindow", "Username", nullptr));
        SignInButton->setText(QApplication::translate("MainWindow", "Sign In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
