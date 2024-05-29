// Program 5: Check if a Number is Prime
#include <iostream>

using namespace std;

/*
This function takes an integer 'num' as input and checks if it is a prime number.
It returns true if the number is prime, false otherwise.
*/
bool isPrime(int num) {
    if (num <= 1)
        return false; // 0 and 1 are not prime

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false; // Divisible by a number other than 1 and itself
    }

    return true; // If we reach here, it's prime
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}
//  output 2 is a prime number

