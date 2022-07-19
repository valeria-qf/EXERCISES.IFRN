/* Elaborar um programa que apresente os resultados da soma e da média aritmética dos
valores pares situados na faixa numérica de 50 até 70. */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int  S=0;

for (int i=50; i<=70; i++)
    {
        if(i%2==0)
        {
        cout<< i << endl;
        S=S+i;
        }
    }

cout<<"Sum="<<S<<endl;
cout<<"Average="<<(S/11)<<endl;
}