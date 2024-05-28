// Normal pattern

#include <iostream>

using namespace std;

int main()
{
    cout << "Printing pattern_1" << endl;

    // Outer loop for rows
    for (int i = 1; i <= 5; i++) {
        // Inner loop for columns
        for (int j = 1; j <= 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
Output:
Printing pattern_1
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
