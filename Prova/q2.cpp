/*matriz 8x 8 e escreva o maior elemento da diagonal principal e a soma dos
elementos da diagonal secundaria.
*/

#include <iostream>
using namespace std;
int main()
{
    int A[8][8], maior=0, soma=0;
    
    srand ((unsigned)time(NULL));

    for (int i=0; i<8; i++)
    {
        for (int j=0; j<8; j++)
        {
            A[i][j]=rand()%10;
            cout<<A[i][j]<<" ";

            if((i==j) && (A[i][j]>maior))
            {
                maior=A[i][j];
            }

            if(i+j==7)
            {
                soma=soma+A[i][j];
            }
        }
        cout<<endl;
    }

    cout<<"Maior número da diagonal principal: "<<maior<<endl;
    cout<<"Soma da diagonal secundária: "<<soma<<endl;

    return 0;
}