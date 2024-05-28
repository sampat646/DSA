// Pyramid shape

#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        // Print spaces
        for (int j = 1; j <= 5 - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        // Print spaces
        for (int j = 1; j <= 5 - i; j++) {
            cout << " ";
        }

        cout << endl;
    }
}

/*
Output:
    *
   ***
  *****
 *******
*********
*/
