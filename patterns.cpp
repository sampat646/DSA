# Patterns in cpp

Normal pattern :

```cpp
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
```

Triangle shape

```cpp
#include <iostream>
using namespace std;
//Compiler version g++ 6.3.0
void pattern(int n){ 
 cout << "Hello, printing the number pattern!";   
 for(int i = 1; i<=n ;i++){      
 for(int j=1;j<=i;j++){        
 cout<< *;      
 }      
 cout<<endl;   
  }
}
int main(){   
 pattern(7);
 }
 output:
Hello, printing the number pattern!
*
**
***
****
*****
******
********  

```

Invert Triangle shape

```cpp
#include <iostream>using namespace std;
//Compiler version g++ 6.3.0
void pattern(int n){  
cout << "Hello, printing the number pattern!";    
for(int i = 1; i<=n ;i++){     
 for(int j=n;j>=i;j--){        
 cout<< "*";    
   }      
  cout<<endl;   
  }
}
int main(){  
  pattern(7);
  }
  
  output:
  Hello, printing the number pattern!
  ********
  ******
  *****
  ****
  ***
  **
  *

```

Number printing in triangle shape

```cpp
#include <iostream>
using namespace std;
//Compiler version g++ 6.3.0
void pattern(int n){ 
 cout << "Hello, printing the number pattern!";   
 for(int i = 1; i<=n ;i++){      
 for(int j=1;j<=i;j++){        
 cout<< j;      
 }      
 cout<<endl;   
  }
}
int main(){   
 pattern(7);
 }
 output:
Hello, printing the number pattern!
1
12
123
1234
12345
123456
1234567
```

```cpp
#include <iostream>
using namespace std;
//Compiler version g++ 6.3.0
void pattern(int n){ 
 cout << "Hello, printing the number pattern!";   
 for(int i = 1; i<=n ;i++){      
 for(int j=1;j<=i;j++){        
 cout<< i;      
 }      
 cout<<endl;   
  }
}
int main(){   
 pattern(7);
 }
 output:
Hello, printing the number pattern!
1
22
333
4444
55555
666666
7777777

```

Pyramid shape 

```cpp
#include <iostream>using namespace std;
int main() {  
 for(int i=1; i<=5; i++) 
 {        
 //space        
 for(int j=1; j<=5-i; j++) 
 {            
 cout << " ";        
 }        
 //star        
 for(int j=1; j<=2*i-1; j++) 
 {            
 cout << "*";        
 }        
 //space        
 for(int j=1; j<=5-i; j++) 
 {            
 cout << " ";        
 }        
 cout << endl;   
  }
  
  }
  output:
    *    
   ***     
  *****   
 ******* 
*********
Process finished.
```
invert pyramid 

#include <iostream>using namespace std;
int main() {  
int n=5;    
for(int i=0; i<n; i++) {        
//space        
for(int j=0; j<i; j++) {            
cout << " ";        
}        
//star        
for(int j=0; j<2*n-(2*i+1 ); j++) {            
cout << "*";        
}        
//space        
for(int j=0; j<i; j++) {            
cout << " ";        
}        
cout << endl;    
} 
}

********* 
 *******   
  *****     
   ***       
    *    
