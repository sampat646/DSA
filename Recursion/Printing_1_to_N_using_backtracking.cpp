#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
void f1(int i,int n){
  if(i<1) return;
  f1(i-1,n);
  cout<<i<<endl;
}

int main()
{
   f1(4,4);
}
//output 1 2 3 4
