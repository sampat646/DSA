#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Let's start by initializing a vector
    vector<int> v;
    for (int i = 0; i < 5; i++) {
        v.push_back(i);  // Adding elements to the vector
    }

    // Time to print the vector
    cout << "The vector contains: ";
    for (auto element : v) {
        cout << element << " ";
    }
    cout << endl;

    // Getting the size of the vector
    cout << "The size of the vector is: " << v.size() << endl;

    // Inserting an element at the beginning
    auto it = v.begin();
    v.insert(it, 10);
    cout << "After inserting 10 at the beginning, the vector is: ";
    for (auto element : v) {
        cout << element << " ";
    }
    cout << endl;

    // Removing the first element
    v.erase(v.begin());
    cout << "After removing the first element, the vector is: ";
    for (auto element : v) {
        cout << element << " ";
    }
    cout << endl;

    // Removing the last element
    v.pop_back();
    cout << "After removing the last element, the vector is: ";
    for (auto element : v) {
        cout << element << " ";
    }
    cout << endl;

    // Accessing the first and last elements
    cout << "The first element is: " << v.front() << endl;
    cout << "The last element is: " << v.back() << endl;

    // Clearing the vector
    v.clear();
    cout << "After clearing the vector, ";
    if (v.empty()) {
        cout << "the vector is empty." << endl;
    } else {
        cout << "the vector is not empty." << endl;
    }

    return 0;
}
