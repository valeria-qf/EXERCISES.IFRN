/*Faça um programa que preencha aleatório dois vetores de números inteiros com 20
números cada. Depois de montados gere um terceiro vetor formado pela diferença dos dois
vetores lidos, um quarto vetor formado pela soma dos dois vetores lidos e por último um
quinto vetor formado pela multiplicação dos dois vetores lidos*/

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int A[20], B[20], VSOMA[20], VDIF[20], VMULT[20], menor, maior;

    srand((unsigned)time(0));

    cout<<"Digite o menor limite:"<<endl;
    cin>>menor;
    cout<<"Digite o maior limite:"<<endl;
    cin>>maior;

    for (int i=0; i<20;i++)
    {
        A[i]=rand()%(maior-menor+1)+menor;
    }

     for (int i=0; i<20;i++)
    {
        B[i]=rand()%(maior-menor+1)+menor;
    }

    for (int i=0; i<20;i++)
    {
            VDIF[i]=A[i]-B[i];
            VSOMA[i]=A[i]+B[i];
            VMULT[i]=A[i]*B[i];
    }

    cout<<"Diferença:"<<endl;

    for (int i=0;i<20; i++)
    {
        cout<<VDIF[i]<<endl;
    }

    cout<<"Soma:"<<endl;

    for (int i=0;i<20; i++)
    {
        cout<<VSOMA[i]<<endl;
    }

    cout<<"Multiplicação:"<<endl;

    for (int i=0;i<20; i++)
    {
        cout<<VMULT[i]<<endl;
    }
return 0;
}