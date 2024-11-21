// Level 5: Loops – Basic Counting
// Challenge: Write a program that takes a positive integer, n, as input and prints all numbers from 1 up to n. Use a loop to achieve this, and ensure that n is positive.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter any (Positive) Number: ";
    cin >> n;

    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        
    }
    else
    {
        cout << "Please Enter a Positive Number...!";
    }
    
    return 0;
}