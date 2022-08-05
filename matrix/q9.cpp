/*Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões com sete
linhas e sete colunas. Construir a matriz B de mesma dimensão, em que cada elemento seja
o somatório de 1 até o valor armazenado na posição da matriz A, com exceção dos valores
situados nos índices ímpares da diagonal principal (B[1,1], B[3,3], B[5,5] e B[7,7]), os quais
devem ser o fatorial de cada elemento correspondente da matriz A. Apresentar ao final a
matriz B.*/

#include <iostream>
using namespace std;
int main()
{
    int A[7][7], B[7][7], fat, soma;

     srand((unsigned)time(NULL));
    
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            A[i][j]=rand()%10;
            cout<<A[i][j]<<" | ";
        }
        cout<<endl;
    }
    cout<<endl;
      for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            if(i==j)
            {
                fat=1;
                for (int k=A[i][j]; k>0; k--)
                {
                    fat=fat*k;
                    B[i][j]=fat;
                }
            }
            else
            {
                soma=0;
                for (int k=0; k<=A[i][j]; k++)
                {
                soma=soma+k;
                 B[i][j]=soma;
                
                }
            }

            cout<<B[i][j]<<" | ";
        }
        cout<<endl;
    }
    return 0;
}



