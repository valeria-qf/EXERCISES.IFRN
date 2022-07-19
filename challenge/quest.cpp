#include <iostream>
using namespace std;
int main()
{
int A=4, B=4;
int CA, CB, R, E;

CA=2;
R=B; //R=4

while(CA<=A)
    { 

    E=B; // E=4
    CB=1;
    
    while(CB<CA)
    {
        
        E=E*B; // quando CA=4 o CB roda 3 vezes o while e o valor final de E=256
        CB=CB+1;
        
    }
    // R=4 e E=16 na primeira volta
    //R=20 e E=256 na segundam volta

    R=R+E; // R=20+E=256 = 276   
    CA=CA+2;
}

    cout<<R<<endl;


    double n, aux=3, V;
    double f2=1, f1=0;

    cout<< "Expor termos:"<<endl;
    cin>>n;

    cout<<f1<<endl;

    while(aux<=n)
    {
        cout<<(f1+f2)<<endl;

        V=f2;
        f2=f1;
        f1=f1+V;

        aux ++;
    }
    return 0;
}