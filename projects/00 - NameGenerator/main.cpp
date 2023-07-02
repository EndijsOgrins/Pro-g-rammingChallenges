// Random name generator C++ program
#include <iostream>
#include <cstdlib>
#include <string>

std::string generateRandomName(); // Function prototype to indicate that the function is defined later in the program

// Make a list of names globally so it can be accessed from anywhere in the program
const std::string firstName[] = {"John", "Jane", "Joe", "Jack", "Jill", "Jim", "Jenny", "Jesse", "Jade", "Jasper", "Jasmine", "Jared", "Jocelyn", "Jude", "Jenna", "Javier", "Jada",
"Jax", "Janelle", "Jagger", "Janel", "Jaxson", "Janelly", "Jaxton", "Janessa", "Jaxen", "Janet", "Jaxson", "Janice", "Jaxxon", "Janie", "Jay", "Janine", "Jayce", "Janis", "Jayceon", "Janiya"};

// Make a list of last names globally so it can be accessed from anywhere in the program
const std::string lastName[] = {
    "Johnson", "Smith", "Williams", "Brown", "Jones", "Miller", "Davis", "Wilson"
};

int main() {
    // Seed the random number generator
    srand(time(0));

    std::cout << "Random Name Generator" << std::endl;
    std::cout << "---------------------" << std::endl;

    // Generate and display a random name in loop
    for (int i = 1; i <= 10; i++) {
        std::string randomName = generateRandomName();
        std::cout << "Random Name " << i << ": " << randomName << std::endl;
    }

    return 0;
}

// Generate a random name from the list of names and return it as a string value
std::string generateRandomName() {

    // Get a random index from the list of first names array using the rand() function and the sizeof() function to get the size of the array   
    int randomFirstIndex = rand() % (sizeof(firstName) / sizeof(firstName[0]));
    // Get a random index from the list of last names array using the rand() function and the sizeof() function to get the size of the array   
    int randomLastIndex = rand() % (sizeof(lastName) / sizeof(lastName[0]));    

    std::string first = firstName[randomFirstIndex];
    std::string last = lastName[randomLastIndex];

    return first + " " + last;
}
