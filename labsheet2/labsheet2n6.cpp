//6.Write a program that allows the input of a value x and calculates and displays the value of x^5 + 3x^4 +2x^3

//7.Modify the program in question 6 so that it allows the input of two values x and n and it calculates and
//displays the value of x^n + 3x^(n-1) + 2x^(n-2)

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x=0.0f, y=0.0f;
    cout<<"The value of x is: "<<endl;
    cin>>x;
    y=x*x*x*x*x+(3*(x*x*x*x))+(2*(x*x*x));
    cout<<"The value of y is: x^5+3x^4+2x^3 : "<<y<<endl;
    float n=0.0f, z=0.0f;
    cout<<"The value of n is : "<<endl;
    cin>>n;
    z=pow(x,n)+3*pow(x,n-1)+2*pow(x,n-2);
    cout<<"The value of z is: x^n + 3x^(n-1) + 2x^(n-2): "<<z<<endl;

    return 0;

}