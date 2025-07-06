//Write a program that allows you to input an integer value n. If n is greater than 100, it displays the
//message ‘Wrong Input’, otherwise it displays all factors of n.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int n=0.0f;
   cout<<"Input an integer value for n: "<<endl;
   cin>>n;
   if((n>100)||(n<0))
   {cout<<"Wrong input"<<endl;}
   else 
   {
    int x=0;
    while(x<=n)
    {
        x=x+1;
        if ((n%x)==0)
        {cout<<"Factors of "<<n<<" is "<<x<<endl;}
        
    }
    
   }
   return 0;
}


