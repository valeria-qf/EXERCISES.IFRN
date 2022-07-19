/*Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20
elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros
vetores.*/

#include <iostream>
using namespace std;
int main()

{
    int A[10], B[10], C[20];
    int j=0;
    int i=0;

    for ( int i=0; i<10; i++)
    {
        A[i]=i+1;

    }

    for(int j=0; j<10; j++)
    {
        B[j]=10-j;
    }


    for (int k=0; k<20; k++)
    {
        if(k%2==0)
        {
            C[k]=A[i];
            i=i+1;
        }
        
        else
        {
            C[k]=B[j];
            j=j+1;
        }

        cout<<C[k]<<endl;
    }



return 0;

}