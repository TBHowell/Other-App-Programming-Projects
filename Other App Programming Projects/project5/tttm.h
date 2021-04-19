#ifndef TTTM_H
#define TTTM_H

#include <QObject>

class TTTM
{
public:
    TTTM();

    void reset();
    void add(int c, int r);
    QString getCurrentBoard();
    QString getTurn();
    bool isGameWon();
    QString winner();

private:
    QString board;
    QChar turn;
    QString won;

};

#endif // TTTM_H
