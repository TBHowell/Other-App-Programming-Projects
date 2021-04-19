/********************************************************************************
** Form generated from reading UI file 'p1window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_P1WINDOW_H
#define UI_P1WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_P1Window
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QPlainTextEdit *changeText;
    QLabel *targetTextLabel;
    QLabel *label_2;
    QPushButton *backRedButton;
    QPushButton *backBlueButton;
    QPushButton *foreBlueButton;
    QPushButton *foreRedButton;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *textLeftButton;
    QPushButton *textCenterButton;
    QPushButton *textRightButton;
    QPushButton *endButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *P1Window)
    {
        if (P1Window->objectName().isEmpty())
            P1Window->setObjectName(QString::fromUtf8("P1Window"));
        P1Window->resize(612, 295);
        centralWidget = new QWidget(P1Window);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 10, 101, 41));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 121, 31));
        label->setFont(font);
        changeText = new QPlainTextEdit(centralWidget);
        changeText->setObjectName(QString::fromUtf8("changeText"));
        changeText->setGeometry(QRect(160, 10, 321, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        changeText->setFont(font1);
        targetTextLabel = new QLabel(centralWidget);
        targetTextLabel->setObjectName(QString::fromUtf8("targetTextLabel"));
        targetTextLabel->setGeometry(QRect(160, 110, 321, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier"));
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        targetTextLabel->setFont(font2);
        targetTextLabel->setLayoutDirection(Qt::LeftToRight);
        targetTextLabel->setFrameShape(QFrame::Box);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 141, 31));
        label_2->setFont(font);
        backRedButton = new QPushButton(centralWidget);
        backRedButton->setObjectName(QString::fromUtf8("backRedButton"));
        backRedButton->setGeometry(QRect(160, 60, 141, 41));
        backRedButton->setFont(font);
        backBlueButton = new QPushButton(centralWidget);
        backBlueButton->setObjectName(QString::fromUtf8("backBlueButton"));
        backBlueButton->setGeometry(QRect(340, 60, 141, 41));
        backBlueButton->setFont(font);
        foreBlueButton = new QPushButton(centralWidget);
        foreBlueButton->setObjectName(QString::fromUtf8("foreBlueButton"));
        foreBlueButton->setGeometry(QRect(340, 150, 141, 41));
        foreBlueButton->setFont(font);
        foreRedButton = new QPushButton(centralWidget);
        foreRedButton->setObjectName(QString::fromUtf8("foreRedButton"));
        foreRedButton->setGeometry(QRect(160, 150, 141, 41));
        foreRedButton->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 160, 141, 31));
        label_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 210, 141, 31));
        label_4->setFont(font);
        textLeftButton = new QPushButton(centralWidget);
        textLeftButton->setObjectName(QString::fromUtf8("textLeftButton"));
        textLeftButton->setGeometry(QRect(160, 200, 101, 41));
        textLeftButton->setFont(font);
        textCenterButton = new QPushButton(centralWidget);
        textCenterButton->setObjectName(QString::fromUtf8("textCenterButton"));
        textCenterButton->setGeometry(QRect(270, 200, 101, 41));
        textCenterButton->setFont(font);
        textRightButton = new QPushButton(centralWidget);
        textRightButton->setObjectName(QString::fromUtf8("textRightButton"));
        textRightButton->setGeometry(QRect(380, 200, 101, 41));
        textRightButton->setFont(font);
        endButton = new QPushButton(centralWidget);
        endButton->setObjectName(QString::fromUtf8("endButton"));
        endButton->setGeometry(QRect(500, 200, 101, 41));
        endButton->setFont(font);
        P1Window->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(P1Window);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 612, 21));
        P1Window->setMenuBar(menuBar);
        mainToolBar = new QToolBar(P1Window);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        P1Window->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(P1Window);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        P1Window->setStatusBar(statusBar);

        retranslateUi(P1Window);

        QMetaObject::connectSlotsByName(P1Window);
    } // setupUi

    void retranslateUi(QMainWindow *P1Window)
    {
        P1Window->setWindowTitle(QApplication::translate("P1Window", "P1Window", nullptr));
        pushButton->setText(QApplication::translate("P1Window", "Update", nullptr));
        label->setText(QApplication::translate("P1Window", "Enter Message:", nullptr));
        targetTextLabel->setText(QApplication::translate("P1Window", "Yo!", nullptr));
        label_2->setText(QApplication::translate("P1Window", "Background Color:", nullptr));
        backRedButton->setText(QApplication::translate("P1Window", "Red", nullptr));
        backBlueButton->setText(QApplication::translate("P1Window", "Blue", nullptr));
        foreBlueButton->setText(QApplication::translate("P1Window", "Blue", nullptr));
        foreRedButton->setText(QApplication::translate("P1Window", "Red", nullptr));
        label_3->setText(QApplication::translate("P1Window", "Foreground Color:", nullptr));
        label_4->setText(QApplication::translate("P1Window", "Text Alignment:", nullptr));
        textLeftButton->setText(QApplication::translate("P1Window", "Left", nullptr));
        textCenterButton->setText(QApplication::translate("P1Window", "Center", nullptr));
        textRightButton->setText(QApplication::translate("P1Window", "Right", nullptr));
        endButton->setText(QApplication::translate("P1Window", "End ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class P1Window: public Ui_P1Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_P1WINDOW_H
