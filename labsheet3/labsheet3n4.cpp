//A baby-sitter charges Rs 250 an hour until 21:00 hrs. when the rate drops to Rs 175 an
//hour (the children are in bed). Write a program that accepts a starting time and ending
//time in hours and calculates the total baby-sitting bill. You can assume that the baby-
//sitter leaves at latest by 23: hrs. (Note: Consider full hours only).
//Sample Input:
//Please input the time of entry: 16
//Please input the time of leaving: 20
//Output:
//Bill: Rs 1000
//Sample Input:
//Please input the time of entry: 16
//Please input the time of leaving: 23
//Out:
//Bill: Rs 1350

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int start=0.0f, end=0.0f, bill=0.0f;
    cout<<"Please input the time of entry: "<<endl;
    cin>>start;
    cout<<"Please input the time of leaving: "<<endl;
    cin>>end;
    if (end<=21)
    {bill=(end-start)*250;
    cout<<"Total baby-sitting bill: "<<bill<<endl;}
    else if (end<=23)
    {bill=((21-start)*250)+((end-21)*175);
    cout<<"Total baby-sitting bill: "<<bill<<endl;}
    else
    {cout<<"Error"<<endl;}

    return 0;

}