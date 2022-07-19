#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //G=grãos ; T=total; i= auxiliar;

    double i=1, G=1, T=0;
    
    while(i<=64){
         
        T=T+G;
        G=G*2;
        i++;
    }
    cout<<"Soma"<<"="<<T<<endl;
    
}

