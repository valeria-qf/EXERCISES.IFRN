#include <iostream>
using namespace std;
int main()

{

    int V[4];
    float soma=0;

        for (int i=0; i<4; i++)
        {
            cout<<"Enter the grade:"<<endl;
            cin>>V[i];
            soma=soma+V[i];
        }

    cout<<"The average is:"<<soma/4<<endl;
    
    return 0;

}