//Write a program that uses an interactive loop and allows the input a number of positive values
//and displays the number of even values input as well as the sum of the even values.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n=0.0f, even=0.0f, sum=0.0f;
    int count=1;
    int num=0.0f;
    cout<<"Please input the number of values you want to input: "<<endl;
    cin>>n;
    while(n<0){
    cout<<"Invalid entry!"<<endl;
    cout<<"Please input the number of values you want to input: "<<endl;
    cin>>n;}
    while(count<=n){
    cout<<"Please input number "<<count<<"(it should be a positive value): "<<endl;
    cin>>num;
    while(num<0){
        cout<<"Error!"<<endl;
        cout<<"Please input number "<<count<<"(it should be a positive value): "<<endl;
    cin>>num;
    }

    if(num%2==0)
    {cout<<num<<" is an even value"<<endl;
    even++;
    sum+=num;}
    count++;

    }
    cout<<"Number of even values input: "<<even<<endl;
    cout<<"Sum of the even values: "<<sum<<endl;
return 0;



}











