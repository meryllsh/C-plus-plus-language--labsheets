//Write a program that reads an integer value, num, and determines if it is a perfect square.
//If it is a perfect square, then the program displays a message saying that num is a perfect
//square.
//Note: A perfect square is a number whose square root is an integer, e.g. 4 and 25 are
//perfect squares while 3 and 8 are not.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
   int x=0.0f;
   cout<<"Input a value: "<<endl;
   cin>>x;
   if(floor(sqrt(x))==ceil(sqrt(x)))
   cout<<x<<" is a perfect square."<<endl;
   return 0;
}

