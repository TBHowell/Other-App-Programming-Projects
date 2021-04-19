/********************************************************************************
** Form generated from reading UI file 'painter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTER_H
#define UI_PAINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Painter
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *ourCanvas;
    QGroupBox *groupBox_2;
    QPushButton *red;
    QPushButton *blue;
    QPushButton *green;
    QPushButton *purple;
    QGroupBox *groupBox_3;
    QPushButton *width1;
    QPushButton *width2;
    QPushButton *width3;
    QPushButton *width4;
    QGroupBox *groupBox;
    QPushButton *face1;
    QPushButton *hello1;
    QPushButton *face2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Painter)
    {
        if (Painter->objectName().isEmpty())
            Painter->setObjectName(QString::fromUtf8("Painter"));
        Painter->resize(1047, 673);
        centralWidget = new QWidget(Painter);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 811, 591));
        ourCanvas = new QVBoxLayout(verticalLayoutWidget);
        ourCanvas->setSpacing(6);
        ourCanvas->setContentsMargins(11, 11, 11, 11);
        ourCanvas->setObjectName(QString::fromUtf8("ourCanvas"));
        ourCanvas->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(830, 10, 211, 91));
        red = new QPushButton(groupBox_2);
        red->setObjectName(QString::fromUtf8("red"));
        red->setGeometry(QRect(30, 30, 31, 31));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        red->setPalette(palette);
        blue = new QPushButton(groupBox_2);
        blue->setObjectName(QString::fromUtf8("blue"));
        blue->setGeometry(QRect(70, 30, 31, 31));
        green = new QPushButton(groupBox_2);
        green->setObjectName(QString::fromUtf8("green"));
        green->setGeometry(QRect(110, 30, 31, 31));
        purple = new QPushButton(groupBox_2);
        purple->setObjectName(QString::fromUtf8("purple"));
        purple->setGeometry(QRect(150, 30, 31, 31));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(830, 110, 211, 101));
        width1 = new QPushButton(groupBox_3);
        width1->setObjectName(QString::fromUtf8("width1"));
        width1->setGeometry(QRect(20, 50, 21, 21));
        width2 = new QPushButton(groupBox_3);
        width2->setObjectName(QString::fromUtf8("width2"));
        width2->setGeometry(QRect(50, 40, 31, 31));
        width3 = new QPushButton(groupBox_3);
        width3->setObjectName(QString::fromUtf8("width3"));
        width3->setGeometry(QRect(90, 30, 41, 41));
        width4 = new QPushButton(groupBox_3);
        width4->setObjectName(QString::fromUtf8("width4"));
        width4->setGeometry(QRect(140, 20, 51, 51));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(830, 220, 211, 161));
        face1 = new QPushButton(groupBox);
        face1->setObjectName(QString::fromUtf8("face1"));
        face1->setGeometry(QRect(40, 10, 131, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Papyrus"));
        font.setPointSize(14);
        face1->setFont(font);
        hello1 = new QPushButton(groupBox);
        hello1->setObjectName(QString::fromUtf8("hello1"));
        hello1->setGeometry(QRect(40, 60, 131, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("OCR A Extended"));
        font1.setPointSize(14);
        hello1->setFont(font1);
        face2 = new QPushButton(groupBox);
        face2->setObjectName(QString::fromUtf8("face2"));
        face2->setGeometry(QRect(40, 110, 131, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(14);
        face2->setFont(font2);
        Painter->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Painter);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1047, 21));
        Painter->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Painter);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Painter->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Painter);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Painter->setStatusBar(statusBar);

        retranslateUi(Painter);

        QMetaObject::connectSlotsByName(Painter);
    } // setupUi

    void retranslateUi(QMainWindow *Painter)
    {
        Painter->setWindowTitle(QApplication::translate("Painter", "Painter", nullptr));
        groupBox_2->setTitle(QString());
        red->setText(QString());
        blue->setText(QString());
        green->setText(QString());
        purple->setText(QString());
        groupBox_3->setTitle(QString());
        width1->setText(QString());
        width2->setText(QString());
        width3->setText(QString());
        width4->setText(QString());
        groupBox->setTitle(QString());
        face1->setText(QApplication::translate("Painter", "o_0", nullptr));
        hello1->setText(QApplication::translate("Painter", "'~'", nullptr));
        face2->setText(QApplication::translate("Painter", "^.^", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Painter: public Ui_Painter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTER_H
