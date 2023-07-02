// Heads or Tails game
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0)); // Seed the random number generator

    char playAgain = 'y';

    while (playAgain != 'n')
    {
        // Prompt the user to choose heads or tails
        std::cout << "Welcome to the Heads or Tails game!\n";
        std::cout << "Choose Heads (1) or Tails (2): ";

        // Read the user's input
        int choice;
        std::cin >> choice;

        // Generate a random number between 1 and 2
        int randNum = rand() % 2 + 1;

        // Display the result
        if (randNum == choice) {
            std::cout << "Congratulations! You won!\n";
        }
        else {
            std::cout << "Sorry! Better luck next time!\n";
        }

        // Ask the user if they want to play again
        std::cout << "Play again? (y/n): ";
        std::cin >> playAgain;
    }

    std::cout << "Thanks for playing!\n";

    return 0;
}
