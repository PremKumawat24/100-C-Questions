// Question 12: Function for Maximum
// Write a function that takes two integers as parameters and returns the larger of the two numbers. In the main() function, call this function and display the result.

#include <iostream>
using namespace std;

int findMax(int a, int b) 
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main() 
{
    int a, b, result;

    cout << "Enter the First Number: ";
    cin >> a;
    
    cout << "Enter the Second Number: ";
    cin >> b;

    result = findMax(a, b);

    cout << "The greater number is: " << result << endl;

    return 0;
}
