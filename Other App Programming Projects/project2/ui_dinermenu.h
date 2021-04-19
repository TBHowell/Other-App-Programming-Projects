/********************************************************************************
** Form generated from reading UI file 'dinermenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DINERMENU_H
#define UI_DINERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dinermenu
{
public:
    QWidget *centralWidget;
    QLabel *title;
    QLabel *menu;
    QPushButton *soup;
    QPushButton *chef;
    QPushButton *fish;
    QPushButton *exit;
    QLabel *imagePlace;
    QLabel *itemInfo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *dinermenu)
    {
        if (dinermenu->objectName().isEmpty())
            dinermenu->setObjectName(QString::fromUtf8("dinermenu"));
        dinermenu->resize(479, 645);
        centralWidget = new QWidget(dinermenu);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        title = new QLabel(centralWidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(50, -10, 451, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Harlow Solid Italic"));
        font.setPointSize(26);
        font.setItalic(true);
        title->setFont(font);
        menu = new QLabel(centralWidget);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(30, 50, 101, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Harlow Solid Italic"));
        font1.setPointSize(22);
        font1.setItalic(true);
        menu->setFont(font1);
        soup = new QPushButton(centralWidget);
        soup->setObjectName(QString::fromUtf8("soup"));
        soup->setGeometry(QRect(20, 120, 111, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Gill Sans MT"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        soup->setFont(font2);
        chef = new QPushButton(centralWidget);
        chef->setObjectName(QString::fromUtf8("chef"));
        chef->setGeometry(QRect(180, 120, 111, 41));
        chef->setFont(font2);
        fish = new QPushButton(centralWidget);
        fish->setObjectName(QString::fromUtf8("fish"));
        fish->setGeometry(QRect(340, 120, 111, 41));
        fish->setFont(font2);
        exit = new QPushButton(centralWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(340, 550, 111, 41));
        exit->setFont(font2);
        imagePlace = new QLabel(centralWidget);
        imagePlace->setObjectName(QString::fromUtf8("imagePlace"));
        imagePlace->setGeometry(QRect(20, 180, 431, 291));
        imagePlace->setFrameShape(QFrame::StyledPanel);
        itemInfo = new QLabel(centralWidget);
        itemInfo->setObjectName(QString::fromUtf8("itemInfo"));
        itemInfo->setGeometry(QRect(20, 480, 431, 61));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(238, 238, 178, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(246, 246, 216, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 119, 89, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 159, 119, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(225, 225, 169, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
        itemInfo->setPalette(palette);
        itemInfo->setFont(font2);
        itemInfo->setAutoFillBackground(true);
        itemInfo->setFrameShape(QFrame::StyledPanel);
        dinermenu->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(dinermenu);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 479, 21));
        dinermenu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(dinermenu);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        dinermenu->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(dinermenu);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        dinermenu->setStatusBar(statusBar);

        retranslateUi(dinermenu);

        QMetaObject::connectSlotsByName(dinermenu);
    } // setupUi

    void retranslateUi(QMainWindow *dinermenu)
    {
        dinermenu->setWindowTitle(QApplication::translate("dinermenu", "dinermenu", nullptr));
        title->setText(QApplication::translate("dinermenu", "Hometown Comforts Diner", nullptr));
        menu->setText(QApplication::translate("dinermenu", "Menu", nullptr));
        soup->setText(QApplication::translate("dinermenu", "Today's Soup", nullptr));
        chef->setText(QApplication::translate("dinermenu", "Chef's Special", nullptr));
        fish->setText(QApplication::translate("dinermenu", "Daily Fish", nullptr));
        exit->setText(QApplication::translate("dinermenu", "Exit", nullptr));
        imagePlace->setText(QString());
        itemInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dinermenu: public Ui_dinermenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DINERMENU_H
