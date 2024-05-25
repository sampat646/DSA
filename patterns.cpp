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


// Triangle shape

#include <iostream>

using namespace std;

void pattern(int n) {
    cout << "Hello, printing the number pattern!" << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
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
*
**
***
****
*****
******
*******
*/

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