/*Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para 12
elementos reais. Construir uma matriz C de duas dimensões, sendo a primeira coluna da
matriz C formada pelos elementos da matriz A multiplicados por 2 e a segunda coluna
formada pelos elementos da matriz B subtraídos de 5. Apresentar separadamente as
matrizes.*/

#include <iostream>
using namespace std;
int main ()
{
    int A[12], B[12], C[12][2];

    srand((unsigned)time(NULL));

    for (int i=0; i<12; i++)
    {
        A[i] = rand()%10;
        B[i] = rand()%10;
    }

    for (int i=0; i<12; i++)
    {
        cout<<A[i]<<"|";
    }

    cout<<endl;

    for (int i=0; i<12; i++)
    {
        cout<<B[i]<<"|";
    }
    for (int i=0; i<12; i++)
    {
        for (int j=0; j<2; j++)
        {
            C[i][0] = A[i]*2;
            C[i][1] = A[i]-5;
        }
    }
    cout<<endl;
    cout<<"Matriz:"<<endl;

    for (int i=0; i<12; i++)
    {
        for (int j=0; j<2; j++)
        {
          cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}