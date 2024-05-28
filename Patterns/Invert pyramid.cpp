// Invert pyramid

#include <iostream>

using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }

        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << endl;
    }
}
/*
Output:
*********
 *******
  *****
   ***
    *   
*/
    
