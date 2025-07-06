//A company pays its workers on a weekly basis, based on number of years of service and number of
//hours worked in the week as follows:
// Workers having a minimum of 15 years of service are paid Rs 200 per hour for the 1 st 40
//hours and Rs 300 per hour for up to another 20 hours.
// Other workers are paid at Rs 150 per hour for the first 45 hours and Rs 250 per hour for
//up to another 15 hours.

//Write a program that allows as input the number of years of service of a worker and the total
//number of hours worked in a week and displays the total salary earned by the worker for the week.
//Workers cannot work in the company for more than 30 years and they cannot work for more than
//60 hours in a week. Your program should display appropriate error messages in case of
//unreasonable data being input.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float no_years=0.0f, hours_worked=0.0f;
    cout<<"Please input the number of years of a worker: "<<endl;
    cin>>no_years;
    cout<<"Total number of hours worked in a week: "<<endl;
    cin>>hours_worked;
    if(no_years>30)
    {cout<<"Workers cannot work in the company for more than 30 years"<<endl;}
    else if(no_years>=15){
    if(hours_worked>60)
    {cout<<"You cannot work for more than 60 hours in a week"<<endl;}
    else if(hours_worked>40)
    {cout<<"Total salary earned by the worker for the week: "<<(40*200)+((hours_worked-40)*300)<<endl;}
    else if(hours_worked>=0)
    {cout<<"Total salary earned by the worker for the week: "<<hours_worked*200<<endl;}
    else
    {cout<<"Wrong input for the number of hours worked"<<endl;}}
    else if(no_years>=0){
        if(hours_worked>60)
        {cout<<"You cannot work for more than 60 hours in a week"<<endl;}
        else if(hours_worked>45)
        {cout<<"Total salary earned by the worker for the week: "<<(45*150)+((hours_worked-45)*250)<<endl;}
        else if(hours_worked>=0)
        {cout<<"Total salary earned by the worker for the week: "<<hours_worked*150<<endl;}
        else
        {cout<<"Wrong input for the number of hours worked"<<endl;}}
        else
        {cout<<"Wrong input for the number of years"<<endl;}
        return 0;
}












