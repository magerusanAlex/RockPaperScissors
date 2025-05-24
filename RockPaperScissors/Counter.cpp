#include "Counter.h"
#include <iostream>

    void Counter::PrintWinInfo() {
        if (this->win < 0)
            this->win = 0;

        if (this->win == 1)
            std::cout << "YOU HAVE " << win << " WIN\n";
        else
            std::cout << "YOU HAVE " << win << " WINS\n";
    }

    void Counter::PrintDrawInfo() {
        if (this->draw < 0)
            this->draw = 0;

        if (this->draw == 1)
            std::cout << "YOU HAVE " << draw << " DRAW\n";
        else
            std::cout << "YOU HAVE " << draw << " DRAWS\n";
    }

    void Counter::PrintLoseInfo() {
        if (this->lose < 0)
            this->lose = 0;

        if (this->lose == 1)
            std::cout << "YOU HAVE " << lose << " LOSE\n";
        else
            std::cout << "YOU HAVE " << lose << " LOSES\n";
    }

    void Counter::TurnOnWin() {
        this->winOn = true;
    }

    void Counter::TurnOnDraw() {
        this->drawOn = true;
    }

    void Counter::TurnOnLose() {
        this->loseOn = true;
    }

    void Counter::IncrementWin() {
        this->win = ++win;
    }

    void Counter::IncrementDraw() {
        this->draw = ++draw;
    }

    void Counter::IncrementLose() {
        this->lose = ++lose;
    }

    bool Counter::GetWinOn() {
        return winOn;
    }

    bool Counter::GetDrawOn() {
        return drawOn;
    }

    bool Counter::GetLoseOn() {
        return loseOn;
    }