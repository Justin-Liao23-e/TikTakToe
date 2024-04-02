#include <iostream>
#include <vector>

// Storing User's Input & Grid - Function 3-1
std::vector<char> record = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; 

// Introduction Lines - Function 1
void introMessage() {
    std::cout << "Tic-Tac-Toe 2024\n";
    std::cout << "|----------------------------------------------------------------------------------------------------------------|\n";
    std::cout << "| Step #1 - There are 9 grids, representing numbers from 1 to 9.                                                 |\n";
    std::cout << "| Step #2 - Each player will be either 'O' or 'X'. Each will be prompted to enter the grid number of your choice.|\n";
    std::cout << "| Step #3 - Enjoy the game!                                                                                      |\n";
    std::cout << "|----------------------------------------------------------------------------------------------------------------|\n";
}

// Draw Grid - Function 2
void drawGrids() {
    for (int i = 0; i < 9; i+=3) {
        std::cout << record[i] << "|" << record[i + 1] << "|" << record[i + 2] << "\n";
    }
}

// Input for Modifying Grid - Function 3-2
void userInput(int player) {

    int gridN = 0;

    if (player % 2 != 0) {
            
            std::cout << "Player 1\n";
    
            while (gridN < 1 || gridN > 9) {

                std::cout << "Please enter an valid grid number (1-9): ";
                std::cin >> gridN;

            }
            
            record[gridN - 1] =  'O';
        
    } else {

        std::cout << "Player 2\n";

        while (gridN < 1 || gridN > 9) {

            std::cout << "Please enter an valid grid number (1-9): ";
            std::cin >> gridN;
                
        }

        record[gridN - 1] =  'X';

    }

}

// Check Win - Function 4
bool validateCondition() {

    for (int i1 = 0; i1 < 9; i1+=3) {

        if (record[i1] == record[i1 + 1] && record[i1 + 1] == record[i1 + 2]) { return true; }

    }  

    for (int i2 = 0; i2 < 3; i2++) {

        if (record[i2] == record[i2 + 3] && record[i2 + 3] == record[i2 + 6]) { return true; }

    } 
        
    if (record[0] == record[4] && record[4] == record[8]) { return true; }
    if (record[2] == record[4] && record[4] == record[6]) { return true; }
    return false;

}