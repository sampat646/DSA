// Program 2: Reverse a Number
#include <iostream>

using namespace std;

/*
This function takes an integer 'n' as input and reverses the digits of the number.
It returns the reversed number.
*/
int reverseNumber(int n) {
    int reverse = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        n = n / 10;
        reverse = (reverse * 10) + lastDigit;
    }
    return reverse;
}

int main() {
    int num = 1227;
    int reversedNum = reverseNumber(num);
    cout << "Reverse of " << num << " is: " << reversedNum << endl;
    return 0;
}
// output Reverse of 1227 is 7221
