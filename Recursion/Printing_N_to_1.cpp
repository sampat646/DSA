#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
void f2(int i,int n){
  if(i>n) return;
  f2(i+1,n);
  cout<<i<<endl;
}

int main()
{
   
    f2(1,4);
}
//output 4 3 2 1
