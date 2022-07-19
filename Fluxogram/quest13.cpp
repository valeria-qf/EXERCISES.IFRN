#include <iostream>
using namespace std;
int main()
{
    string name, gender;

    cout<<"Enter your name:";
    cin>>name;

    cout<<"Enter your gender(F/M): ";
    cin>>gender;

    if (gender=="F" || gender=="f")
    {
        cout << "\n Illustrious Ms."<<name;
    }
    else if (gender=="M" || gender=="m")
    {
        cout << "\n Illustrious Mr."<<name;
    }
    else{
        cout << "\n Gender invalid";
    }
}
