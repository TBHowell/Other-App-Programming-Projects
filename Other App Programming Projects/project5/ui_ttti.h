/********************************************************************************
** Form generated from reading UI file 'ttti.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTTI_H
#define UI_TTTI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTTI
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *button11;
    QPushButton *button21;
    QPushButton *button31;
    QPushButton *button22;
    QPushButton *button32;
    QPushButton *button12;
    QPushButton *button23;
    QPushButton *button33;
    QPushButton *button13;
    QLabel *bNote;
    QWidget *tab_2;
    QLabel *text33;
    QLabel *text22;
    QLabel *text13;
    QLabel *text32;
    QLabel *text23;
    QLabel *text21;
    QLabel *text12;
    QLabel *text31;
    QLabel *text11;
    QLabel *tNote;
    QLineEdit *textR;
    QLineEdit *textC;
    QLabel *label;
    QLabel *label_2;
    QPushButton *sendText;
    QLabel *invalid;
    QPushButton *reset;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TTTI)
    {
        if (TTTI->objectName().isEmpty())
            TTTI->setObjectName(QString::fromUtf8("TTTI"));
        TTTI->resize(490, 612);
        centralWidget = new QWidget(TTTI);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(40, 20, 391, 471));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        button11 = new QPushButton(tab);
        button11->setObjectName(QString::fromUtf8("button11"));
        button11->setGeometry(QRect(50, 30, 75, 71));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        button11->setFont(font);
        button21 = new QPushButton(tab);
        button21->setObjectName(QString::fromUtf8("button21"));
        button21->setGeometry(QRect(50, 130, 75, 71));
        button21->setFont(font);
        button31 = new QPushButton(tab);
        button31->setObjectName(QString::fromUtf8("button31"));
        button31->setGeometry(QRect(50, 230, 75, 71));
        button31->setFont(font);
        button22 = new QPushButton(tab);
        button22->setObjectName(QString::fromUtf8("button22"));
        button22->setGeometry(QRect(150, 130, 75, 71));
        button22->setFont(font);
        button32 = new QPushButton(tab);
        button32->setObjectName(QString::fromUtf8("button32"));
        button32->setGeometry(QRect(150, 230, 75, 71));
        button32->setFont(font);
        button12 = new QPushButton(tab);
        button12->setObjectName(QString::fromUtf8("button12"));
        button12->setGeometry(QRect(150, 30, 75, 71));
        button12->setFont(font);
        button23 = new QPushButton(tab);
        button23->setObjectName(QString::fromUtf8("button23"));
        button23->setGeometry(QRect(250, 130, 75, 71));
        button23->setFont(font);
        button33 = new QPushButton(tab);
        button33->setObjectName(QString::fromUtf8("button33"));
        button33->setGeometry(QRect(250, 230, 75, 71));
        button33->setFont(font);
        button33->setToolTipDuration(-3);
        button13 = new QPushButton(tab);
        button13->setObjectName(QString::fromUtf8("button13"));
        button13->setGeometry(QRect(250, 30, 75, 71));
        button13->setFont(font);
        bNote = new QLabel(tab);
        bNote->setObjectName(QString::fromUtf8("bNote"));
        bNote->setGeometry(QRect(50, 340, 271, 41));
        bNote->setFont(font);
        bNote->setFrameShape(QFrame::StyledPanel);
        bNote->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        text33 = new QLabel(tab_2);
        text33->setObjectName(QString::fromUtf8("text33"));
        text33->setGeometry(QRect(260, 230, 51, 51));
        text33->setFont(font);
        text33->setAlignment(Qt::AlignCenter);
        text22 = new QLabel(tab_2);
        text22->setObjectName(QString::fromUtf8("text22"));
        text22->setGeometry(QRect(160, 130, 51, 51));
        text22->setFont(font);
        text22->setAlignment(Qt::AlignCenter);
        text13 = new QLabel(tab_2);
        text13->setObjectName(QString::fromUtf8("text13"));
        text13->setGeometry(QRect(260, 30, 51, 51));
        text13->setFont(font);
        text13->setAlignment(Qt::AlignCenter);
        text32 = new QLabel(tab_2);
        text32->setObjectName(QString::fromUtf8("text32"));
        text32->setGeometry(QRect(160, 230, 51, 51));
        text32->setFont(font);
        text32->setAlignment(Qt::AlignCenter);
        text23 = new QLabel(tab_2);
        text23->setObjectName(QString::fromUtf8("text23"));
        text23->setGeometry(QRect(260, 130, 51, 51));
        text23->setFont(font);
        text23->setAlignment(Qt::AlignCenter);
        text21 = new QLabel(tab_2);
        text21->setObjectName(QString::fromUtf8("text21"));
        text21->setGeometry(QRect(60, 130, 51, 51));
        text21->setFont(font);
        text21->setAlignment(Qt::AlignCenter);
        text12 = new QLabel(tab_2);
        text12->setObjectName(QString::fromUtf8("text12"));
        text12->setGeometry(QRect(160, 30, 51, 51));
        text12->setFont(font);
        text12->setAlignment(Qt::AlignCenter);
        text31 = new QLabel(tab_2);
        text31->setObjectName(QString::fromUtf8("text31"));
        text31->setGeometry(QRect(60, 230, 51, 51));
        text31->setFont(font);
        text31->setAlignment(Qt::AlignCenter);
        text11 = new QLabel(tab_2);
        text11->setObjectName(QString::fromUtf8("text11"));
        text11->setGeometry(QRect(60, 30, 51, 51));
        text11->setFont(font);
        text11->setAlignment(Qt::AlignCenter);
        tNote = new QLabel(tab_2);
        tNote->setObjectName(QString::fromUtf8("tNote"));
        tNote->setGeometry(QRect(50, 310, 271, 41));
        tNote->setFont(font);
        tNote->setFrameShape(QFrame::StyledPanel);
        tNote->setAlignment(Qt::AlignCenter);
        textR = new QLineEdit(tab_2);
        textR->setObjectName(QString::fromUtf8("textR"));
        textR->setGeometry(QRect(110, 370, 71, 20));
        textC = new QLineEdit(tab_2);
        textC->setObjectName(QString::fromUtf8("textC"));
        textC->setGeometry(QRect(110, 400, 71, 20));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 370, 51, 16));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 400, 51, 16));
        sendText = new QPushButton(tab_2);
        sendText->setObjectName(QString::fromUtf8("sendText"));
        sendText->setGeometry(QRect(210, 370, 101, 51));
        QFont font1;
        font1.setPointSize(16);
        sendText->setFont(font1);
        invalid = new QLabel(tab_2);
        invalid->setObjectName(QString::fromUtf8("invalid"));
        invalid->setGeometry(QRect(230, 420, 101, 20));
        tabWidget->addTab(tab_2, QString());
        reset = new QPushButton(centralWidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(40, 500, 121, 51));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setWeight(50);
        reset->setFont(font2);
        TTTI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TTTI);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 490, 21));
        TTTI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TTTI);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TTTI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TTTI);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TTTI->setStatusBar(statusBar);

        retranslateUi(TTTI);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TTTI);
    } // setupUi

    void retranslateUi(QMainWindow *TTTI)
    {
        TTTI->setWindowTitle(QApplication::translate("TTTI", "TTTI", nullptr));
        button11->setText(QApplication::translate("TTTI", "-", nullptr));
        button21->setText(QApplication::translate("TTTI", "-", nullptr));
        button31->setText(QApplication::translate("TTTI", "-", nullptr));
        button22->setText(QApplication::translate("TTTI", "-", nullptr));
        button32->setText(QApplication::translate("TTTI", "-", nullptr));
        button12->setText(QApplication::translate("TTTI", "-", nullptr));
        button23->setText(QApplication::translate("TTTI", "-", nullptr));
        button33->setText(QApplication::translate("TTTI", "-", nullptr));
        button13->setText(QApplication::translate("TTTI", "-", nullptr));
        bNote->setText(QApplication::translate("TTTI", "<html><head/><body><p>X's Turn</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("TTTI", "Play with buttons", nullptr));
        text33->setText(QApplication::translate("TTTI", "<html><head/><body><p>-</p></body></html>", nullptr));
        text22->setText(QApplication::translate("TTTI", "<html><head/><body><p>-</p></body></html>", nullptr));
        text13->setText(QApplication::translate("TTTI", "<html><head/><body><p>-</p></body></html>", nullptr));
        text32->setText(QApplication::translate("TTTI", "<html><head/><body><p>-</p></body></html>", nullptr));
        text23->setText(QApplication::translate("TTTI", "<html><head/><body><p>-</p></body></html>", nullptr));
        text21->setText(QApplication::translate("TTTI", "<html><head/><body><p>-</p></body></html>", nullptr));
        text12->setText(QApplication::translate("TTTI", "<html><head/><body><p>-</p></body></html>", nullptr));
        text31->setText(QApplication::translate("TTTI", "<html><head/><body><p>-</p></body></html>", nullptr));
        text11->setText(QApplication::translate("TTTI", "<html><head/><body><p>-</p></body></html>", nullptr));
        tNote->setText(QApplication::translate("TTTI", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">X's Turn</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("TTTI", "Row (1-3):", nullptr));
        label_2->setText(QApplication::translate("TTTI", "Col (1-3):", nullptr));
        sendText->setText(QApplication::translate("TTTI", "Enter", nullptr));
        invalid->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("TTTI", "Play with text", nullptr));
        reset->setText(QApplication::translate("TTTI", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TTTI: public Ui_TTTI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTTI_H
