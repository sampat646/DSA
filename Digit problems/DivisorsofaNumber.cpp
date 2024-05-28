// Program 7: Find All Divisors of a Number
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*
This function takes an integer 'n' as input and finds all the divisors of the number.
It returns a vector containing all the divisors.
*/
vector<int> findDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if ((n / i) != i)
                divisors.push_back(n / i);
        }
    }
    return divisors;
}

int main() {
    int num = 6;
    vector<int> divisors = findDivisors(num);
    cout << "Divisors of " << num << " are: ";
    for (int divisor : divisors)
        cout << divisor << " ";
    cout << endl;
    return 0;
}
