// Question 4 (Medium): Write a C++ program that:

// 1. Takes an integer input from the user.
// 2. Prints whether the number is a prime number or not.

#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;

    cout << "Enter a Number: ";
    cin >> n;

    if (n <= 1)
    {
        cout << n << " is NOT a Prime Number." << endl;
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << n << " is a Prime Number." << endl;
    }
    else
    {
        cout << n << " is NOT a Prime Number." << endl;
    }

    return 0;
}

// Question 4 (Similar, Medium): Write a C++ program that:

// 1. Takes two integer inputs from the user.
// 2. Prints the greatest common divisor (GCD) of the two numbers.

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter the First Number: ";
    cin >> a;
    
    cout << "Enter the Second Number: ";
    cin >> b;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    cout<< a;

    return 0;
}