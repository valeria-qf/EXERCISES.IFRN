#include <iostream>
using namespace std;
int main()

{
float D, I, CC, CF, IF1, IF2;

cout<<"\n Enter the facture cost of the car:";
cin>>CF;
 
 D=(0.28);
 I=(0.45);
 IF1= (CF*D);
 IF2= (CF*I);
 
 CC=(CF+IF1+IF2);
 
 cout<<"\n The final cost of the car is:" <<CC;

}
