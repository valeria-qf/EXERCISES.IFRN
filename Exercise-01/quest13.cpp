#include <iostream>
using namespace std;
int main()

{
float G1, G2, G3, M;
int P1, P2, P3, P;

cout<<"\n Enter the grade 1:";
cin>>G1;

cout<<"\n Enter the grade 2:";
cin>>G2;

cout<<"\n Enter the grade 3:";
cin>>G3;

P1=2;
P2=3;
P3=5;
P=(P1+P2+P3);
M=((((G1*P1)+G2*P2)+G3*P3)/P);

cout<< "\n The final grade is:" <<M;
}
