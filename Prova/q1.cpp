/*- Leia uma
matriz 8 x 8 e a transforme numa matriz triangular inferior , atribuindo
zero a todos os elementos acima da diagonal principal, escrevendo-a ao
final.*/
#include <iostream>
using namespace std;
int main()
{
    int A[8][8];

    for (int i=0; i<8; i++)
    {
        for (int j=0; j<8; j++)
        {
            if(i<j)
            {
                A[i][j]=0;
            }

            else
            {
                A[i][j]=1;
            }

            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}