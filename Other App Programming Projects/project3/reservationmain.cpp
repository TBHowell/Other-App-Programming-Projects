#include "reservationmain.h"
#include "ui_reservationmain.h"
#include <stdlib.h>
#include <stdio.h>
#include <string>

static double ppn;
static double p;
ReservationMain::ReservationMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReservationMain)
{
    ui->setupUi(this);
    ppn = 284.00;
    Adults = 1;
    Children = 0;
    CardType = 0;
    cardLast = "";


    calculatePrice();

    ui->oA->setValue(1);
    ui->NEXT2->setEnabled(false);
}



/* Handles the calculations for updatating the total price of the reservation before tax and fees */
void ReservationMain::calculatePrice()
{
    //Checks if the atrium (A) room type is selected
    if (ui->A->isChecked())
    {
        //Checks if the double queen bed (dQB) style has been chosen and sets the price per night accordingly
        if (ui->dQB->isChecked())
            ppn = 325.00;

        //Otherwise checks if the single king bed (sKB) style has been chosen and sets the price per night accordingly
        else if (ui->sKB->isChecked())
            ppn = 350.00;
    }

    //Otherwise checks if the standard (S) room type is selected
    else if (ui->S->isChecked())
    {
        //Checks if the double queen bed (dQB) style has been chosen and sets the price per night accordingly
        if (ui->dQB->isChecked())
            ppn = 284.00;

        //Otherwise checks if the single king bed (sKB) style has been chosen and sets the price per night accordingly
        else if (ui->sKB->isChecked())
            ppn = 290.00;
    }

    //Then checks if parking has been requested and adds the parking fee
    if (ui->rP->isChecked())
    {
        ppn += 12.75;
    }


    //Updates the displayed value on page 1 of the UI for the current price of the room based on the number of nights chosen and room style and type
    p = ui->dS->value() * ppn;
    QString pString = QString::number(p);
    ui->PR->setText("$" + pString);
}



/* Handles processing the additional costs and displaying them on page 2 of the UI */
void ReservationMain::createFeeList()
{
    //Initializes the fees
    int roomFee = 0;
    int resortFee = 15 * ui->dS->value();
    double parkFee = 0;
    double total;

    //Checks if the atrium (A) room type is selected
    if (ui->A->isChecked())
    {
        //Checks if the double queen bed (dQB) style has been chosen and sets the price room fee accordingly
        if (ui->dQB->isChecked())
            roomFee = 325.00;

        //Otherwise checks if the single king bed (sKB) style has been chosen and sets the price room fee accordingly
        else if (ui->sKB->isChecked())
            roomFee = 350.00;
    }

    //Otherwise checks if the standard (S) room type is selected
    else if (ui->S->isChecked())
    {
        //Checks if the double queen bed (dQB) style has been chosen and sets the price room fee accordingly
        if (ui->dQB->isChecked())
            roomFee = 284.00;

        //Otherwise checks if the single king bed (sKB) style has been chosen and sets the room fee accordingly
        else if (ui->sKB->isChecked())
            roomFee = 290.00;
    }

    //Then checks if parking has been requested and adds the parking fee
    if (ui->rP->isChecked())
    {
        parkFee = 12.75;
    }

    //Finalizes the roomFee and then figures out the tax
    roomFee *= ui->dS->value();
    double tax = roomFee * .15;
    total = tax + parkFee + roomFee + resortFee;

    //Creates string versions of the fees for display
    QString totalS = QString::number(total);
    QString taxS = QString::number(tax);
    QString parkFeeS = QString::number(parkFee);
    QString resortFeeS = QString::number(resortFee);
    QString roomFeeS = QString::number(roomFee);

    //Sets the displayed values for each cost
    ui->total->setText("$" + totalS);
    ui->tax->setText("$" + taxS);
    ui->resortFee->setText("$" + resortFeeS);
    ui->roomFee->setText("$" + roomFeeS);
    ui->parkingFee->setText("$" + parkFeeS);

}




/* Handles checking if a valid card number has been input */
void ReservationMain::checkValid(QString check)
{
    //This removes dashes and spaces from the string to be more forgiving for user input
    int length = check.length();
    for(int i = 0; i < length; i++)
    {
        if (check[i] == " " || check[i] == "-")
        {
            check.remove(i, 1);
            length--;
            i--;
        }
    }


    //Checks if a VISA card has been correctly entered
    if (CardType == 0)
    {
        if(check.length() == 16)
        {
            if (check.indexOf("4") == 0)
            {
                ui->NEXT2->setEnabled(true);
                ui->cardError->setText("");
                cardLast = check.mid(12,4);
                return;
            }

            else
            {
                ui->cardError->setText("Visa cards must start with a 4");
            }
        }

        else
        {
            ui->cardError->setText("Visa cards must be 16 numbers long");
        }
    }

    //Checks if a MasterCard has been correctly entered
    else if (CardType == 1)
    {
        if(check.length() == 16)
        {
            if (check.indexOf("5") == 0)
            {
                ui->NEXT2->setEnabled(true);
                ui->cardError->setText("");
                cardLast = check.mid(12, 4);
                return;
            }

            else
            {
                ui->cardError->setText("MasterCards must start with a 5");
            }
        }

        else
        {
            ui->cardError->setText("MasterCards must be 16 numbers long");
        }
    }

    //Checks if a Discover card has been correctly entered
    else if (CardType == 2)
    {
        if(check.length() == 16)
        {
            if (check.indexOf("6") == 0)
            {
                ui->NEXT2->setEnabled(true);
                ui->cardError->setText("");
                cardLast = check.mid(12, 4);
                return;
            }

            else
            {
                ui->cardError->setText("Discover cards must start with a 6");
            }
        }

        else
        {
            ui->cardError->setText("Discover cards must be 16 numbers long");
        }
    }

    //Checks if an American Express Card has been correctly entered
    else if (CardType == 3)
    {
        if(check.length() == 15)
        {
            if (check.indexOf("3") == 0)
            {
                ui->NEXT2->setEnabled(true);
                ui->cardError->setText("");
                cardLast = check.mid(11, 4);
                return;
            }

            else
            {
                ui->cardError->setText("American Express cards must start with a 3");
            }
        }

        else
        {
            ui->cardError->setText("American Express cards must be 15 numbers long");
        }
    }

    //If the card is invalid this will make sure the submit button is deactivated
    ui->NEXT2->setEnabled(false);
}




/* Handles finalizing the last page to tell the user the proper information about their reservation */
void ReservationMain::processFinal()
{
    //Sets the proper information to be displayed
    ui->Fttl->setText(ui->total->text());
    ui->Ac->setText(QString::number(ui->oA->value()));
    ui->Cc->setText(QString::number(ui->oC->value()));
    ui->Nnr->setText(QString::number(ui->dS->value()));
    ui->Cid->setText(ui->selDate->selectedDate().toString());
    ui->Clf->setText(cardLast);


    //Checks if the atrium (A) room type is selected
    if (ui->A->isChecked())
    {
        //Checks if the double queen bed (dQB) style has been chosen and sets the room type accordingly
        if (ui->dQB->isChecked())
            ui->Frt->setText("Atrium Double Queen Bed Room");

        //Otherwise checks if the single king bed (sKB) style has been chosen and sets the room type accordingly
        else if (ui->sKB->isChecked())
            ui->Frt->setText("Atrium King Single Bed Room");
    }

    //Otherwise checks if the standard (S) room type is selected
    else if (ui->S->isChecked())
    {
        //Checks if the double queen bed (dQB) style has been chosen and sets the room type accordingly
        if (ui->dQB->isChecked())
            ui->Frt->setText("Standard Double Queen Bed Room");

        //Otherwise checks if the single king bed (sKB) style has been chosen and sets the room typeaccordingly
        else if (ui->sKB->isChecked())
            ui->Frt->setText("Standard Single King Bed Room");
    }

    //Then checks if parking has been requested and displays the chosen parking status
    if (ui->rP->isChecked())
    {
        ui->Ip->setText("Reserved Parking");
    }

    else
    {
        ui->Ip->setText("Unreserved Parking");
    }
}

ReservationMain::~ReservationMain()
{
    delete ui;
}



/* Handles when the user changes page of ui or closes the application */
void ReservationMain::on_NEXT_clicked()
{
    createFeeList();
    ui->stackedWidget->setCurrentIndex(1);
}

void ReservationMain::on_NEXT2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    processFinal();
}

void ReservationMain::on_BACK_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void ReservationMain::on_CLOSE_clicked()
{
    QApplication::quit();
}



/* Handles when the user changes a reservation paramter that would affect the price of their reservation */
void ReservationMain::on_rP_clicked()
{
    calculatePrice();
}

void ReservationMain::on_sKB_clicked()
{
    calculatePrice();
}

void ReservationMain::on_S_clicked()
{
    calculatePrice();
}

void ReservationMain::on_A_clicked()
{
    calculatePrice();
}

void ReservationMain::on_dQB_clicked()
{
    calculatePrice();
}

void ReservationMain::on_dS_valueChanged(int arg1)
{
    calculatePrice();
}



/* Handles when the users changes the number of adults or children on the reservation */
void ReservationMain::on_oA_valueChanged(int arg1)
{
    //Adjusts the number of adults on record for the room
    Adults = ui->oA->value();

    //Makes sure incorrect values can't be used
    if(arg1 == 0)
    {
        ui->ocError->setText("Must have at least one adult");
        ui->NEXT->setEnabled(false);
    }

    else if (Adults + Children > 4)
    {
        ui->ocError->setText("Can't have more than four people");
        ui->NEXT->setEnabled(false);
    }

    else
    {
        ui->ocError->setText("");
        ui->NEXT->setEnabled(true);
    }
}

void ReservationMain::on_oC_valueChanged(int arg1)
{
    //Adjusts the number of children on record for the room
    Children = ui->oA->value();

    //Makes sure incorrect values can't be used
    if (Adults + arg1 > 4)
    {
        ui->ocError->setText("Can't have more than four people");
        ui->NEXT->setEnabled(false);
    }

    else
    {
        ui->ocError->setText("");
        ui->NEXT->setEnabled(true);
    }
}


//This keeps track of the type of card the user is going to use
void ReservationMain::on_tabWidget_currentChanged(int index)
{
    CardType = index;

    //This will check what index is currently set and makes it so the user can immediately start entering there number into the text box without clicking on the text box first
    if (index == 0)
    {
        ui->VisaNum->grabKeyboard();
    }
    else if (index == 1)
    {
        ui->MasterNum->grabKeyboard();
    }
    else if (index == 2)
    {
        ui->DiscovNum->grabKeyboard();
    }
    else if (index == 3)
    {
        ui->AmerNum->grabKeyboard();
    }
}

/* Handles when the user enters a new card number for any given card type */
void ReservationMain::on_VisaNum_textChanged()
{
    QString test = ui->VisaNum->toPlainText();
    checkValid(test);
}

void ReservationMain::on_AmerNum_textChanged()
{
    QString test = ui->AmerNum->toPlainText();
    checkValid(test);
}

void ReservationMain::on_DiscovNum_textChanged()
{
    QString test = ui->DiscovNum->toPlainText();
    checkValid(test);
}

void ReservationMain::on_MasterNum_textChanged()
{
    QString test = ui->MasterNum->toPlainText();
    checkValid(test);
}
