/*8.Elaborar um programa que leia uma matriz A de duas dimensões com cinco linhas e quatro
colunas. Construir uma matriz B de mesma dimensão, em que cada elemento seja o fatorial
de cada elemento correspondente armazenado na matriz A. Apresentar ao final as matrizes
A e B.*/

#include <iostream>
using namespace std;
int main()
{
    int A[5][4], B[5][4], fat, n;

    srand((unsigned)time(NULL));

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<4; j++)
        {
            A[i][j]=rand()%10;
        }
    }

     for (int i=0; i<5; i++)
    {
        for (int j=0; j<4; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }


     for (int i=0; i<5; i++)
    {
        for (int j=0; j<4; j++)
        {
            fat=1;
            for (int k=A[i][j]; k>0; k--)
            {
                fat=fat*k;
            }

            B[i][j]=fat;
        }
    }

    cout<<endl;

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<4; j++)
        {
            cout<<B[i][j]<<" | ";
        }
        cout<<endl;
    }
return 0;
}