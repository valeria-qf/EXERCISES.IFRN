#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int D=1, d = 1, C;
    bool continua = true;
   
    while(continua==true)
        
        {
            int q=1;

            cout << "Enter the dividend:";
            cin>>D;
            
            cout<<"Enter the divisor:";
            cin>>d;

            while((q*d)<D)
            {
            q++;
            }
            
            cout << "There are "<<q<<" divisors in the dividend"<< endl;
            
            cout << "continue? (1) Yes; (2) No "<<endl;
            cin>>C;

                while(C!=2 && C!=1)
                {
                    cout << "Invalid option" << endl;
                    cout << "continue? (1) Yes; (2) No ";
                    cin>>C;
                        if (C==2 || C==1){
                            C=C;
                        }
                }

                    if(C==2)
                    {
                        continua = false;
                    }
                    else if(C==1){
                        continua=true;
                    }
                    
        }
        
    }