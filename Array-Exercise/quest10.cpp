/*10. Faça um algoritmo para preencher um de 20 números. Após isto, deverá ser lido mais um número
qualquer e verificar se esse número existe no vetor ou não. Se existir, o algoritmo deve pedir um
novo número.*/

#include <iostream>
using namespace std;
int main()

{
    int V[20];
    int N, X;
    int cont=0;
    bool isso=true;

    for (int i=0; i<20; i++)
    {
        cout<<"Digite um número para preencher o vetor:"<<endl;
        cin>>N;
        V[i]=N;
    }

  while (isso)
  {
    cont=0;
    cout<<"\n\n";
    cout<<"Pesquise um número no vetor:"<<endl;
    cin>>X;
   for (int j=0; j<20; j++)
    {
        if (V[j]==X)
        {
        cont++;
        }
    }

    if (cont==0)
    {
        isso=false;
    break;
    }
  }
   

return 0;
}