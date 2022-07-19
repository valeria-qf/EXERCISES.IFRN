/*Escreva um programa para preencher um vetor A de 10 elementos inteiros e um valor X. Em
seguida escrever na tela "ACHEI" se o valor X existir em A e "NÃO ACHEI" caso contrário.*/

#include <iostream>
using namespace std;
int main()
{

int A[10];
int i=0, X;
bool esta;


cout<<"Digite um número inteiro:"<<endl;
cin>>X;


for (int i=0; i<10;i++)
    {
        A[i]=i;
       
    }
   

for (int j=0; j<10; j++)
{

 if (A[j]==X)
    {
        esta=true;
    }
}
    
    if (esta==true)
    {
        cout<<"ACHEI"<<endl;
    }
    else 
    {
    cout<<"NÃO ACHEI"<<endl;
    }

}