#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int A, B, C;
  
    cout << "Enter a value to represent A: ";
    cin >> A;

    cout << "Enter a value to represent B: ";
    cin >> B;

    cout << "Enter a value to represent C: ";
    cin >> C;

    if (A > B) {                                      
        if (B > C){
            cout << A << ">" << B << ">" << C;
        }
        else{
            if (A > C){
                cout << A <<">" << C << ">" << B;
            }
            else {
                cout << C << ">" << A << ">" << B; }
            
        }
    }
    
    
    else {
        if (A > C){
            cout << B << ">" << A << ">" << C; }
            
        else {
        
            if (B > C){
                cout << B << ">" << C << ">" << A;
            }
             else {
                cout << C << ">" << B << ">" << A; }
        }
    }
  
}
