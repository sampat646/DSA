// Invert Triangle shape

#include <iostream>

using namespace std;

void pattern(int n) {
    cout << "Hello, printing the number pattern!" << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    pattern(7);
}

/*
Output:
Hello, printing the number pattern!
*******
******
*****
****
***
**
*
*/
