#include <iostream>
#include "functions.hpp"
#include <vector>

int main() {
  
    introMessage();

    // Checkpoint for the Game
    bool gameCondition = true;

    // Player Number 1 (odd) or 2 (even)
    int player = 1;

    // Intro Grid
    drawGrids();

    while(player != 10) { 

        userInput(player);
        drawGrids();

        if (validateCondition() && player % 2 != 0) {

            std::cout << "Player 1 wins!\n";
            break;

        }

        if (validateCondition() && player % 2 == 0) {

            std::cout << "Player 2 wins!\n";
            break;

        }

        player++;

    }

    if (player == 10) {

        std::cout << "Draw!\n";

    }

}