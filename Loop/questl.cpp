#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    double n, i, j=1, soma=0, t=0, k= 1; 

    cout <<"Digite 15 números e descubra seus respectivos fatoriais:" << endl;

    while(k<= 15){
      cout<<"Digite um número:"<<endl;
      cin>>n;
      j= 1;
      for(i = n; i >= 1; i--){
      j=j*i; 
        
      }
      cout<<j<<endl;
      t=j+t;
      
      k++;
    }
    cout << "Soma das fatoriais="<<t<< endl;
}