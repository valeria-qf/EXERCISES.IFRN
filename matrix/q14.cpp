/*Elaborar um programa que leia uma matriz A de duas dimensões com sete linhas e sete
colunas. Ao final, apresentar o total de elementos pares existentes na matriz.*/

#include <iostream>
using namespace std;
int main()
{

int A[7][7], cont=0;

srand((unsigned)time(NULL));
    
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            A[i][j]=rand()%100;
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            if(A[i][j]%2==0)
            {
                cont++;
            }
        }
    }
    
    cout<<"\n Total de pares: "<<cont<<endl;


return 0;
}