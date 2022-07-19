#include <iostream>
using namespace std;
int main()
 {
float V, R;

cout<<"\n Enter a value for the radius:";
  cin>>R;
  
  R=(R*R*R);
  V=(((4*3.14159)*R)/3);
  cout<<"The volume of the sphere is:"<<V;
  }
