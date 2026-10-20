// Ammar Ahmad
// Assignment 4

#include <iostream>     // Brings tools for cin and cout
using namespace std;    // Makes cout and cin easier to write

int main() {            // Opens body of the function
    int number;         // Creates integer variable to store the user's number

    cout << "Enter a number: ";       // Asks the user to enter a number
    cin >> number;                    // User's typed answer stores in variable number

    for (int i = 1; i <= 10; i++) {   // Repeats the multiplication from 1 through 10
        cout << number << " x " << i << " = " << number * i << endl; // Prints the multiplication
    }

    return 0;          // Ends the program
}
