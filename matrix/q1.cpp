/*Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com
cinco linhas e três colunas para valores inteiros. Construir uma matriz C de mesma
dimensão, que seja formada pela soma dos elementos da matriz A com os elementos da
matriz B. Apresentar os elementos da matriz C.*/

#include <iostream>
using namespace std;
int main()
{
    int A[5][3], B[5][3], C[5][3];

    for (int i=0; i<5;i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<"Preencha a matriz 'A': "<<endl;
            cin>>A[i][j];
           
        }
        
    }

     system("clear");

    for (int i=0; i<5;i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<"Preencha a matriz 'B': "<<endl;
            cin>>B[i][j];
        }
       
    }


     for (int i=0; i<5;i++)
    {
        for (int j=0; j<3; j++)
        {
            C[i][j]= A[i][j]+B[i][j];
            
        }
        cout<<endl;
    }



    system("clear");

     for (int i=0; i<5;i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<C[i][j]<<"";
        }
        cout<<endl;
    }
  return 0;  

}

