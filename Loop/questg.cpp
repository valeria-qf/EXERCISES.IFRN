// powers of base 3 raised to exponents from 1 to 15

#include <iostream>
using namespace std;
int main()
{
// "b" is the base, "e" the exponent and "r" the result

 int b=3, e=0, r;

while (e<=15)
  {
    if(e==0)
    {
      r=1;
    }

    if(e==1)
    {
      r=b;
    }

  cout<<b<<"^"<<e<<"="<<r<<endl;
  r*=b;
  e=e+1;
  }
 
}     

