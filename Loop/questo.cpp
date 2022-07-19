/*Construir um programa que apresente como resultado a fatorial dos valores ímpares
situados na faixa numérica de 1 até 10.*/

#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    double f=1, n;
    for (int i=1; i<=10; i++)
    {
         if(i%2!=0)
        {   
            f=1;
            for (n=i; n>=1; n--)
            {
                f=f*n;
            }
        cout << "Factorial "<<" of "<<i<<" = "<<f<< endl;
        }
    }

    }