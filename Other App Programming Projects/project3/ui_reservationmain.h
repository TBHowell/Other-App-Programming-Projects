/********************************************************************************
** Form generated from reading UI file 'reservationmain.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATIONMAIN_H
#define UI_RESERVATIONMAIN_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReservationMain
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *EN;
    QPlainTextEdit *rN;
    QLabel *RD;
    QPushButton *NEXT;
    QLabel *SD;
    QLabel *DD;
    QSpinBox *dS;
    QLabel *OC;
    QLabel *OA;
    QLabel *OCH;
    QSpinBox *oA;
    QSpinBox *oC;
    QCheckBox *rP;
    QGroupBox *rS;
    QRadioButton *S;
    QRadioButton *A;
    QGroupBox *bA;
    QRadioButton *sKB;
    QRadioButton *dQB;
    QLabel *oP;
    QLabel *PR;
    QCalendarWidget *selDate;
    QLabel *ocError;
    QWidget *page_2;
    QPushButton *NEXT2;
    QPushButton *BACK;
    QGroupBox *groupBox;
    QLabel *rtR;
    QLabel *rtT;
    QLabel *rtP;
    QLabel *rtRF;
    QLabel *rtTl;
    QLabel *roomFee;
    QLabel *tax;
    QLabel *parkingFee;
    QLabel *resortFee;
    QLabel *total;
    QGroupBox *groupBox_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_8;
    QPlainTextEdit *VisaNum;
    QWidget *tab_2;
    QLabel *label_9;
    QPlainTextEdit *MasterNum;
    QWidget *tab_3;
    QLabel *label_7;
    QPlainTextEdit *DiscovNum;
    QWidget *tab_4;
    QLabel *label_10;
    QPlainTextEdit *AmerNum;
    QLabel *label_6;
    QLabel *cardError;
    QSpinBox *expMonth;
    QSpinBox *expYear;
    QLabel *label_16;
    QWidget *page_3;
    QLabel *label;
    QPushButton *CLOSE;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *Ac;
    QLabel *Cid;
    QLabel *Cc;
    QLabel *Frt;
    QLabel *Ip;
    QLabel *Nnr;
    QLabel *Clf;
    QLabel *Fttl;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ReservationMain)
    {
        if (ReservationMain->objectName().isEmpty())
            ReservationMain->setObjectName(QString::fromUtf8("ReservationMain"));
        ReservationMain->resize(597, 658);
        centralWidget = new QWidget(ReservationMain);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 10, 571, 591));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        EN = new QLabel(page);
        EN->setObjectName(QString::fromUtf8("EN"));
        EN->setGeometry(QRect(40, 70, 171, 21));
        rN = new QPlainTextEdit(page);
        rN->setObjectName(QString::fromUtf8("rN"));
        rN->setGeometry(QRect(210, 70, 171, 21));
        RD = new QLabel(page);
        RD->setObjectName(QString::fromUtf8("RD"));
        RD->setGeometry(QRect(220, 130, 121, 16));
        NEXT = new QPushButton(page);
        NEXT->setObjectName(QString::fromUtf8("NEXT"));
        NEXT->setGeometry(QRect(460, 560, 75, 23));
        SD = new QLabel(page);
        SD->setObjectName(QString::fromUtf8("SD"));
        SD->setGeometry(QRect(220, 150, 91, 21));
        DD = new QLabel(page);
        DD->setObjectName(QString::fromUtf8("DD"));
        DD->setGeometry(QRect(340, 150, 81, 21));
        dS = new QSpinBox(page);
        dS->setObjectName(QString::fromUtf8("dS"));
        dS->setGeometry(QRect(420, 150, 42, 22));
        dS->setMinimum(1);
        dS->setMaximum(7);
        OC = new QLabel(page);
        OC->setObjectName(QString::fromUtf8("OC"));
        OC->setGeometry(QRect(40, 290, 101, 16));
        OA = new QLabel(page);
        OA->setObjectName(QString::fromUtf8("OA"));
        OA->setGeometry(QRect(40, 310, 47, 21));
        OCH = new QLabel(page);
        OCH->setObjectName(QString::fromUtf8("OCH"));
        OCH->setGeometry(QRect(40, 340, 47, 21));
        oA = new QSpinBox(page);
        oA->setObjectName(QString::fromUtf8("oA"));
        oA->setGeometry(QRect(100, 310, 42, 22));
        oA->setMinimum(0);
        oA->setMaximum(99);
        oC = new QSpinBox(page);
        oC->setObjectName(QString::fromUtf8("oC"));
        oC->setGeometry(QRect(100, 340, 42, 22));
        oC->setMinimum(0);
        oC->setMaximum(99);
        rP = new QCheckBox(page);
        rP->setObjectName(QString::fromUtf8("rP"));
        rP->setGeometry(QRect(30, 430, 191, 17));
        rS = new QGroupBox(page);
        rS->setObjectName(QString::fromUtf8("rS"));
        rS->setGeometry(QRect(30, 130, 131, 61));
        S = new QRadioButton(rS);
        S->setObjectName(QString::fromUtf8("S"));
        S->setGeometry(QRect(10, 20, 82, 17));
        S->setChecked(true);
        A = new QRadioButton(rS);
        A->setObjectName(QString::fromUtf8("A"));
        A->setGeometry(QRect(10, 40, 82, 17));
        bA = new QGroupBox(page);
        bA->setObjectName(QString::fromUtf8("bA"));
        bA->setGeometry(QRect(30, 200, 161, 61));
        sKB = new QRadioButton(bA);
        sKB->setObjectName(QString::fromUtf8("sKB"));
        sKB->setGeometry(QRect(10, 20, 131, 17));
        sKB->setChecked(true);
        dQB = new QRadioButton(bA);
        dQB->setObjectName(QString::fromUtf8("dQB"));
        dQB->setGeometry(QRect(10, 40, 141, 17));
        oP = new QLabel(page);
        oP->setObjectName(QString::fromUtf8("oP"));
        oP->setGeometry(QRect(40, 550, 161, 16));
        PR = new QLabel(page);
        PR->setObjectName(QString::fromUtf8("PR"));
        PR->setGeometry(QRect(110, 550, 47, 16));
        selDate = new QCalendarWidget(page);
        selDate->setObjectName(QString::fromUtf8("selDate"));
        selDate->setGeometry(QRect(220, 180, 321, 221));
        selDate->setSelectedDate(QDate(2019, 1, 1));
        selDate->setMinimumDate(QDate(2019, 1, 1));
        ocError = new QLabel(page);
        ocError->setObjectName(QString::fromUtf8("ocError"));
        ocError->setGeometry(QRect(40, 370, 171, 16));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        NEXT2 = new QPushButton(page_2);
        NEXT2->setObjectName(QString::fromUtf8("NEXT2"));
        NEXT2->setGeometry(QRect(460, 560, 75, 23));
        BACK = new QPushButton(page_2);
        BACK->setObjectName(QString::fromUtf8("BACK"));
        BACK->setGeometry(QRect(20, 560, 75, 23));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 40, 511, 171));
        rtR = new QLabel(groupBox);
        rtR->setObjectName(QString::fromUtf8("rtR"));
        rtR->setGeometry(QRect(10, 30, 47, 16));
        rtT = new QLabel(groupBox);
        rtT->setObjectName(QString::fromUtf8("rtT"));
        rtT->setGeometry(QRect(10, 50, 111, 16));
        rtP = new QLabel(groupBox);
        rtP->setObjectName(QString::fromUtf8("rtP"));
        rtP->setGeometry(QRect(10, 70, 71, 21));
        rtRF = new QLabel(groupBox);
        rtRF->setObjectName(QString::fromUtf8("rtRF"));
        rtRF->setGeometry(QRect(10, 90, 141, 21));
        rtTl = new QLabel(groupBox);
        rtTl->setObjectName(QString::fromUtf8("rtTl"));
        rtTl->setGeometry(QRect(10, 130, 141, 21));
        roomFee = new QLabel(groupBox);
        roomFee->setObjectName(QString::fromUtf8("roomFee"));
        roomFee->setGeometry(QRect(170, 30, 221, 16));
        tax = new QLabel(groupBox);
        tax->setObjectName(QString::fromUtf8("tax"));
        tax->setGeometry(QRect(170, 50, 221, 16));
        parkingFee = new QLabel(groupBox);
        parkingFee->setObjectName(QString::fromUtf8("parkingFee"));
        parkingFee->setGeometry(QRect(170, 70, 221, 16));
        resortFee = new QLabel(groupBox);
        resortFee->setObjectName(QString::fromUtf8("resortFee"));
        resortFee->setGeometry(QRect(170, 90, 221, 16));
        total = new QLabel(groupBox);
        total->setObjectName(QString::fromUtf8("total"));
        total->setGeometry(QRect(170, 130, 221, 16));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 230, 511, 181));
        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(30, 30, 461, 81));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 20, 81, 16));
        VisaNum = new QPlainTextEdit(tab);
        VisaNum->setObjectName(QString::fromUtf8("VisaNum"));
        VisaNum->setGeometry(QRect(90, 20, 261, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 20, 81, 16));
        MasterNum = new QPlainTextEdit(tab_2);
        MasterNum->setObjectName(QString::fromUtf8("MasterNum"));
        MasterNum->setGeometry(QRect(90, 20, 261, 21));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 20, 81, 16));
        DiscovNum = new QPlainTextEdit(tab_3);
        DiscovNum->setObjectName(QString::fromUtf8("DiscovNum"));
        DiscovNum->setGeometry(QRect(90, 20, 261, 21));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 20, 81, 16));
        AmerNum = new QPlainTextEdit(tab_4);
        AmerNum->setObjectName(QString::fromUtf8("AmerNum"));
        AmerNum->setGeometry(QRect(90, 20, 261, 21));
        tabWidget->addTab(tab_4, QString());
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 140, 131, 21));
        cardError = new QLabel(groupBox_2);
        cardError->setObjectName(QString::fromUtf8("cardError"));
        cardError->setGeometry(QRect(230, 110, 261, 20));
        expMonth = new QSpinBox(groupBox_2);
        expMonth->setObjectName(QString::fromUtf8("expMonth"));
        expMonth->setGeometry(QRect(120, 140, 42, 22));
        expMonth->setMinimum(1);
        expMonth->setMaximum(12);
        expYear = new QSpinBox(groupBox_2);
        expYear->setObjectName(QString::fromUtf8("expYear"));
        expYear->setGeometry(QRect(170, 140, 51, 22));
        expYear->setMinimum(2019);
        expYear->setMaximum(3019);
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(120, 160, 101, 16));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 80, 121, 16));
        CLOSE = new QPushButton(page_3);
        CLOSE->setObjectName(QString::fromUtf8("CLOSE"));
        CLOSE->setGeometry(QRect(460, 560, 75, 23));
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 110, 71, 16));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 130, 91, 16));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 150, 71, 16));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, 170, 91, 16));
        label_11 = new QLabel(page_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(130, 190, 91, 16));
        label_12 = new QLabel(page_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(130, 210, 91, 16));
        label_13 = new QLabel(page_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(130, 250, 91, 16));
        label_14 = new QLabel(page_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(130, 270, 131, 16));
        label_15 = new QLabel(page_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(140, 320, 281, 41));
        Ac = new QLabel(page_3);
        Ac->setObjectName(QString::fromUtf8("Ac"));
        Ac->setGeometry(QRect(290, 190, 231, 16));
        Cid = new QLabel(page_3);
        Cid->setObjectName(QString::fromUtf8("Cid"));
        Cid->setGeometry(QRect(290, 110, 241, 16));
        Cc = new QLabel(page_3);
        Cc->setObjectName(QString::fromUtf8("Cc"));
        Cc->setGeometry(QRect(290, 210, 191, 16));
        Frt = new QLabel(page_3);
        Frt->setObjectName(QString::fromUtf8("Frt"));
        Frt->setGeometry(QRect(290, 150, 271, 16));
        Ip = new QLabel(page_3);
        Ip->setObjectName(QString::fromUtf8("Ip"));
        Ip->setGeometry(QRect(290, 170, 231, 16));
        Nnr = new QLabel(page_3);
        Nnr->setObjectName(QString::fromUtf8("Nnr"));
        Nnr->setGeometry(QRect(290, 130, 261, 16));
        Clf = new QLabel(page_3);
        Clf->setObjectName(QString::fromUtf8("Clf"));
        Clf->setGeometry(QRect(290, 270, 131, 16));
        Fttl = new QLabel(page_3);
        Fttl->setObjectName(QString::fromUtf8("Fttl"));
        Fttl->setGeometry(QRect(290, 250, 91, 16));
        stackedWidget->addWidget(page_3);
        ReservationMain->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ReservationMain);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 597, 21));
        ReservationMain->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ReservationMain);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ReservationMain->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ReservationMain);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ReservationMain->setStatusBar(statusBar);

        retranslateUi(ReservationMain);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ReservationMain);
    } // setupUi

    void retranslateUi(QMainWindow *ReservationMain)
    {
        ReservationMain->setWindowTitle(QApplication::translate("ReservationMain", "ReservationMain", nullptr));
        EN->setText(QApplication::translate("ReservationMain", "Enter a name for the reservation:", nullptr));
        RD->setText(QApplication::translate("ReservationMain", "Reservation Date(s)", nullptr));
        NEXT->setText(QApplication::translate("ReservationMain", "Next", nullptr));
        SD->setText(QApplication::translate("ReservationMain", "Start Date:", nullptr));
        DD->setText(QApplication::translate("ReservationMain", "Duration (Days)", nullptr));
        OC->setText(QApplication::translate("ReservationMain", "Occupants (4 max)", nullptr));
        OA->setText(QApplication::translate("ReservationMain", "Adults:", nullptr));
        OCH->setText(QApplication::translate("ReservationMain", "Children: ", nullptr));
        rP->setText(QApplication::translate("ReservationMain", "Reserved Parking ($12.75 a night)", nullptr));
        rS->setTitle(QApplication::translate("ReservationMain", "Choose Room Style", nullptr));
        S->setText(QApplication::translate("ReservationMain", "Standard", nullptr));
        A->setText(QApplication::translate("ReservationMain", "Atrium", nullptr));
        bA->setTitle(QApplication::translate("ReservationMain", "Choose Bed Arrangement ", nullptr));
        sKB->setText(QApplication::translate("ReservationMain", "Single King Bed", nullptr));
        dQB->setText(QApplication::translate("ReservationMain", "Double Queen Bed", nullptr));
        oP->setText(QApplication::translate("ReservationMain", "Overall Price:", nullptr));
        PR->setText(QApplication::translate("ReservationMain", "TextLabel", nullptr));
        ocError->setText(QString());
        NEXT2->setText(QApplication::translate("ReservationMain", "Submit", nullptr));
        BACK->setText(QApplication::translate("ReservationMain", "Back", nullptr));
        groupBox->setTitle(QApplication::translate("ReservationMain", "Reservation Total", nullptr));
        rtR->setText(QApplication::translate("ReservationMain", "Room:", nullptr));
        rtT->setText(QApplication::translate("ReservationMain", "Tax (15%): ", nullptr));
        rtP->setText(QApplication::translate("ReservationMain", "Parking:", nullptr));
        rtRF->setText(QApplication::translate("ReservationMain", "Resort Fee ($15 per night):", nullptr));
        rtTl->setText(QApplication::translate("ReservationMain", "Total: ", nullptr));
        roomFee->setText(QApplication::translate("ReservationMain", "Room:", nullptr));
        tax->setText(QApplication::translate("ReservationMain", "Room:", nullptr));
        parkingFee->setText(QApplication::translate("ReservationMain", "Room:", nullptr));
        resortFee->setText(QApplication::translate("ReservationMain", "Room:", nullptr));
        total->setText(QApplication::translate("ReservationMain", "Room:", nullptr));
        groupBox_2->setTitle(QApplication::translate("ReservationMain", "Payment Option", nullptr));
        label_8->setText(QApplication::translate("ReservationMain", "Card Number:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ReservationMain", "VISA", nullptr));
        label_9->setText(QApplication::translate("ReservationMain", "Card Number:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ReservationMain", "MasterCard", nullptr));
        label_7->setText(QApplication::translate("ReservationMain", "Card Number:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ReservationMain", "Discover", nullptr));
        label_10->setText(QApplication::translate("ReservationMain", "Card Number:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ReservationMain", "American Express", nullptr));
        label_6->setText(QApplication::translate("ReservationMain", "Expiration Date:", nullptr));
        cardError->setText(QString());
        label_16->setText(QApplication::translate("ReservationMain", "Month       Year", nullptr));
        label->setText(QApplication::translate("ReservationMain", "Reservation Confirmed!", nullptr));
        CLOSE->setText(QApplication::translate("ReservationMain", "Close", nullptr));
        label_2->setText(QApplication::translate("ReservationMain", "Check in day:", nullptr));
        label_3->setText(QApplication::translate("ReservationMain", "Nights reserved:", nullptr));
        label_4->setText(QApplication::translate("ReservationMain", "Room type:", nullptr));
        label_5->setText(QApplication::translate("ReservationMain", "Parking:", nullptr));
        label_11->setText(QApplication::translate("ReservationMain", "Adults:", nullptr));
        label_12->setText(QApplication::translate("ReservationMain", "Children", nullptr));
        label_13->setText(QApplication::translate("ReservationMain", "Total:", nullptr));
        label_14->setText(QApplication::translate("ReservationMain", "Payed with card ending in:", nullptr));
        label_15->setText(QApplication::translate("ReservationMain", "Thank you so much for doing buisness with us today!", nullptr));
        Ac->setText(QApplication::translate("ReservationMain", "Adults:", nullptr));
        Cid->setText(QApplication::translate("ReservationMain", "Check in day:", nullptr));
        Cc->setText(QApplication::translate("ReservationMain", "Children", nullptr));
        Frt->setText(QApplication::translate("ReservationMain", "Room type:", nullptr));
        Ip->setText(QApplication::translate("ReservationMain", "Parking:", nullptr));
        Nnr->setText(QApplication::translate("ReservationMain", "Nights reserved:", nullptr));
        Clf->setText(QApplication::translate("ReservationMain", "Payed with card ending in:", nullptr));
        Fttl->setText(QApplication::translate("ReservationMain", "Total:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReservationMain: public Ui_ReservationMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATIONMAIN_H
