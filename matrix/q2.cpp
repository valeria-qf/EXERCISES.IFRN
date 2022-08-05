/*Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para sete
elementos inteiros. Construir uma matriz C de duas dimensões, cuja primeira coluna deve
ser formada pelos elementos da matriz A e a segunda coluna pelos elementos da matriz B.
Apresentar a matriz C.*/

#include <iostream>
using namespace std;
int main()
{

     int A[7], B[7], C[7][2];

    for (int i=0; i<7; i++)
    {
            cout<<"Preencha a matriz 'A': "<<endl;
            cin>>A[i];
    }

    system("clear");

     for (int j=0; j<7; j++)
    {
            cout<<"Preencha a matriz 'B': "<<endl;
            cin>>B[j];
    }
    system("clear");

     for (int i=0; i<7; i++)
     {
            C[i][0]=A[i]; //A primeira coluna (0) é preenchida pelo valor de A
     }

     for (int i=0; i<7; i++)
     {
            C[i][1]=B[i]; //A segunda coluna (1) é preenchida pelo valor de B
     }


       for (int i=0; i<7;i++)
    {
        for (int j=0; j<2; j++)
        {
            cout<<C[i][j]<<"";
        }
        cout<<endl;
    }
    return 0;
 }
