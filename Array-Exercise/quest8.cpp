/*Faça um algoritmo para ler 15 números e armazenar em um vetor VET, verificar e escrever se
existem números repetidos no vetor VET e em que posições se encontram*/

#include <iostream>
using namespace std;
int main()
    
{
int V[15], cont;

srand((unsigned)time(NULL));

for (int i; i<15; i++)
{
    V[i]=rand()%100;
    cout<<V[i]<<"|";
}

for (int i=0; i<15; i++)
{
    for (int j=i+1; j<15; j++)
    {
        if (V[i]==V[j])
        {
            cout<<endl;
            cout<<"O número "<<V[i]<<" está repetido nas posições "<<i<<" e "<<j<<endl;
            cont++;
        }
}
}    
        if (cont==0)
        {
            cout<<endl;
            cout<<"Não há números repetidos!"<<endl;
        }
return 0;
}
