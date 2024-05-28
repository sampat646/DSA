// Program 1: Count the Number of Digits in a Number
#include <iostream>
#include <cmath>

using namespace std;

/*
This function takes an integer 'n' as input and returns the count of digits in the number.
*/
int countDigits(int n) {
    return (int)(log10(n) + 1);
}

int main() {
    int num = 1234;
    int digitCount = countDigits(num);
    cout << "Number of digits in " << num << " is: " << digitCount << endl;
    return 0;
}
