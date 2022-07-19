/*Faça um algoritmo para ler um vetor de 20 números. Após isto, ler mais um número qualquer,
calcular e escrever quantas vezes esse número aparece no vetor.*/
  
#include <iostream>
using namespace std;
int main()
{
    int V[20];
    int N, X;
    int cont=0;

    for (int i=0; i<20; i++)
    {
        cout<<"Digite um número para preencher o vetor:"<<endl;
        cin>>N;
        V[i]=N;
    }

    cout<<"\n\n";
    cout<<"Pesquise um número no vetor:"<<endl;
    cin>>X;

    for (int j=0; j<20; j++)
    {
        if (V[j]==X)
        cont++;
    }

    if (cont==1)
    {
        cout<<"O número "<<X<<" aparece "<<cont<<" vez"<<endl;
    }

    else if (cont>1)
    {
        cout<<"O número "<<X<<" aparece "<<cont<<" vezes"<<endl;
    }

     else if (cont==0)
    {
        cout<<"O número "<<X<<" não aparece"<<endl;
    }

return 0;

}