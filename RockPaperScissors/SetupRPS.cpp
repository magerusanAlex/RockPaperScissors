#include "SetupRPS.h"
#include "RockPaperScissors.h"
#include "Counter.h"
#include <iostream>

void Setup::MainMenu() {
    std::cout << R"(
0. Exit
1. Play game
2. Info
)";
        
}

void Setup::Setup() {            // ASA INCEPE MEREU APLICATIA !!!!!!!!!!!!!!!!!
    Setup::MainMenu();
    std::cin >> choice;
}

void Setup::SelectYourChoice() {
    std::cout << "Select your choice: \n" << "1. Rock\n" << "2. Paper\n" << "3. Scissors\n" << "Your choice: ";
    std::cin >> playerChoiceOnRPS;
}

void Setup::RockPaperScissorsAlgorithm() {
    switch (playerChoiceOnRPS) {
        RPS::ComputerChoice(computerChoice); // Calculatorul genereaza un numar random intre 1 si 3 si il plaseaza in variabila computerChoice

    case 1:
        std::cout << "YOU HAVE SELECTED ROCK\n";

        if (computerChoice == 1) {
            std::cout << "ITS DRAW\n";

            if (counter.GetDrawOn())
                counter.IncrementDraw();
        }

        else if (computerChoice == 2) {
            std::cout << "YOU LO$T\n";

            if (counter.GetLoseOn())
                counter.IncrementLose();
        }

        else {
            std::cout << "YOU WWWWWWINNNNN\n";

            if (counter.GetWinOn())
                counter.IncrementWin();
        }

        break;

    case 2:
        std::cout << "You have selected Paper\n";

        if (computerChoice == 1) {
            std::cout << "YOU WWWWWWINNNNN\n";

            if (counter.GetWinOn())
                counter.IncrementWin();
        }

        else if (computerChoice == 2) {
            std::cout << "ITS DRAW\n";

            if (counter.GetDrawOn())
                counter.IncrementDraw();
        }
        else {
            std::cout << "YOU LO$T\n";

            if (counter.GetLoseOn())
                counter.IncrementLose();
        }

        break;

    case 3:
        std::cout << "You have selected Scissors\n";

        if (computerChoice == 1) {
            std::cout << "YOU LO$T\n";

            if (counter.GetLoseOn())
                counter.IncrementLose();
        }

        else if (computerChoice == 2) {
            std::cout << "YOU WWWWWWINNNNN\n";

            if (counter.GetWinOn())
                counter.IncrementWin();
        }

        else {
            std::cout << "ITS DRAW\n";

            if (counter.GetDrawOn())
                counter.IncrementDraw();
        }

        break;
    }
}

void Setup::AskToPlayAgain() {
    std::cout << "\nDO YOU WANT TO PLAY AGAIN ?\n" << "0. NO\n" << "1. YES\n";
    std::cin >> playerChoiceOnPlayAgain;

    if (playerChoiceOnPlayAgain) {
        SelectYourChoice();
        RockPaperScissorsAlgorithm();
    }
    else          // Daca utilizatorul alege sa nu mai joace, jocul ia sfarsit.
        choice = 0;

}

void Setup::MoreInfo() {
    std::cout << "1. The rules of Rock Paper Scissors\n" << "2. Count your games\n" << "3. Back to main menu\n";
    std::cin >> playerChoiceOnMoreInfo;

    switch (playerChoiceOnMoreInfo) {
    case 1:
        std::cout << "The rock is a closed fist; paper is a flat hand with fingersand thumb extendedand the palm facing downward; and scissors is a fist with the indexand middle fingers fully extended toward the opposing player.\nRock wins against scissors; paper wins against rock; and scissors wins against paper.\n";
        break;

    case 2:
        std::cout << "If you want to counter your:\n" << "0. None\n" << "1. Wins\n" << "2. Draws\n" << "3. Loses\n" << "4. All of them\n";
        us userChoice1;
        std::cin >> userChoice1;

        switch (userChoice1) {
        case 0:
            playerChoiceOnMoreInfo = 3;
            break;

        case 1:
            counter.TurnOnWin();
            break;

        case 2:
            counter.TurnOnDraw();
            break;

        case 3:
            counter.TurnOnLose();
            break;

        case 4:
            counter.TurnOnWin();
            counter.TurnOnDraw();
            counter.TurnOnLose();
            break;
        }
        break;

    case 3:
        choice = 3;
        break;
    }
}