//Write a program that accepts two points, like in question 5 above, and determines the distance
//between them. d = √((x2 – x1)2
//
//+ (y2 – y1)2)

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1=0.0f, y1=0.0f, x2=0.0f, y2=0.0f, d=0.0f;
    cout<<"x1: "<<endl;
    cin>>x1;
    cout<<"y1: "<<endl;
    cin>>y1;
    cout<<"x2: "<<endl;
    cin>>x2;
    cout<<"y2: "<<endl;
    cin>>y2;
    d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout<<"Distance between them: "<<d<<endl;
    return 0;
}