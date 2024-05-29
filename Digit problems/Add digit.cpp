// Program 6: LeetCode Problem - Add Digits
#include <iostream>

using namespace std;

/*
This function takes an integer 'n' as input and applies the "Add Digits" logic repeatedly
until the sum of digits becomes a single-digit number.
It returns the final single-digit sum.
*/
int addDigits(int n) {
    int sum;
    do {
        sum = 0;
        while (n > 0) {
            int lastDigit = n % 10;
            sum += lastDigit;
            n /= 10;
        }
        if (sum >= 10)
            n = sum;
    } while (sum >= 10);

    return sum;
}

int main() {
    int num = 199;
    int result = addDigits(num);
    cout << "The sum of digits for " << num << " is: " << result << endl;
    return 0;

    
}
// output 1
