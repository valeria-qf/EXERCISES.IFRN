#include <iostream>
using namespace std;
int main()
{

float TE, VB, VN, VV;
int PVB, PVN, PVV;

cout<<"\n Total of voters:";
cin>>TE;

cout<<"\n White votes:";
cin>>VB;

cout<<"\n Null votes:";
cin>>VN;

cout<<"\n Valid votes:";
cin>>VV;

TE= (VB+VN+VV);
PVB=(100*VB/TE);
PVN=(100*VN/TE);
PVV=(100*VV/TE);

cout<<"\n % of White votes:"<< PVB;
cout<<"\n % of Null votes:"<< PVN;
cout<<"\n % de Valid votes:"<< PVV;

}
