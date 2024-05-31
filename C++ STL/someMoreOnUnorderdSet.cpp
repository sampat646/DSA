#include <iostream>
#include <unordered_set>
using namespace std;
int main(int argc, char const *argv[])
{

    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    // cbegin() returns a constant iterator pointing to the first element in the unordered_set.
    // cend() returns a constant iterator pointing to one past the last element in the unordered_set.
    for (auto it = s.cbegin(); it != s.cend(); it++)
    {
        cout << *it << endl;
    }
    // bucket_size() returns a constant iterator pointing to the first element in the unordered_set.
    // bucket_count() returns a constant iterator pointing to one past the last element in the unordered_set.
    cout << "bucket size" << s.bucket_size(1) << endl;
    // output is 1
    cout << "bucket count" << s.bucket_count() << endl;
    // output is 13. why it is 13? because the default value of the bucket count is 13

    // emplace() returns a constant iterator pointing to the first element in the unordered_set.
    auto result = s.emplace(3);
    cout << "Element inserted: " << *(result.first) << endl;
    cout << "Did insertion take place? " << (result.second ? "Yes" : "No") << endl;

    // max_size() returns the maximum number of elements that the unordered_set can hold.
    cout << "Maximum number of elements: " << s.max_size() << endl;
    // output is 4294967295. why it is 4294967295? because the default value of the maximum number of elements is 4294967295.

    // maxbucketcount returns the maximum number of buckets that the unordered_set can hold.
    cout << "Maximum number of buckets: " << s.max_bucket_count() << endl;

    // output is 4294967295. why it is 4294967295? because the default value of the maximum number of buckets is 4294967295.
    return 0;
}
