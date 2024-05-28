// Number printing in triangle shape

#include <iostream>

using namespace std;

void pattern(int n) {
    cout << "Hello, printing the number pattern!" << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
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
12
123
1234
12345
123456
1234567
*/
