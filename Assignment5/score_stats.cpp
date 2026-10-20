// Ammar Ahmad
// Assignment 5


#include <iostream>     // Brings tools for cin and cout
using namespace std;    // Makes cout and cin easier to write

int main() {            // Opens body of the function
    const int SIZE = 5; // Sets the array size to 5
    int scores[SIZE];   // Creates an array to store the 5 scores
    int sum = 0;        // Creates a variable to store the sum

    for (int i = 0; i < SIZE; i++) {                // Repeats 5 times to get the scores
        cout << "Enter score " << i + 1 << ": ";    // Asks the user to enter a score
        cin >> scores[i];                           // Stores the score in the array
    }

    int highest = scores[0];    // Starts the highest score at the first score
    int lowest = scores[0];     // Starts the lowest score at the first score

    for (int i = 0; i < SIZE; i++) {    // Goes through each score in the array
        sum += scores[i];               // Adds the score to the sum

        if (scores[i] > highest) {      // Checks if the score is higher than the current highest
            highest = scores[i];        // Updates the highest score
        }

        if (scores[i] < lowest) {       // Checks if the score is lower than the current lowest
            lowest = scores[i];         // Updates the lowest score
        }
    }

    double average = static_cast<double>(sum) / SIZE; // Calculates the average as a decimal

    cout << "Scores: ";                         // Prints a label for the scores
    for (int i = 0; i < SIZE; i++) {            // Goes through each score in the array
        cout << scores[i] << " ";               // Prints each score on the same line
    }
    cout << endl;                               // Moves to the next line

    cout << "Sum: " << sum << endl;             // Prints the sum
    cout << "Average: " << average << endl;     // Prints the average
    cout << "Highest: " << highest << endl;     // Prints the highest score
    cout << "Lowest: " << lowest << endl;       // Prints the lowest score

    return 0;          // Ends the program
}