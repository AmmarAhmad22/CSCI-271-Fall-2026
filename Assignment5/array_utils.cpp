// Ammar Ahmad
// Assignment 5


#include <iostream>     // Brings tools for cin and cout
using namespace std;    // Makes cout and cin easier to write

void printForward(const int arr[], int size) {  // Prints the array from first to last
    for (int i = 0; i < size; i++) {            // Goes through each element
        cout << arr[i] << " ";                  // Prints each element
    }
    cout << endl;                               // Moves to the next line
}

void printReverse(const int arr[], int size) {  // Prints the array from last to first
    for (int i = size - 1; i >= 0; i--) {       // Goes through the array backward
        cout << arr[i] << " ";                  // Prints each element
    }
    cout << endl;                               // Moves to the next line
}

int countAbove(const int arr[], int size, int limit) { // Counts values above the limit
    int count = 0;                                      // Starts the count at 0

    for (int i = 0; i < size; i++) {                    // Goes through each element
        if (arr[i] > limit) {                           // Checks if the value is above the limit
            count++;                                    // Adds 1 to the count
        }
    }

    return count; // Returns the total count
}

int main() {            // Opens body of the function
    const int SIZE = 6; // Sets the array size to 6
    int values[SIZE] = {14, 3, 27, 9, 50, 21}; // Stores the numbers in the array
    int limit;          // Creates a variable to store the user's limit

    cout << "Forward: ";                 // Prints a label for the forward array
    printForward(values, SIZE);          // Prints the array in order

    cout << "Reverse: ";                 // Prints a label for the reverse array
    printReverse(values, SIZE);          // Prints the array backward

    cout << "Count values above: ";      // Asks the user for a limit
    cin >> limit;                        // Stores the user's limit

    cout << "Count: " << countAbove(values, SIZE, limit) << endl; // Prints the count

    return 0;          // Ends the program
}