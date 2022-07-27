/*Escrever um aplicativo que possa armazenar o nome, as duas notas e a média dos alunos
de uma turma. O aplicativo deverá apresentar o seguinte menu MENU 1 - Cadastrar aluno
2 - Consultar dados de aluno 3 - Alterar dados de aluno 4 - Consultar média da turma 5 -
Sair Opção:*/

#include <iostream>
using namespace std;

 //STRUCT

    struct Estudante
    {
        string nome;
        int N1;
        int N2;
        float media;
    };

int main()
{

    int N=10;
    struct Estudante aluno[N]; //vetor do struct
    int OP, alunosCadastrados=0, auxSoma, notaMudar;
    float media, mediaTurma=0;
    string nomeMudar, name;


    while (OP!=5)
    {
    cout<<endl;
    cout<<"         MENU          "<<endl;
    cout<<"1 - Cadastrar  Aluno(a)"<<endl;
    cout<<"2 - Consultar  Dados"<<endl;
    cout<<"3 - Alterar  Dados"<<endl;
    cout<<"4 - Média  da  Turma"<<endl;
    cout<<"5 - Sair"<<endl;

    cout<<endl;

    cout<<" Digite uma opção: "<<endl;
    cin>>OP;

        switch (OP)
        {

        case 1:
        {
            cout<<"Digite o nome do aluno(a):"<<endl;
            cin>>aluno[alunosCadastrados].nome;
        
            cout<<"Digite a Nota 1:"<<endl;
            cin>>aluno[alunosCadastrados].N1;

            cout<<"Digite Nota 2:"<<endl;
            cin>>aluno[alunosCadastrados].N2;

            media=(aluno[alunosCadastrados].N1+aluno[alunosCadastrados].N2)/2;

            aluno[alunosCadastrados].media=media; // Media individual
            alunosCadastrados++; // incrementado quando adiciona novo aluno
            auxSoma = auxSoma+media; // Soma da media turma é incrementada sempre que uma nova media é adicionada

            break;
        }

        case 2:
        {
            cout<<"Consultar os dados de qual estudante?:"<<endl;
            cin>>name;

            for (int i=0; i<N; i++)
            {
                if (aluno[i].nome==name)
                {

                    cout<<"Nota 1: "<<aluno[i].N1<<endl;
                    cout<<"Nota 2: "<<aluno[i].N2<<endl;
                    cout<<"Média: "<<aluno[i].media<<endl;
                }

            
            }
            break;
        }

        case 3:
        {
            cout<<"Digite o nome do aluno que deseja modificar informações:"<<endl;
            cin>>name;

            for (int i=0; i<N; i++)
            {

                if(name==aluno[i].nome)
            {

                    cout<<"Digite um novo nome: (Digite '1' para pular operação.)"<<endl;
                    cin>>nomeMudar;
                    

                        if (nomeMudar!="1")
                        {
                        aluno[i].nome = nomeMudar;
                        }

                    cout<<endl;
                    
                    cout<<"Editar Nota 1:  (Digite '1' para pular a operação.)"<<endl;
                    cin>>notaMudar;

                        if (notaMudar!=1)
                        {
                            aluno[i].N1 = notaMudar;
                        }

                    cout<<endl;
            
                    cout<<"Digite Nota 2: (Digite '1' para pular a operação.)"<<endl;
                    cin>>notaMudar;

                        if(notaMudar!=1)
                        {
                            aluno[i].N2=notaMudar;
                        }
        
                }
            }
        }
            
         case 4:
        {
               
                mediaTurma =  auxSoma/alunosCadastrados;
                cout<<"Média da turma: "<<mediaTurma;

        }

        }
    }
    return 0;
}         

