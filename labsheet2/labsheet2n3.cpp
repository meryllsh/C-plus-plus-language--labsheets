//Write a program that allows the input of the 2 (shorter) sides of a right-angled triangle and it calculates
//and displays the length of the hypotenuse, using Pythagora’s theorem.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x=0.0f, y=0.0f, z=0.0f;
    cout<<"Please enter the value for (x, y): "<<endl;
    cin>>x>>y;
    z=sqrt(x*x+y*y);
    cout<<"The length of the hypotenuse is: "<<z<<endl;
    return 0;




}
