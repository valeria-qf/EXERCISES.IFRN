#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int A, B, C, D, E, MA, ME;

  cout<< "\n Digite o  valor de A:";
  cin>>A;
  
  cout<< "\n Digite o valor de B:";
  cin>>B;
  
  cout<< "\n Digite o valor de C:";
  cin>>C;
  
  cout<< "\n Digite o valor de D:";
  cin>>D;
  
  cout<< "\n Digite o valor de E:";
  cin>>E;

  MA=A;
  ME=A;

  if (B>MA)
  {
    MA=B;
  }
  else if (B<ME)
  {
    ME=B;
  }
  if (C>MA)
  {
    MA=C;
  }
  else if (C<ME)
  {
     ME=C;
  }
  if (D>MA)
  {
    MA=D;
  }
  else if (D<ME)
  {
    ME=D;
  }
  if (E>MA)
  {
    MA=E;
  }
  else if (E<ME)
  {
    ME=E;
  }

  cout<<"\n Maior valor:"<<MA;
  cout<< "\n Menor valor:"<<ME;
  
  }
