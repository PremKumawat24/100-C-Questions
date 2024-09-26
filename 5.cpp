// Question 5 (Medium):
// Write a C++ program that takes an integer input from the user and checks if the number is a palindrome.
// A number is a palindrome if it reads the same forward and backward (e.g., 121, 1331, 1221 are palindromes, but 123 is not).

#include <iostream>
using namespace std;

int main()
{
    int n, original, digit, reversed = 0;

    cout << "Enter a Number: ";
    cin >> n;

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    if (original == reversed)
    {
        cout << original << " is a Palindrome." << endl;
    } else {
        cout << original << " is NOT a Palindrome." << endl;
    }

    return 0;
}


// Q. Write a C++ program to check if a string (instead of a number) is a palindrome.
// Q. A palindrome string reads the same forward and backward (e.g., "madam", "racecar", "level").

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool isPalindrome = true;

    cout << "Enter a word: ";
    cin >> str;

    int i = 0;
    int j = str.length() - 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
    {
        cout << str << " is a Palindrome";
    }
    else
    {
        cout << str << " is not a Palindrome";
    }
    
    return 0;
}

// Q. Write a C++ program that reverses the digits of a given number.

#include <iostream>
using namespace std;

int main() {
    int n, digit, reversed = 0;

    cout << "Enter a Number: ";
    cin >> n;
    
    while (n > 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    
    cout << "Reversed Number is: " << reversed ;

    return 0;
}