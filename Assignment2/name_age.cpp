#include <iostream>     // Brings tools for cin and cout
using namespace std;    // Makes cout and cin easier to write. Instead of std in each line

int main() {            // Opens body of the function
    string name;        // Creates string variable to store the user's name
    int age;            // Creates integer variable to store the user's age

    cout << "Enter your name: ";   // Asks the user for their name
    cin >> name;                   // User's typed answer stores in variable name

    cout << "Enter your age: ";    // Asks the user for their age
    cin >> age;                    // User's typed answer stores in variable age

    // Prints the final greeting using both values
    cout << "Hello, I am " << name << "! I am " << age << " years old.";

    return 0;          // Ends the program
}
