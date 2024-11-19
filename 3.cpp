// Level 3: Operators
// Challenge: Write a C++ program that takes two integers as input, performs the following operations, and displays the results:

// Addition
// Subtraction
// Multiplication
// Division
// Modulus (remainder)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b;
    float add, sub, mul, mod;
    double div;

    cout << "Enter the first Number: ";
    cin >> a;

    cout << "Enter the Second Number: ";
    cin >> b;

    add = a + b;
    sub = a - b;
    mul = a * b;

    cout << "The Addision of Numbers is: " << add << endl;
    cout << "The Substraction of Numbers is: " << sub << endl;
    cout << "The Multiplication of Numbers is: " << mul << endl;

    if (b != 0) {
        cout << "The division of Numbers is: " << (static_cast<float>(a) / b) << endl;
        cout << "The remainder is: " << fmod(a, b) << endl;
    } else {
        cout << "The Division by 0 is undefined. And hence remainder" << endl;
    }
    
    return 0;
}