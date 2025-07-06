//Write a program that uses a while loop to determine how long it takes for an investment to double
//at a given interest rate. The input will be an annualized interest rate, and the output is the number of
//years it takes an investment to double.
//Note: the amount of the initial investment does not matter; you can use MUR 100.


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float rate=0.0f, interest=0.0f;
    float balance=1;
    int y=0;
    cout<<"Please input an annualised interest rate(%): "<<endl;
    cin>>rate;
    while(balance<2){
    interest=balance*(rate/100);
    balance=balance+interest;
    y++;
    }
    cout<<"The number of years it takes an investment to double: "<<y<<endl;
    return 0;



}


