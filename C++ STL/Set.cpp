#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    // initialize set
    for (auto i = 0; i < 5; i++)
    {
        s.insert(i);
    }
    // print set
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    // output 0 1 2 3 4

    // find() check if element is present in set
    if (s.find(3) != s.end())
    {
        cout << "3 is present in set" << endl;
    }
    else
    {
        cout << "3 is not present in set" << endl;
    }
    // output 3 is present in set

    // erase() remove element from set
    s.erase(3);
    cout << "After erasing 3 from set" << endl;
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    // output 0 1 2 4

    s.clear();
    cout << "After clearing set" << endl;
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    // output is nothing as set is empty

    return 0;
}
