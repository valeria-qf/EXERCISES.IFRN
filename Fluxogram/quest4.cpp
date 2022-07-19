#include <iostream>
using namespace std;
int main()

{

float N1, N2, N3, N4, N5, MD1, MD2;

cout<<"\n Enter grade 1:";
cin>>N1;

cout<<"\n Enter grade 2:";
cin>>N2;

cout<<"\n Enter grade 3:";
cin>>N3;

cout<<"\n Enter grade 4:";
cin>>N4;

MD1=((N1+N2+N3+N4)/4);


if (MD1>=7) {

cout<<"\n MD1="<<MD1;
cout<<"\n APPROVED!";}

else{

cout<<"\n MD1="<<MD1;
cout<< "\n DISAPPROVED!";
cout<<"\n Enter grade 5:";
cin>>N5;

MD2=((N5+MD1)/2);

cout<<"\n MD2="<<MD2;}

if (MD2>=5){

cout<<"\n APPROVED!";}

else{

cout<<"\n DISAPPROVED";
}

}

