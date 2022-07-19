/*Faça um algoritmo para ler 15 números e armazenar em um vetor VET, verificar e escrever se
existem números repetidos no vetor VET e em que posições se encontram*/

#include <iostream>
using namespace std;
int main()
{
    int VET[15], n;
    bool repete;

    for (int i=0; i<15; i++)
    {
        cout<<"Digite um número:"<<endl;
        cin>>n;
        VET[i]=n;

    }

    for (int j=0; j<14; j++)
    {
        for (int k=j+1; k<15; k++)
        {
            if (VET[j]==VET[k])
            {
                repete=true;
            }
        }
    }

    if (repete==true)
    {
        cout<<"Há números repetidos no vetor"<<endl;
    

    for (int l=0; l<14; l++)
    {
        for (int m=l+1; m<15; m++)
        {
            if (VET[l]==VET[m])
            {
                cout<<"O valor na posição "<<l<< " e "<<m<<" estão repetidos"<<endl;
            }

        }
    }
    }
    
    else
    {
        cout<<"Não há valores que se repetem"<<endl;
    }

return 0;
}
