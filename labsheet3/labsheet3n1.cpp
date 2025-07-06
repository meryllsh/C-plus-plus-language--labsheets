//Write a program that allows the user to input the radius of a circle, and it calculates and
//displays the area. The program should only accept non-zero positive values for the
//radius and display an error message if the user tries to input a zero or negative value.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float radius=0.0f;
    cout<<"Radius of a circle: "<<endl;
    cin>>radius;
    if(radius<=0)
    {cout<<"Error, please retry ";}
    else
    {cout<<"Area of circle: "<<M_PI*radius*radius<<endl;}
    
    return 0;
    
}