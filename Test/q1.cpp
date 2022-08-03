/*Crie uma matriz 10x10 com elementos aleatórios no intervalo [0,20]:
a. Imprima todos os elementos
b. Imprima todos os elementos de uma linha informada pelo usuário
c. Imprima todos os elementos de uma coluna informada pelo usuário
d. Imprima a soma dos elementos de uma linha informada pelo usuário
e. Imprima a soma dos elementos de uma coluna informada pelo usuário 
*/
#include <iostream>
using namespace std;
int main()

{

 int A[10][10], l, c, lsoma, csoma, soma=0, soma2=0;

 srand((unsigned)time(NULL));

//LETRA A
 
 for (int i=0; i<10; i++)
 {
    for (int j=0; j<10; j++)
    {
        A[i][j]=rand()%20;
    }
 }

 for (int i=0; i<10; i++)
 {
    for (int j=0; j<10; j++)
    {
      cout<<A[i][j]<<"|";
    }
    cout<<endl;
 }

 //LETRA B
cout<<endl;
cout<<"Informe uma linha:"<<endl;
cin>>l;
cout<<endl;

for (int i=0; i<10; i++)
{
   for (int j=0; j<10; j++)
   {
      if (i==l)
      {
         cout<<A[i][j]<<" ";
      }
   }
}

//LETRA C
cout<<endl;
cout<<"Informe uma coluna:"<<endl;
cin>>c;
cout<<endl;

for (int i=0; i<10; i++)
{
   for (int j=0; j<10; j++)
   {
      if (j==c)
      {
         cout<<A[i][j]<<endl;
      }
   }

}

//LETRA D

cout<<endl;
cout<<"Informe uma linha:"<<endl;
cin>>lsoma;
cout<<endl;

for (int i=0; i<10; i++)
{
   for (int j=0; j<10; j++)
   {
      if (i==lsoma)
      {
         soma=soma+A[i][j];
       
      }
   }
}
  cout<<"Soma da linha:"<<soma<<" "<<endl;


//LETRA E
cout<<endl;
cout<<"Informe uma coluna:"<<endl;
cin>>csoma;
cout<<endl;

for (int i=0; i<10; i++)
{
   for (int j=0; j<10; j++)
   {
      if (j==csoma)
      {
         soma2=soma2+A[i][j]; 
      }
   }
}
cout<<"Soma da coluna: "<<soma2<<endl;


return 0;
}



