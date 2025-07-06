//A company provides free cars to its higher-level employees. The engine capacity of the car depends
//on the salary and number of years of service. Employees can also opt for a monthly car allowance in
//lieu of the free car facility. The criteria for eligibility are as per the following table:
//Salary (Rs) Minimum Number of
//years of Service

//Car Engine Capacity
//(cc)

//Optional car
//allowance
//75000 - 2000 10000
//60000 - 1800 8000
//50000 10 1800 8000
//50000 - 1600 6000
//40000 20 1500 5000
//30000 25 1400 4000

//[3]

//Write a program that allows as input the number of years of service of an employee and his salary.
//The program should display whether the employee is eligible for a free car, the engine capacity of
//the car and the optional car allowance.
//Note: No employee of the company earns less than Rs 5000 or more than Rs 100,000. Your programs
//should check for these and display an error accordingly.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float salary=0.0f, no_years=0.0f;
    cout<<"Please input your salary: "<<endl;
    cin>>salary;
    cout<<"Please input the number of years of service: "<<endl;
    cin>>no_years;
    if(salary>100000)
    {cout<<"Error: Salary must be between Rs 5000 and Rs 100000"<<endl;}
    else if(salary>=75000)
    {cout<<"Car Engine Capacity: 2000"<<endl;
    cout<<"Optional car allowance: 10000"<<endl;}
    else if(salary>=60000)
    {cout<<"Car Engine Capacity: 1800"<<endl;
    cout<<"Optional car allowance: 8000"<<endl;}
    else if(salary>=50000){
        if(no_years>=10)
        {cout<<"Car Engine Capacity: 1800"<<endl;
        cout<<"Optional car allowance: 8000"<<endl;}
        else if(no_years>=0)
        {cout<<"Car Engine Capacity: 1600"<<endl;
        cout<<"Optional car allowance: 6000"<<endl;}
        else
        {cout<<"Incorrect number of years"<<endl;}
    }
    else if(salary>=40000){
        if(no_years>=20)
        {cout<<"Car Engine Capacity: 1500"<<endl;
        cout<<"Optional car allowance: 5000"<<endl;}
        else if(no_years>=0)
        {cout<<"You are not eligible for a free car"<<endl;}
        else
        {cout<<"Incorrect number of years"<<endl;}
    }
    else if(salary>=30000){
        if(no_years>=25)
        {cout<<"Car Engine Capacity: 1400"<<endl;
        cout<<"Optional car allowance: 4000"<<endl;}
        else if(no_years>=0)
        {cout<<"You are not eligible for a free car"<<endl;}
        else
        {cout<<"Incorrect number of years"<<endl;}
}
    else if(salary>=5000)
    {cout<<"You are not eligible for a free car"<<endl;}
    else
    {cout<<"Error: Salary must be between Rs 5000 and Rs 100000"<<endl; }
    return 0;
}