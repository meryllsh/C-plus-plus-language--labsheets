//Write a program that asks the user his/her year of birth and calculates his/her age. If
//he/she is below 18 years old, the program must display “You are a child aged &lt;age&gt;!”.
//Otherwise, it must display “You are an adult aged age years old!”. (Assume that the age
//is calculated based on the year only)
//Sample input:
//Input your year of Birth: 2000
//Output:
//You are a child aged 14
//Sample input:
//Input your year of Birth: 1994
//Output:
//You are an adult aged 20

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int year_birth=0.0f, age=0.0f;
    cout<<"Please enter your year of birth: "<<endl;
    cin>>year_birth;
    age=2023-year_birth;
    cout<<"Age: "<<age<<endl;
    if(age<18)
    {cout<<"You are a child aged "<<age<<endl;}
    else
    {cout<<"You are an adult aged "<<age<<endl;}
    return 0;



}