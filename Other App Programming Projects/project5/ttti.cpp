#include "ttti.h"
#include "ui_ttti.h"
#include "tttm.h"

TTTI::TTTI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TTTI),
    model()
{
    ui->setupUi(this);
}

TTTI::~TTTI()
{
    delete ui;
}


//Handles updating all of the displays to ensure the proper information is relayed to the user
void TTTI::updateUI()
{
    //copies the current board to shorten function calls
    QString board = model.getCurrentBoard();

    //What to update if the user is using the button input screen
    if (ui->tabWidget->currentIndex() == 0)
    {
        //Sets each oft he corresponding board buttons to the character on the board
        ui->button11->setText(board.at(0));
        ui->button12->setText(board.at(1));
        ui->button13->setText(board.at(2));
        ui->button21->setText(board.at(3));
        ui->button22->setText(board.at(4));
        ui->button23->setText(board.at(5));
        ui->button31->setText(board.at(6));
        ui->button32->setText(board.at(7));
        ui->button33->setText(board.at(8));

        //Checks if the game is still in progress
        if (!model.isGameWon())
        {
            //returns the current player's turn if the game is still going
            ui->bNote->setText(model.getTurn() + "'s Turn");
        }

        else
        {
            //returns the winner of the game
            ui->bNote->setText(model.winner());
        }
    }


    //What to update if the user is using the text input screen
    else if (ui->tabWidget->currentIndex() == 1)
    {
        //Sets each of the board indexes to the proper character to show
        ui->text11->setText(board.at(0));
        ui->text12->setText(board.at(1));
        ui->text13->setText(board.at(2));
        ui->text21->setText(board.at(3));
        ui->text22->setText(board.at(4));
        ui->text23->setText(board.at(5));
        ui->text31->setText(board.at(6));
        ui->text32->setText(board.at(7));
        ui->text33->setText(board.at(8));

        //Checks if the game is still in progress
        if (!model.isGameWon())
        {
            //returns the players turn if still in progress
            ui->tNote->setText(model.getTurn() + "'s Turn");
        }

        else
        {
            //returns the winner character if the game is won
            ui->tNote->setText(model.winner());
        }
    }
}


//Handles reset of the game
void TTTI::resetGame()
{
    model.reset();
    updateUI();
}


//Process the button inputs for placing pieces on the board
void TTTI::on_button11_clicked()
{
    model.add(1, 1);
    updateUI();
}
void TTTI::on_button12_clicked()
{
    model.add(1, 2);
    updateUI();
}
void TTTI::on_button13_clicked()
{
    model.add(1,3);
    updateUI();
}
void TTTI::on_button21_clicked()
{
    model.add(2, 1);
    updateUI();
}
void TTTI::on_button22_clicked()
{
    model.add(2, 2);
    updateUI();
}
void TTTI::on_button23_clicked()
{
    model.add(2, 3);
    updateUI();
}
void TTTI::on_button31_clicked()
{
    model.add(3, 1);
    updateUI();
}
void TTTI::on_button32_clicked()
{
    model.add(3, 2);
    updateUI();
}
void TTTI::on_button33_clicked()
{
    model.add(3, 3);
    updateUI();
}


//Handles if the input method is changed
void TTTI::on_tabWidget_currentChanged(int index)
{
    updateUI();
}


//Handles when the reset button is pressed
void TTTI::on_reset_clicked()
{
    resetGame();
}


//Handles when the user inputs invalid data to ensure it isn't sent the game handler
void TTTI::on_textR_textChanged(const QString &arg1)
{
    QString arg2 = ui->textC->text();

    if (((arg1 == "1") || arg1 == "2" || arg1 == "3") && (arg2 == "1" || arg2 == "2" || arg2 == "3"))
    {
        ui->sendText->setEnabled(true);
        ui->invalid->setText("");
    }

    else
    {
        ui->sendText->setEnabled(false);
        ui->invalid->setText("Invalid Entry");
    }
}
void TTTI::on_textC_textChanged(const QString &arg1)
{
    QString arg2 = ui->textR->text();

    if (((arg1 == "1") || arg1 == "2" || arg1 == "3") && (arg2 == "1" || arg2 == "2" || arg2 == "3"))
    {
        ui->sendText->setEnabled(true);
        ui->invalid->setText("");
    }

    else
    {
        ui->sendText->setEnabled(false);
        ui->invalid->setText("Invalid Entry");
    }
}


//Sends the text input in a usable form for the game model
void TTTI::on_sendText_clicked()
{
    model.add(ui->textR->text().toInt(), ui->textC->text().toInt());
    updateUI();
}
