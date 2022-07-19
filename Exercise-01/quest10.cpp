#include <iostream>
using namespace std;
int main()
{
float S, NS, R;

cout<<"\n Enter a salary:";
cin>>S;

cout<< "Enter a % for the readjustment:";
cin>>R;
R=((R*S)/100);
NS=(R+S);
cout<< "\n The new salary is:"<< NS;
}
