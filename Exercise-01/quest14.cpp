#include <iostream>
#include <cmath>
using namespace std;
int main()

{
float X1, Y1, X2, Y2, P, D;

cout<<"\n Enter the coordinades of  point A";
cout<<"\n X1=";
cin>>X1;
cout<<"\n Y1=";
cin>>Y1;


cout<< "\n Enter the coordinades of point B:";
cout<<"\n X2=";
cin>>X2;
cout<<"\n Y2=";
cin>>Y2;

P= pow (X2-X1,2)+ pow (Y2-Y1,2);
D= sqrt(P);

cout<< "\n The distance between A and B is:" <<D;
}
