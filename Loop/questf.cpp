#include <iostream>
using namespace std;
int main()
{

int n=1;

//show all numbers that are divisible by 4 and less than 200

 while (n<200)
 {

//if the rest of the division is 0 we can show "n"

     if(n%4==0)
     {
     cout<<n<<endl;
     }

      n=n+1;
 }

}