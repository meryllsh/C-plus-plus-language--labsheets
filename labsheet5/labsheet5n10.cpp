//The factorial of a positive integer n is defined as 1*2*3……n.
//Write a program that allows for the input of a value n and calculates and displays the factorial of n.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n=0.0f, i=1, p=1;
    cout<<"Please input a positive integer n: "<<endl;
    cin>>n;
    while(n<0){
    cout<<"Invalid entry"<<endl;
    cout<<"Please input a positive integer n: "<<endl;
    cin>>n;}
    while(i<=n){
    p=p*i;
    i++;
}
cout<<"The factorial of n is: "<<p<<endl;
return 0;
}