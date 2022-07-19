#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int A, B, C, D;

    cout<<"\n Enter a value to represent A:";
    cin>>A;
    
    cout<<"\n Enter a value to represent B:";
    cin>>B;
    
    cout<<"\n Enter a value to represent C:";
    cin>>C;
    
    cout<<"\n Enter a value to represent D:";
    cin>>D;
    
    
    if ((A%2==0) || (A%3==0)){
    cout<<"\n A é divisível por 2 ou 3";
  }    
    else {
    cout<<"\n A não é divisível por 2 ou 3";
  }
   
       
  if ((B%2==0) || (B%3==0)){
  cout<<"\n B é divisível por 2 e 3";
  }
  else{
     cout<<"\n B não é divisível por 2 ou 3";
  }  
    
  if ((C%2==0) || (C%3==0)){
     cout<<"\n C é divisível por 2 e 3";
  }
  else{
     cout<<"\n C não é divisível por 2 ou 3";
  }  
    
  if ((D%2==0) || (D%3==0)){
  cout<<"\n D é divisível por 2 ou 3";
  }
  else{
     cout<<"\n D não é divisível por 2 ou 3";
  }  
    
}    
