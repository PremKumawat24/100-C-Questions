// Level 4: Control Flow – Conditional Statements
// Challenge: Write a program that takes an integer input from the user and checks if it is:

// Positive
// Negative
// Zero
// Display an appropriate message for each case.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a Number: ";
    cin >> n;

    if (n > 0)
    {
        cout << n << " is a Positive Number";
    }
    else if (n < 0)
    {
        cout << n << " is a Negative Number";
    }
    else
    {
        cout << n << " is Zero";
    }
    
    return 0;
}