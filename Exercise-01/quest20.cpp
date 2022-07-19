#include <iostream>
using namespace std;
int main()

{
float A, B, S, SB, M, D;
cout<<"\n Enter a number to represent A:";
cin>>A;

cout<<"\n Enter a number to represent B:";
cin>>B;

S=(A+B);
cout<<"\n Adittion:" <<S;

if (A>B)

SB=(A-B);

else
SB=(B-A);
cout<< "\n Subtraction:"<<SB;

M=(A*B);
cout<< "\n Multipiplication:"<<M;

D=(A/B);
cout<<"\n Division:"<<D;
}
