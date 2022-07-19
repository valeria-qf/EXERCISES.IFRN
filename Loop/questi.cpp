#include <iostream>
using namespace std;
int main()
{

    double n, F1=0, F2=1, Temp;

    cout<<F1;

    while (n<=15)
    {
        cout<<(F1+F2);

        Temp=F2;
        F2=F1;
        F1=F1+Temp;
        n++;
    }


}