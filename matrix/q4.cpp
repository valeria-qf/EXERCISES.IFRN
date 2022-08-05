/*Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para 12
elementos reais. Construir uma matriz C de duas dimensões, sendo a primeira coluna da
matriz C formada pelos elementos da matriz A multiplicados por 2 e a segunda coluna
formada pelos elementos da matriz B subtraídos de 5. Apresentar separadamente as
matrizes.*/

#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    int A[10];
    int C[10][3];
    int i, j;

    for ( i = 0; i < 10; i++)
    {   
         cout << "Preencha a matriz 'A': "<<endl;
         cin >> A[i];
    }
     
    system("clear");

    for ( i = 0; i < 10; i++)
    {
      for ( j = 0; j < 3; j++)
         {   
         if (j == 0)
         {
             C[i][j] = A[i] + 5; 
         }

        if (j == 1)
        {
            C[i][j]=1;
         for (int k=A[i];  k>=1; k--)
            {
             C[i][j] *=k;
            }
         }
                
        if (j == 2)
        {
             C[i][j]  = pow(A[i], 2);
        }

        } 
    
    }     
     
        for ( i = 0; i < 10; i++)
        {
        cout<<endl;

            for ( j = 0; j < 3; j++)
            {    
             cout << C[i][j] << " ";
            }
     
    
    }
    return 0; 
}
        