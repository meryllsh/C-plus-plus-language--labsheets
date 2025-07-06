//Write a program that allows the coefficients a,b and c of a quadratic equation of the
//form ax 2 + bx + c=0 and it displays the roots of the equation, whether the roots are real
//or complex.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a=0.0f, b=0.0f, c=0.0f, x=0.0f, y=0.0f;
    cout<<"Input the values of a,b and c: "<<endl;
    cin>>a>>b>>c;
    x=-b/2*a;
    y=b*b-4*a*c;
    if(y>=0)
    {cout<<"The first value is: "<<x+(sqrt(y)/2*a)<<endl;
    cout<<"The second value is: "<<x-(sqrt(y)/2*a)<<endl;}
    else
    {cout<<"The first value is: "<<x<<"+"<<sqrt(-y)/2*a<<"i"<<endl;
    cout<<"The second value is: "<<x<<"-"<<sqrt(-y)/2*a<<"i"<<endl;}
    return 0;




}