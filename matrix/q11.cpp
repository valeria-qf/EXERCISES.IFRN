/*Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com cinco
linhas e cinco colunas. Apresentar o somatório dos elementos situados na diagonal principal
(posições A[1,1], A[2,2], A[3,3], A[4,4] e A[5,5]) da referida matriz.*/
#include <iostream>
using namespace std;
int main()
{
    int A[5][5], soma=0;

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
            if(i==j)
            {
                soma=soma+A[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"Soma da diagonal principal: "<<soma<<endl;

return 0;
}