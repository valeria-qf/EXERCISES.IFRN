/*Elaborar um programa que leia 20 elementos para uma matriz qualquer, considerando que
essa matriz tenha o tamanho de quatro linhas por cinco colunas. Em, seguida, apresentar a
matriz.*/

#include <iostream>
using namespace std;
int main()
{
    int matriz[4][5];

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout<<"Preencha a matriz: "<<endl;
            cin>>matriz[i][j];
        }
    }
    
    system("clear");

     for (int i=0; i<4; i++)
        {
            for (int j=0; j<5; j++)
            {
                cout << matriz[i][j] << " ";
            }
        cout<<"\n";
        }
        
    return 0;
}
