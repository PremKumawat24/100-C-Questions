// Question 3 (Medium): Write a C++ program that:

// 1. Takes an integer input from the user.
// 2. Prints whether the number is even or odd.

#include<iostream>
using namespace std;

int main() {
    int a;

    cout<<"Enter a Number: ";
    cin >> a;

    if (a%2 == 0) {
        cout << a << " is a even Number."<<endl;
    }
    
    else {
        cout << a << " is a odd Number."<<endl;
    }

    return 0;
}

// Question 3 (Medium): Write a C++ program that:

// 1. Takes an integer input from the user.
// 2. Prints whether the number is positive,negative or zero.

#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter a Number : ";
    cin >> a;

    if (a>0)
    {
        cout << a << " is a positive number." << endl;
    }
    else if (a<0)
    {
        cout << a << " is a negative number." << endl;
    }
    else
    {
        cout << a << " is a zero number." << endl;
    }
    

    return 0;
}