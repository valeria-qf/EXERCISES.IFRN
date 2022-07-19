#include <iostream>
#include <cmath>
using namespace std;
int main()
{

float n, S, i=1;

    cout<<"Digite 10 números e descubra a soma e a média:"<<endl;
 
    while (i<=10)
    {
        cout<<"Digite um número:"<<endl;
        cin>>n;
        S=n+S;
        i++;
    }
    cout<<"Soma="<<S<<endl;
    cout<<"Média="<<(S/10)<<endl;
}