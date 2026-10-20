// Ammar Ahmad
// Assignment 4

#include <iostream>     // Brings tools for cin and cout
using namespace std;    // Makes cout and cin easier to write

int main() {            // Opens body of the function
    int choice;         // Creates integer variable to store the user's choice

    do {                // Starts the do while loop and runs it
        cout << "Enter a menu choice (1, 2, or 3): ";   // Asks the user for a menu choice
        cin >> choice;                                  // User's typed answer stores in variable choice

        if (choice != 1 && choice != 2 && choice != 3) { // Checks if the choice is not 1, 2, or 3
            cout << "Invalid choice, try again." << endl; // Tells the user their choice was invalid
        }

    } while (choice != 1 && choice != 2 && choice != 3); // Repeats until the user enters 1, 2, or 3

    cout << "You selected option " << choice << "." << endl; // Prints the option the user selected

    return 0;          // Ends the program
}
