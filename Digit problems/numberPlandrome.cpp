// Program 3: Check if a Number is a Palindrome
#include <iostream>

using namespace std;

/*
This function takes an integer 'n' as input and checks if it is a palindrome number.
It returns true if the number is a palindrome, false otherwise.
*/
bool isPalindrome(int n) {
    int dupi = n;
    int reverse = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        n = n / 10;
        reverse = (reverse * 10) + lastDigit;
    }
    return (dupi == reverse);
}

int main() {
    int userNum;
    cout << "Enter a number: ";
    cin >> userNum;
    if (isPalindrome(userNum))
        cout << userNum << " is a palindrome number." << endl;
    else
        cout << userNum << " is not a palindrome number." << endl;
    return 0;
}
// output 121 is a plandrome number.
