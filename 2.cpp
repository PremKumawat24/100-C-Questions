// Question 2 (Easy): Write a C++ program that takes two integer inputs from the user and prints their sum.

#include <iostream>
using namespace std;

int main() {
    int a,b,sum;

    cout<<"Enter 1st number: ";
    cin>>a;
    
    cout<<"Enter 2nd number: ";
    cin>>b;

    sum = a + b;

    cout<<"Addition of these two number's is: "<< sum << endl;

    return 0;
}

// Question 2 (Similar, Easy): Write a C++ program that:

// 1. Takes two floating-point numbers (e.g., 3.14, 5.67) as input from the user.
// 2. Prints their sum.

#include <iostream>
using namespace std;

int main() {
    float a, b, sum;

    cout<<"Enter 1st Number: ";
    cin>>a;

    
    cout<<"Enter 2nd Number: ";
    cin>>b;

    sum = a + b;

    cout<<"The addition of these two float's is: "<<sum<<endl;

    return 0;
}