/*question is A number N is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
Given a number N, the task is to return the list/vector of the factorial numbers smaller than or equal to N.*/

//geeks for geeks question

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:

    vector<long long> factorialNumbers(int N)
    {
        vector<long long> result;
        long long fact = 1;
        int i = 1;
        while (fact <= N)
        {
            result.push_back(fact);
            i++;
            fact *= i;
        }
        return result;
    }
};


int main(int argc, char const *argv[])
{   
   Solution s;
  // input is 120 
   vector<long long> factorials = s.factorialNumbers(120);
   for (long long f : factorials)
   {
       cout << f << " ";
   }
   //expected output is 1 2 6 24 120
   return 0;
}
