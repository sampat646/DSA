#include <iostream>

using namespace std;

void pattern(int n) {
    cout << "Hello, printing the number pattern!" << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
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
1
22
333
4444
55555
666666
7777777
*/
