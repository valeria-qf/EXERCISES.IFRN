/* Elaborar um programa que apresente os quadrados sem armazená-los na memória dos
valores inteiros existentes na faixa de valores de 15 a 200 com saltos de 3 em 3.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 for (int i=15; i<=200; i+=3)

    cout<<i<<"^"<<"2"<<"="<<pow(i,2)<<endl;
}