#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n=1, S, i=0;

    cout<<" Digite infinitos números e descubra a soma, a média e a quantidade de valores lidos:"<<endl;
    cout<<"PS:Pressione um número negativo para finalizar a operação!"<<endl;
    while (i>=0)
    {

        cout<<"Digite um número:"<<endl;
        cin>>n;
        

             if(n<0)
            {
                break;
            }
    
        S=S+n;
        i++;

    
    }
      cout<<"Soma="<<S<<endl;
       cout<<"Media="<<(S/i)<<endl;
       cout<<"Quantidade de termos="<<i<<endl;
    
}




