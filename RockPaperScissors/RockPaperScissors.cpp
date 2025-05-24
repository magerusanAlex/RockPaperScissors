#include "RockPaperScissors.h"
#include "SetupRPS.h"
#include <iostream>

void RPS::PlayGame() {
    Setup::Setup();

    while (!gameOver) {
        switch (choice) {
        case 0: // Cazul ENDGAME
            gameOver = true;
            break;

        case 1: // Cazul PLAYGAME
            Setup::SelectYourChoice(); // Prima aparitie playerChoiceOnRockPaperScissors
            Setup::RockPaperScissorsAlgorithm(); // A doua aparitie a lui playerChoiceOnRockPaperScissors
            Setup::AskToPlayAgain(); // Prima aparitie  
            break;

        case 2: // Cazul GETINFO
            Setup::MoreInfo();

            if (choice == 3) { // Iesim din MoreInfo(); prin back to main menu
                Setup::Setup();
            }
            break;

        default:
            gameOver = true;
        }
    }
}

inline us RPS::RandomNumber() {
    return rand() % 3 + 1;
}

void RPS::ComputerChoice(us& choice) {
    choice = RandomNumber();

    switch (choice) {
    case 1:
        std::cout << "YOURE OPPONENT HAS CHOSEN ROCK ";
        break;
    case 2:
        std::cout << "YOURE OPPONENT HAS CHOSEN PAPER ";
        break;
    case 3:
        std::cout << "YOURE OPPONENT HAS CHOSEN SCISSORS ";
        break;
    }
}

