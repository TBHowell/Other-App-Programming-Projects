#include "tttm.h"

TTTM::TTTM()
{
    //Initializes the board turn and won string/chars
    board = "---------";
    turn = 'X';
    won = "";
}


void TTTM::reset()
{
    //Re-initializes the board turn and won string/chars
    board = "---------";
    turn = 'X';
    won = "";
}

//Adds x's and o's to the board string in order to track the game status
void TTTM::add(int r, int c)
{
    bool couldPlace = false;
    int actualC = c - 1;

    //Checks if the user is trying to place in row 1
    if (r == 1)
    {
        //Checks to ensure the selected column is empty and valid then places the entry there if the spot is empty
        if (c == 1 && board.at(actualC) == '-')
        {
            board.replace(actualC, 1, turn);
            couldPlace = true;
        }

        else if (c == 2 && board.at(actualC) == '-')
        {
            board.replace(actualC, 1, turn);
            couldPlace = true;
        }

        else if (c == 3 && board.at(actualC) == '-')
        {
            board.replace(actualC, 1, turn);
            couldPlace = true;
        }
    }

    //Checks if the user is trying to place in row 2
    else if (r == 2)
    {
        //Checks to ensure the selected column is empty and valid then places the entry there if the spot is empty
        if (c == 1 && board.at(actualC + 3) == '-')
        {
            board.replace(actualC + 3, 1, turn);
            couldPlace = true;
        }

        else if (c == 2 && board.at(actualC + 3) == '-')
        {
            board.replace(actualC + 3, 1, turn);
            couldPlace = true;
        }

        else if (c == 3 && board.at(actualC + 3) == '-')
        {
            board.replace(actualC + 3, 1, turn);
            couldPlace = true;
        }
    }

    //Checks if the user is trying to place in row 3
    else if (r == 3)
    {
        //Checks to ensure the selected column is empty and valid then places the entry there if the spot is empty
        if (c == 1 && board.at(actualC + 6) == '-')
        {
            board.replace(actualC + 6, 1, turn);
            couldPlace = true;
        }

        else if (c == 2 && board.at(actualC + 6) == '-')
        {
            board.replace(actualC + 6, 1, turn);
            couldPlace = true;
        }

        else if (c == 3 && board.at(actualC + 6) == '-')
        {
            board.replace(actualC + 6, 1, turn);
            couldPlace = true;
        }
    }


    //Updates the turn order assuming the function could place the user input
    if (turn == 'X' && couldPlace)
    {
        turn = 'O';
    }

    else if (turn == 'O' && couldPlace)
    {
        turn = 'X';
    }
}

QString TTTM::getTurn()
{
    return turn;
}

QString TTTM::getCurrentBoard()
{
    return board;
}

bool TTTM::isGameWon()
{
    //Checks the horizontals for X win
    if (board.mid(0, 3) == "XXX" || board.mid(3, 3) == "XXX" || board.mid(6, 3) == "XXX")
    {
        won = "X won!";
        return true;
    }

    //Checks the diagnals for X win
    else if ((board.at(0) == 'X' && board.at(4) == 'X' && board.at(8) == 'X') || (board.at(2) == 'X' && board.at(4) == 'X' && board.at(6) == 'X'))
    {
        won = "X won!";
        return true;
    }

    //Checks the verticals for X win
    else if ((board.at(0) == 'X' && board.at(3) == 'X' && board.at(6) == 'X') || (board.at(2) == 'X' && board.at(5) == 'X' && board.at(8) == 'X') || (board.at(1) == 'X' && board.at(4) == 'X' && board.at(7) == 'X'))
    {
        won = "X won!";
        return true;
    }

    //Checks the horizontals for O win
    else if (board.mid(0, 3) == "OOO" || board.mid(3, 3) == "OOO" || board.mid(6, 3) == "OOO")
    {
        won = "O won!";
        return true;
    }

    //Checks the diagnals for O win
    else if ((board.at(0) == 'O' && board.at(4) == 'O' && board.at(8) == 'O') || (board.at(2) == 'O' && board.at(4) == 'O' && board.at(6) == 'O'))
    {
        won = "O won!";
        return true;
    }

    //Checks the verticals for O win
    else if ((board.at(0) == 'O' && board.at(3) == 'O' && board.at(6) == 'O') || (board.at(2) == 'O' && board.at(5) == 'O' && board.at(8) == 'O') || (board.at(1) == 'O' && board.at(4) == 'O' && board.at(7) == 'O'))
    {
        won = "O won!";
        return true;
    }

    //Checks for a tie game
    else if (board.indexOf('-') == -1)
    {
        won = "Cat's Game";
        return true;
    }

    //Otherwise returns false
    else
    {
        return false;
    }

}

QString TTTM::winner()
{
    return won;
}
