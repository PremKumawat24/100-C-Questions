// Question 9 (Medium):
// Write a C++ program to find the sum of all prime numbers between two given numbers.

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n <= 0)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int start, end, sum = 0;
    
    cout << "Enter The First/Start Number: ";
    cin >> start;

    cout << "Enter The Second/End Number: ";
    cin >> end;

    for (int i = start; i <= end; i++)
    {
        if(isPrime(i))
        {
            sum += i;
        }
    }

    cout << "The sum of all Prime Numbers between " << start << " and " << end << ": " << sum;

    return 0;
}