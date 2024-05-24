#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    cout << "printing pattern_1"<<endl;
    //outer loop and rows
    for(int i=1;i<=5;i++){
      
    //inner loop and columns 
     for(int j=1;j<=5;j++){
      cout<<"* ";
    }
    cout<<endl;
    
}
}
output:
printing pattern_1
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 