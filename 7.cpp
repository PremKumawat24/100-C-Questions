// Question 7 (Medium):
// Write a C++ program to find the least common multiple (LCM) of two numbers.
// The LCM of two numbers is the smallest number that is divisible by both numbers.

#include <iostream>
using namespace std;

int main() 
{
    int a, b, temp, mult, LCM;

    cout << "Enter First Number: ";
    cin >> a;
    
    cout << "Enter Second Number: ";
    cin >> b;

    mult = a * b;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    LCM = mult / a;

    cout << "The LCM of given Numbers is: " << LCM << endl;

    return 0;
}