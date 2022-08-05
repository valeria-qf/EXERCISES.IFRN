/*Elaborar um programa que faça a leitura de 20 valores inteiros em uma matriz A de duas
dimensões com quatro linhas e cinco colunas. Construir a matriz B de uma dimensão para
quatro elementos que seja formada pelo somatório dos elementos correspondentes de cada linha 
da matriz A. Construir também a matriz C de uma dimensão para cinco elementos que
seja formada pelo somatório dos elementos correspondentes de cada coluna da matriz A. Ao
final, o programa deve apresentar o somatório dos elementos da matriz B com o somatório
dos elementos da matriz C.*/

#include <iostream>
using namespace std;
int main()
{
    int A[4][5], B[4], C[5], soma=0, soma2=0;

    srand((unsigned)time(NULL));
    
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<5; j++)
        {
            A[i][j]=rand()%100;
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<endl;
    
    for (int i=0; i<4; i++)
    {
        soma=0;

        for (int j=0; j<5; j++)
        {
            soma=soma+A[i][j];
            B[i]=soma;
        }   
        cout<<"Soma da linha "<<i<<" = "<<B[i]<<endl;
    }

    cout<<endl;

    for (int j=0; j<5; j++)
    {
        soma2=0;

        for (int i=0; i<4; i++)
        {
            soma2=soma2+A[i][j];
            C[j]=soma2;
        }
        cout<<"Soma da coluna "<<j<<" = "<<C[j]<<endl;

    }
    
 return 0;
}



    


