#include <iostream>
using namespace std;
int main()
{
int A, B, C, S;

cout<<"\n Enter a value to represent A:";
cin>>A;

cout<<"\n Enter a value to represent B:";
cin>>B;

cout<<"\n Enter a value to represent C:";
cin>>C;

S=(A+B+C);

if (S>=100)
{
cout<<"\n The result is:"<<S;
}

else
{
cout<< "\n The result is less than 100";
}
}


