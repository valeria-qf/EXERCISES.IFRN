/* Dados dois vetores de tamanho N, faça um algoritmo que diga se eles possuem conteúdo
igual. Se existir, imprima o valor e os índices.*/

#include <iostream>
#include <ctime>
using namespace std;
int main()
{

int N;
    cout<<"Digite o tamanho dos vetores:"<<endl;
    cin>>N;

int A[N], B[N];
int cont=0;

srand((unsigned)time(NULL));

    for (int i=0; i<N; i++)
    {
        A[i]=rand()%100;
        cout<<A[i]<<"|";
    }
    cout<<endl;
    for (int j=0; j<N; j++)
    {
        B[j]=rand()%100;
        cout<<B[j]<<"|";
    }


    cout<<"\n"<<endl;
    for (int k=0; k<N; k++)
    {
        for (int l=0; l<N; l++)
        {
            if (A[k]==B[l])
            {
                cout<<"O valor "<<A[k]<<" se repete nos índices "<<k<<" e "<<l<<endl;
                cont++;
            }
        }
    }

    cout<<"\n"<<endl;
    if (cont==0)
    {
        cout<<"Não há números repetidos!"<<endl;
    }
    return 0;
}
