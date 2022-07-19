#include <iostream>
using namespace std;
int main()

{
int n;

// type any number (n) and do the multiplication table from 0 to 10"

cout<<"Enter a number:"<<endl;
cin>>n;

 for (int i=0; i<=10;i++)
 {
     //result of the multiplication table of "n"

 cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
 }

}