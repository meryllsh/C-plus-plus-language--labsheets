//To calculate x to power n, (where n is a positive integer), we can use a loop that multiplies x by
//itself n times. Thus the code can be as follows:
//p=1
//i=1
//while (i&lt;=n):
//p= p*x;
//Include the code in a program that allows for the input of values for x and n and calculates and
//displays x n .

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n=0.0f, i=1, p=1;
    float x=0.0f;
    cout<<"Please input a value for x: "<<endl;
    cin>>x;
    cout<<"Please input a value for n(where n is a positive integer): "<<endl;
    cin>>n;
    //x^n
    while(n<0){
    cout<<"Invalid entry!"<<endl;
    cout<<"Please input a positive value for n: "<<endl;
    cin>>n;}
    while(i<=n){
    p=p*x;
    i++;}
    cout<<"The value for x^n: "<<p<<endl;
    cin>>p;
    return 0;


}