#include <iostream>
using namespace std;
int main()

{
float Y, M, D, AGE;
cout<<"\n Enter an age in Years:";
cin>>Y;

cout<<"\n Enter an age in Months:";
cin>>M;

cout<<"\n Enter an age in Days:";
cin>>D;

Y=(Y*365);
M=(M*30);
AGE= (Y+M+D);
cout<< "\n The age in days only is:" <<AGE;
}
