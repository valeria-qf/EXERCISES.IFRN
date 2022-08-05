/*Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com
cinco linhas e seis colunas. A matriz A deve aceitar a entrada de valores pares, enquanto a
matriz B deve aceitar a entrada de valores ímpares. As entradas dos valores nas matrizes A
e B devem ser validadas pelo programa, e não pelo usuário. Construir a matriz C de mesma
dimensão, que seja formada pela soma dos elementos da matriz A com os elementos da
matriz B. Apresentar os elementos da matriz C.*/

#include <iostream>
using namespace std;
int main()
{
    int A[5][6], B[5][6], C[5][6], par, impar, contpar=0, contimpar=0;
    int i=0, j=0;

     srand((unsigned)time(NULL));
    
    while (contpar<30)
    {
            par=rand()%20;

            if(par%2==0)
            {
                contpar++;
                A[i][j]=par;
                j++;

                if(j==6)
                {
                    i++;
                    j=0;
                }
            }
    }

    i=0;
    j=0;
      while (contimpar<30)
    {
            impar=rand()%20;

            if(impar%2!=0)
            {
                contimpar++;
                B[i][j]=impar;
                j++;

                if(j==6)
                {
                    i++;
                    j=0;
                }
            }
    }

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<6; j++)
        {
        cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

     for (int i=0; i<5; i++)
    {
        for (int j=0; j<6; j++)
        {
        cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

     for (int i=0; i<5; i++)
    {
        for (int j=0; j<6; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            cout<<C[i][j]<<" ";
        
         }
         cout<<endl;
    }
    return 0;
}