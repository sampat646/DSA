// Program 8: Find the Greatest Common Divisor (GCD) of Two Numbers
#include <iostream>

using namespace std;

/*
This function takes two integers 'n1' and 'n2' as input and finds the greatest common divisor
(GCD) of the two numbers using the Euclidean algorithm.
It returns the GCD.
*/
int gcd(int n1, int n2) {
    while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return n1;
}

int main() {
    int num1 = 4;
    int num2 = 8;
    int greatest_common_divisor = gcd(num1, num2);
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << greatest_common_divisor << endl;
    return 0;
}
