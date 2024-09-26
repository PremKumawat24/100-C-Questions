// Question 8 (Medium):
// Write a C++ program to check whether a number is an Armstrong number or not.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, count = 0, digit, sum = 0, original;

    cout << "Enter a Number: ";
    cin >> N;

    original = N;

    int temp = N;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }

    cout << "The Count of the Number: " << count << endl;

    temp = N;
    while (temp > 0)
    {
        digit = temp % 10;
        sum += pow(digit, count);
        temp = temp / 10;
    }

    if (sum == original)
    {
        cout << original << " is a Armstrong Number.";
    }
    else
    {
        cout << original << " is not a Armstrong Number.";
    }

    return 0;
}