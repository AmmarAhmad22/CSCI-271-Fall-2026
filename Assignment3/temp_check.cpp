// Ammar Ahmad
// Assignment 3

#include <iostream>     // Brings tools for cin and cout
using namespace std;    // Makes cout and cin easier to write. Instead of std in each line

int main() {            // Opens body of the function
    int temperature;    // Creates integer variable to store the temperature

    cout << "Enter the temperature (F): ";   // Asks the user for the temperature
    cin >> temperature;                      // User's typed answer stores in variable temperature

    if (temperature < 32) {                  // Checks if the temperature is below 32
        cout << "That's Freezing.";          // If it is below 32 it will print that it is freezing
    } else if (temperature <= 59) {          // Checks if the temperature is 32 to 59
        cout << "That's Cold.";              // If it is between 32-59 it will print that it is cold
    } else if (temperature <= 75) {          // Checks if the temperature is 60 to 75
        cout << "That's Mild.";              // If it is between 60-75 it will print that it is mild
    } else {                                 
        cout << "That's Hot.";               // If none of the other conditions are true it will print that it is hot
    }

    return 0;          // Ends the program
}
