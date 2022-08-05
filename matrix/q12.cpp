/*Elaborar um programa que leia uma matriz A de duas dimensões com 15 linhas e 15
colunas. Apresentar o somatório dos elementos pares situados na diagonal principal da
referida matriz.*/
#include <iostream>
using namespace std;
int main()
{
    int A[15][15], soma=0;

    srand((unsigned)time(NULL));
    
    for (int i=0; i<15; i++)
    {
        for (int j=0; j<15; j++)
        {
            A[i][j]=rand()%100;
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }

    
    for (int i=0; i<15; i++)
    {
        for (int j=0; j<15; j++)
        {
            if((i==j) && (A[i][j]%2==0))
            {
                soma=soma+A[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"Soma dos pares da diagonal principal: "<<soma<<endl;

return 0;
}