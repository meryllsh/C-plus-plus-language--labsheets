//A toy is made of two balls, one fitted inside the other one as shown in the diagram below. The space
//in-between the balls is filled with a liquid. Write a program that allows the input of the radius of
//each of the balls and it calculates and displays the volume of the liquid.

#include <iostream>
using namespace std;
int main()
{
    float r1=0.0f; 
    float r2=0.0f; 
    float volume_of_liquid=0.0f;
    cout<<"r1= "<<endl;
    cin>>r1;
    cout<<"r2= "<<endl;
    cin>>r2;
    //r1>r2
    volume_of_liquid=((4.0f/3)*3.142*r1*r1*r1)-((4.0f/3)*3.142*r2*r2*r2);
    cout<<"Volume of the liquid: "<<volume_of_liquid<<endl;
    return 0;
}