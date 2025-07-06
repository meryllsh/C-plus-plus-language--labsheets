//A speeding ticket fine policy is Rs 500 plus Rs 10 for each km/hr over the speed limit of
//90 km/hr.
//Write a program that accepts speed in km/hr as input, and displays a message indicating
//that the speed limit has not been exceeded or prints the amount of the fine that has to
//be paid. Also, speed should be in the range of 0 – 300 km/hr. All speeds outside this
//range should be rejected as invalid and a suitable message is to be displayed.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int speed=0.0f;
    cout<<"Input speed in km/hr"<<endl;
    cin>>speed;
    if(speed<0)
    cout<<"Invalid speed"<<endl;
    else if(speed<=90)
    cout<<"The speed limit has not been exceeded."<<endl;
    else if(speed<=300)
    cout<<"fine: "<<500+((speed-90)*10)<<endl;
    else
    cout<<"Invalid speed"<<endl;
    return 0;

}