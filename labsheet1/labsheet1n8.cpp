//Two points in a plane are specified using the coordinates (x1, y1) and (x2, y2). Write a program that
//calculates the slope of a line through two non-vertical points entered by the user.
//Hint: m = (y2 – y1)/(x2 – x1)

#include <iostream>
using namespace std;
int main()
{
    float x1=0.0f, y1=0.0f, x2=0.0f, y2=0.0f, m=0.0f;
    cout<<"x1: "<<endl;
    cin>>x1;
    cout<<"y1: "<<endl;
    cin>>y1;
    cout<<"x2: "<<endl;
    cin>>x2;
    cout<<"y2: "<<endl;
    cin>>y2;
    //m=slope of a line=(y2 – y1)/(x2 – x1)
    m=(y2-y1)/(x2-x1);
    cout<<"The slope of a line: "<<m<<endl;
    return 0;


}