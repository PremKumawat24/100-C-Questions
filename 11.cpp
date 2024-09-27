// Question 11: Function for Product
// Write a function that takes two integers as parameters and returns their product. In the main() function, call this function and display the result.

#include <iostream>
using namespace std;

int multiplyNumbers (int a, int b) 
{
    return a * b;
}

int main() 
{
    int a, b, result;

    cout << "Enter a First Number: ";
    cin >> a;

    cout << "Enter a Second Number: ";
    cin >> b;

    result = multiplyNumbers (a, b);

    cout << "The Product of Numbers is: " << result;

    return 0;
}

// Question 11: Function for Division
// Write a function that takes two integers as parameters and returns their quotient (the result of dividing the first number by the second number). In the main() function, call this function and display the result.

#include <iostream>
using namespace std;

int divideNumbers (int a, int b) 
{
    if (a > b)
    {
        return a % b;
    }
    else
    {
        return b % a;
    }
    
}

int main() 
{
    int a, b, result;

    cout << "Enter a First Number: ";
    cin >> a;

    cout << "Enter a Second Number: ";
    cin >> b;

    result = divideNumbers (a, b);

    cout << "The Division of Numbers is: " << result;

    return 0;
}