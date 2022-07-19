#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float  AC, A, H, W;
string NC, C;
bool continua=true;

cout<<"Enter the name of the room, the height and the width to calcule the area:"<<endl;

while(continua)
    {
        cout<<"Enter the name of the room:"<<endl;
        cin>>NC;

        cout<<"Enter the Height of the room:"<<endl;
        cin>>H;

        cout<<"Enter the  Width of the room:"<<endl;
        cin>>W;

        A=(H*W);
        cout<<"The area of the "<<NC<<" is: "<<A<<"m²"<<endl;

        cout<<"Continue? (Y/N): *IN CAPSLOCK"<<endl;
        cin>>C;

        if (C=="N")
        {
            continua=false;
        }
        AC=AC+A;
    }

        cout<<"The total area of the house is="<<AC<<"m²"<<endl;



}