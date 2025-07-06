//A person currently has an amount P of money, in a bank, which pays an annual interest rate of r%.
//Write a program that allows the input of values for P, r as well as n, where n represents the
//number of years for which the money has remained in the bank. The program must calculate and
//display the total amount in the person’s account at the end of each year for the n years. Display
//the results in an appropriate format.
//Note that this problem involves the calculation of compound interest.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float P=0.0f, r=0.0f, n=0.0f, A=0.0f;
    int count=1;
    cout<<"Please enter the amount of money: "<<endl;
    cin>>P;
    cout<<"Please enter the annual interest rate(in decimal): "<<endl;
    cin>>r;
    cout<<"Please enter the number of years the money is in the bank: "<<endl;
    cin>>n;
    while(count<=n){
    A=P*pow((1+r),count);
    cout<<"The total amount at the end of year "<<count<<" is: "<<A<<endl;
    count++;}
    return 0;

}