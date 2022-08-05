
/*Elaborar um programa que leia quatro matrizes A, B, C e D de uma dimensão com quatro
elementos. Construir uma matriz E de duas dimensões do tipo 4 × 4, sendo a primeira linha
formada pelo dobro dos valores dos elementos da matriz A, a segunda linha formada pelo
triplo dos valores dos elementos da matriz B, a terceira linha formada pelo quádruplo dos
valores dos elementos da matriz C e a quarta linha formada pelo fatorial dos valores dos
elementos da matriz D. Apresentar a matriz E.*/

#include <iostream>
using namespace std;
int main()
{
    int A[4], B[4], C[4],D[4], E[4][4], fat=0;

    srand((unsigned)time(NULL));
    
    for (int i=0; i<4; i++)
    {
        A[i]=rand()%20;
        B[i]=rand()%20;
        C[i]=rand()%20;
        D[i]=rand()%10;
    }

   //Vector A
    cout<<endl;

    for (int i=0; i<4; i++)
    {
        cout<<A[i]<<" ";
    }

    //Vector B
    cout<<endl;

    for (int i=0; i<4; i++)
    {
        cout<<B[i]<<" ";
    }

    //VECTOR C
    cout<<endl;

    for (int i=0; i<4; i++)
    {
        cout<<C[i]<<" ";
    }

    //VECTOR D
    cout<<endl;

    for (int i=0; i<4; i++)
    {
        cout<<D[i]<<" ";
    }

    //MATRIZ E
   
    

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (i==0)
            {
                E[i][j]=A[j]*2;
            }

            if (i==1)
            {
                E[i][j]=B[j]*3;
            }

            if (i==2)
            {
                E[i][j]=C[j]*4;
            }

            if (i==3)
            {
                fat=1;
                for(int k=D[j]; k>0; k--)
                {
                    fat=fat*k;
                    
                }
            E[i][j]=fat;
            }
        }
    }
    

    cout<<"\n"<<endl;

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            cout<<E[i][j]<<" ";
        }
        cout<<endl;
    }
    
}