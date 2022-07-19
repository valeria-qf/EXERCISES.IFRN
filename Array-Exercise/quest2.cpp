#include <iostream>
#include <ctime>
using namespace std;
int main()

{
    srand((unsigned)time(0));
    int V[10];


        for (int i=0; i<10; i++)
        
            {
                V[i] = rand();
                cout<<V[i]<<endl;
            }
        
        cout<<"\n INVERSE \n"<<endl;
        
    
        for (int i=9; i>=0;i--)

        {
            cout<<V[i]<<endl;
        }
}