
#include <iostream>
using namespace std;
int main()

{   
    int A;
    float H;
    int id[5] , V[5];
    float al[5];
    
    
    

    for (int i=0; i<5; i++)
    {
        cout<<"Enter a height:"<<endl;
        cin>>H;
        al[i]=H;


        cout<<"Enter an age:"<<endl;
        cin>>A;
        id[i]=A;

    }

    for (int i=4; i>=0;i--)

    {
    cout<<"Age:"<<id[i]<<"|"<<"Height:"<<al[i]<<endl;
    }

}