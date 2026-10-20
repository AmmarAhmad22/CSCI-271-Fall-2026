// Ammar Ahmad
// Assignment 3

#include <iostream>     // Brings tools for cin and cout
using namespace std;    // Makes cout and cin easier to write. Instead of std in each line

int main() {            // Opens body of the function
    int age;            // Creates integer variable to store the user's age
    int isMember;       // Creates integer variable to store if the user is a member

    cout << "Enter your age: ";                   // Asks the user for their age
    cin >> age;                                   // User's typed answer stores in variable age

    cout << "Are you a member? (1 = yes, 0 = no): ";   // Asks the user if they are a member
    cin >> isMember;                                   // User's typed answer stores in variable isMember


    if (age >= 60 || (age >= 18 && isMember == 1)) {   // Checks if the user qualifies for the discount
        cout << "You qualify for the discount.";       // If they qualified it will print that they qualified
    } else {
        cout << "You do not qualify for the discount."; // If they did not qualify it will print that they did not qualify
    }

    return 0;          // Ends the program
}
