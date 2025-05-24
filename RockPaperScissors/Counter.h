#pragma once

typedef unsigned short us;

class Counter {
public:
    void PrintWinInfo();

    void PrintDrawInfo();

    void PrintLoseInfo();

    void TurnOnWin();

    void TurnOnDraw();

    void TurnOnLose();

    void IncrementWin();
   
    void IncrementDraw();

    void IncrementLose();

    bool GetWinOn();

    bool GetDrawOn();

    bool GetLoseOn();

private:
    bool winOn = false;
    bool drawOn = false;
    bool loseOn = false;
    us win = 0;
    us draw = 0;
    us lose = 0;
};