#include <iostream>
using namespace std;
int main()
{

int S=0;

 for(int n =1; n<=500; n++) 
 {
     // If the number is even (n%2==0) the progam will sum all even numbers from 1 to 500

  if (n%2==0)
  S+=n;
 }
 
 cout<<"Result:"<<S<<endl;

}