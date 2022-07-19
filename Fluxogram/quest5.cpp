#include <iostream> 
#include <cmath>
using namespace std;
int main(){

{float A, B, C, delta, bhaskara;

cout<<"\n A:";
cin>>A;

cout<<"\n B:";
cin>>B;

cout<<"\n C:";
cin>>C;

delta=((B*B)-(4*A*C));
cout<<"delta="<< delta;

if (delta<0) {

  cout<< "\n Não há solução real";
}
else

  {
  
  if (delta==0)
  
    {
      bhaskara= ((-B)/(2*A));
      cout<<"\n A raiz é:"<< bhaskara;
    }
    
  if (delta>0)
  
     {
      bhaskara= ((-B)+ sqrt(delta))/(2*A);
      cout<<"\n A primeira raiz é:"<< bhaskara;
      bhaskara= ((-B) - sqrt(delta))/(2*A);  
      cout<<"\n A segunda raiz é:"<< bhaskara;  
     }
   }   
 }






























}
