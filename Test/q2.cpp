/*2 - Criar um algoritmo que possa armazenar as alturas de dez atletas de cinco delegações que participarão dos jogos de verão. Imprimir a maior altura de
cada delegação*/

#include <iostream>
using namespace std;
int main()
{
    int menor=170, maior=200, A[10][5], maioraltura=0, maioraltura2=0, maioraltura3=0, maioraltura4=0, maioraltura5=0;

    srand((unsigned)time(NULL));

     for (int i=0; i<10; i++)
    {
        for (int j=0; j<5; j++)
     {
        A[i][j]=rand()%(maior-menor+1)+menor;
     }

    }


for (int i=0; i<10; i++)
    {
        for (int j=0; j<5; j++)
     {
        cout<<A[i][j]<<"|";
     }
    cout<<endl;
    }

//delegação 1

for (int i=0; i<10; i++)
{
    for (int j=0; j<5; j++)
    {
        if(A[i][0]>maioraltura)
        {
            maioraltura=A[i][0];
        }
    }
}
cout<<endl;
cout<<"MAIS ALTO DA 1 DELEGAÇÃO:"<<maioraltura<<endl;

//delegação 2


for (int i=0; i<10; i++)
{
    for (int j=0; j<5; j++)
    {
        if(A[i][1]>maioraltura2)
        {
            maioraltura2=A[i][1];
        }
    }
}

cout<<"MAIS ALTO DA 2 DELEGAÇÃO:"<<maioraltura2<<endl;

//delegação 3

for (int i=0; i<10; i++)
{
    for (int j=0; j<5; j++)
    {
        if(A[i][2]>maioraltura3)
        {
            maioraltura3=A[i][2];
        }
    }
}

cout<<"MAIS ALTO DA 3 DELEGAÇÃO:"<<maioraltura3<<endl;

//delegação 4

for (int i=0; i<10; i++)
{
    for (int j=0; j<5; j++)
    {
        if(A[i][3]>maioraltura4)
        {
            maioraltura4=A[i][3];
        }
    }
}

cout<<"MAIS ALTO DA 4 DELEGAÇÃO:"<<maioraltura4<<endl;

//delegação 5
for (int i=0; i<10; i++)
{
    for (int j=0; j<5; j++)
    {
        if(A[i][4]>maioraltura5)
        {
            maioraltura5=A[i][4];
        }
    }
}

cout<<"MAIS ALTO DA 5 DELEGAÇÃO:"<<maioraltura5<<endl;


return 0;
}