/*Utilizando vetores, crie um programa que organize uma quantidade qualquer de números
inteiros fornecidos de forma aleatória da seguinte forma: primeiro os números pares em
ordem crescente e depois os números ímpares em ordem decrescente.*/

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int  aux=0, auxPar=0, auxImpar=0, par[10], impar[10];

        
    int V[10];

    srand((unsigned)time(NULL));

    for (int i=0; i<10; i++)
    {
        V[i]=rand()%10;
    }
    cout<<endl;

    //Bubble sort

    for (int i=0; i<10; i++)
    {
            for (int j=i+1; j<10; j++)
            {
                    if (V[i]>V[j])
                    {
                        //swap
                        aux=V[i];
                        V[i]=V[j];
                        V[j]=aux; 
                    }
            }            
    } 

    for (int i=0; i<10; i++)
    {
        cout<<V[i]<<"|";
    }

    cout<<"\n"<<endl;
    
    for (int k=0; k<10; k++)
    {
        if (V[k]%2==0)
        {
            par[auxPar]=V[k];
            auxPar++;
        }

        else
        {
            impar[auxImpar]=V[k];
            auxImpar++;
        }
    }

    cout<<"Vetor organizado:"<<endl;
      
    for (int n=0; n<auxPar; n++)
    {
        cout<<par[n]<<"|";
    }

    for (int m=auxImpar-1; m>=0; m--)

    {
        cout<<impar[m]<<"|";
    }

return 0;
} 
