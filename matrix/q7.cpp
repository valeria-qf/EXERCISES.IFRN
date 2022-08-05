/*Elaborar um programa que leia uma matriz A de duas dimensões com quatro linhas e cinco
colunas, armazenando nessa matriz os valores das temperaturas em graus Celsius.
Construir a matriz B de mesma dimensão, em que cada elemento seja o valor da
temperatura em graus Fahrenheit de cada elemento correspondente da matriz A. Apresentar
ao final as matrizes A e B.*/

#include <iostream>
using namespace std;
int main()
{
    int A[4][5];
    float B[4][5];

    srand((unsigned)time(NULL));
    
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<5; j++)
        {
            A[i][j]=rand()%100;
            cout<<A[i][j]<<" C  | ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<5; j++)
        {
            B[i][j]=(1.8*A[i][j]+32);
            cout<<B[i][j]<<" F |  ";
        }
        cout<<endl;
    }



return 0;
}