//Write a program that allows the input of two numbers and tells the user which of the
//two numbers is larger.
//Note: Assume that the two numbers entered are not equal.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x=0.0f, y=0.0f;
    cout<<"Input values(x, y): "<<endl;
    cin>>x>>y;
    if(x>y)
    {cout<<x<<" is greater than "<<y<<endl;}
    else
    {cout<<y<<" is greater than "<<x<<endl;}
    return 0;

}