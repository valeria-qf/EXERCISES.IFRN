/*Elaborar um programa que apresente os valores de conversão de graus Celsius em
graus Fahrenheit, de dez em dez graus, iniciando a contagem em dez graus Celsius e
finalizando em cem graus Celsius. O programa deve apresentar os valores das duas
temperaturas.*/

#include <iostream>
using namespace std;
int main()
{
int F;

  for(int C=10; C<=100; C+=10){
  F=(1.8*C+32);
  cout<<"F="<<F<<endl;
   }
}