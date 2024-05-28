// Program 4: Check if a Number is an Armstrong Number
#include <iostream>
#include <cmath>

using namespace std;

/*
This function takes an integer 'n' as input and checks if it is an Armstrong number.
It returns true if the number is an Armstrong number, false otherwise.
*/
bool isArmstrong(int n) {
    int dupi = n;
    int sum = 0;
    int numDigits = floor(log10(n) + 1);

    while (n > 0) {
        int lastDigit = n % 10;
        n = n / 10;
        sum += pow(lastDigit, numDigits);
    }

    return (dupi == sum);
}

int main() {
    int num = 92727;
    if (isArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
    return 0;
}
