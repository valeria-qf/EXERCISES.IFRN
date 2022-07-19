#include <iostream>
using namespace std;
int main()

{
float SF, S, C, CV, TV;


cout<<"\n Enter the fixed salary:";
cin>>SF;

cout<<"\n Enter the  fixed amount of comission :";
cin>>C;

cout<<"\n Total of cars sales:";
cin>>CV;
 
 cout<<"\n Total amount of sales:";
 cin>>TV;
 
 C=(C*CV);
 TV=(TV*0.05);
 S=(SF+TV+C);
 
 cout<<"\n The final salary is:"<< S; 
 }
 
