// Q. Write a C++ program to find the factorial of a given number.
// The factorial of a number n is the product of all positive integers less than or equal to n.

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, fac = 1;

    cout << "Enter a Number: ";
    cin >> n;

    while (i <= n)
    {
        fac = fac * i;
        i++;
    }

    cout << "Factorial of "<< n << " is: "<< fac << endl;

    return 0;
}