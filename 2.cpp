// Level 2: Variables and Data Types

// Write a program that declares variables of different data types, assigns values to them, and then displays each value on the screen. Use the following types:

// int
// float
// char
// string
// For each variable, initialize it with a value of your choice, then print each value with a message indicating its type (e.g., "Integer: 5").

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int a = 5;
    float b = 3.13;
    char c = 'A';
    string st = "Heyy, Gamer!";

    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "String: " << st << endl;

    return 0;
}