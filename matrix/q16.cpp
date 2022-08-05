/*Elaborar um programa que leia uma matriz A de duas dimensões com dez linhas e sete
colunas. Ao final, apresentar o total de elementos pares e ímpares existentes na matriz.
Apresentar também o percentual de elementos pares e ímpares em relação ao total de
elementos da matriz. Supondo a existência de 20 elementos pares e 50 elementos ímpares,
haveria 28,6% de elementos pares e 71,4% de elementos ímpares.*/

#include <iostream>
using namespace std;
int main()
{
    int A[10][7];
    float contpar=0, contimpar=0;

    srand((unsigned)time(NULL));
    
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<7; j++)
        {
            A[i][j]=rand()%100;
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }

    for (int i=0; i<10; i++)
    {
        for (int j=0; j<7; j++)
        {
            if (A[i][j]%2==0)
            {
                contpar++;
            }

            else
            {
                contimpar++;
            }
        }
    }

    cout<<"\n Pares: "<<contpar<<" = "<<(contpar*100)/70<<"%"<<endl;
    cout<<"\n Impares: "<<contimpar<<" = "<<(contimpar*100)/70<<"%"<<endl;

return 0;
}