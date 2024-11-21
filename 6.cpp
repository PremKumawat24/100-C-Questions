// Level 6: Loops – Summing Numbers
// Challenge: Write a program that takes a positive integer n as input and calculates the sum of all numbers from 1 to n.

// For example, if n is 5, the program should output 15 (since 1 + 2 + 3 + 4 + 5 = 15).

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Any Positive Number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "The addition of Numbers is: " << sum << endl;

    return 0;
}