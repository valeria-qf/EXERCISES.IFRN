/*Elaborar um programa que leia valores positivos inteiros até que um valor negativo seja
informado. Ao final devem ser apresentados o maior e o menor valores informados pelo
usuário.*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n=0, b, s;
    bool i=true;


    while(n>=0)
    {
        cout<<"Enter a  positive number:"<<endl;
        cin>>n;
    
    if(i==true)
    {
        b=n;
        s=n;
        i=false;
    }


    if (n>=0)
    {
        if (n>b)
        {
            b=n;
        }
        
        if (n<s)
        {
            s=n;
        }

    }

    }
    cout<<"The biggest number is:"<<b<<endl;
    cout<<"The smalest number is:"<<s<<endl;
}