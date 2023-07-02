// Random name generator C++ program
#include <iostream>

int main()
{   
    // Ask for the user for y or n random name generation
    std::cout << "Would you like to generate a random name? (y/n): ";
    char answer;
    std::cin >> answer;
    // If the user answers y, generate a random name
    if (answer == 'y')
    {
        std::cout << "Generating a random name...\n";
    }

    std::cout << "Test1!\n";
}