// Ammar Ahmad
// Assignment 5


#include <iostream>     // Brings tools for cin and cout
using namespace std;    // Makes cout and cin easier to write

int main() {            // Opens body of the function
    const int SIZE = 10; // Sets the array size to 10
    int data[10] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5}; // Stores the numbers in the array
    int target;         // Creates a variable to store the number to search for
    int foundIndex = -1; // Starts at -1 to mean the number has not been found
    int count = 0;      // Counts how many times the number appears

    cout << "Enter a number to search for: "; // Asks the user for a number
    cin >> target;                           // Stores the user's number

    for (int i = 0; i < SIZE; i++) {         // Goes through each number in the array
        if (data[i] == target) {             // Checks if the number matches the target
            if (foundIndex == -1) {          // Checks if this is the first match
                foundIndex = i;              // Stores the index of the first match
            }
            count++;                         // Adds 1 to the number of occurrences
        }
    }

    if (foundIndex != -1) {                  // Checks if the number was found
        cout << target << " first found at index " << foundIndex << endl; // Prints the first index
        cout << target << " appears " << count << " time(s)" << endl;     // Prints how many times it appears
    } else {
        cout << target << " was not found." << endl; // Prints that the number was not found
    }

    return 0;          // Ends the program
}