// Question 10: Function Basics
// Write a function that takes two integers as parameters and returns their sum. In the main() function, call this function and display the result.

#include <iostream>
using namespace std;

int addNumbers(int a, int b) 
{
    return a + b;
}

int main() 
{
    int a, b;

    cout << "Enter the first Number: ";
    cin >> a;
    
    cout << "Enter the second Number: ";
    cin >> b;

    int result = addNumbers(a, b);

    cout << "The sum of Numbers is: " << result << endl;

    return 0;
}

// Question 10 (Revised): Function for Difference
// Write a function that takes two integers as parameters and returns their difference (the first number minus the second number). In the main() function, call this function and display the result.


#include <iostream>
using namespace std;

int subNumbers(int a, int b) 
{
    return a - b;
}

int main() 
{
    int a, b;

    cout << "Enter the first Number: ";
    cin >> a;
    
    cout << "Enter the second Number: ";
    cin >> b;

    int result = subNumbers(a, b);

    cout << "The sum of Numbers is: " << result << endl;

    return 0;
}