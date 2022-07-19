
#include <iostream>
using namespace std;
int main()

{

float V[10], B1[10], B2[10], B3[10], B4[10];
float S[10], M[10]; // Soma e Media
float N;
int cont=0;

    for (int i=1; i<=10; i++)
    {
        cout<<"Digite a primeira nota do aluno número: "<<i<<endl;
        cin>>N;
        B1[i]=N;

        cout<<"Digite a segunda nota do aluno número: "<<i<<endl;
        cin>>N;
        B2[i]=N;

        cout<<"Digite a terceira nota do aluno número: "<<i<<endl;
        cin>>N;
        B3[i]=N;

        cout<<"Digite a quarta nota do aluno número: "<<i<<endl;
        cin>>N;
        B4[i]=N;

        cout<<"\n";

    }

    for (int j=1; j<=10; j++)
    {
        S[j] = B1[j]+B2[j]+B3[j]+B4[j];
     
    }

    for (int k=1; k<=10; k++)
    {
        M[k]=S[k]/4; 

    }
    
    for (int l=1; l<=10; l++)
    {
        
        cout<<"A média do aluno "<<l<<" é:"<< M[l] <<endl;
        
        if(M[l]>=7) 
        {
            cont++;
        }
        

    }
        cout<<"Número de alunos acima da média:"<< cont <<endl;

    return 0;

}

