#include <iostream>
#include <cmath>
using namespace std;
int main()
{

// "b" is the base, "e" the exponent and "r" the result

 int b=1, e=0, r=1, cont;

cout<<"Enter a base:"<<endl;
cin>>b;

cout<<"Enter a exponent:"<<endl;
cin>>e;

r=1;
cont=0;

while(cont!= e)
{
r*=b;
cont+=1;
}
cout<<b<<"^"<<e<<"="<<r<<endl;
       
}   