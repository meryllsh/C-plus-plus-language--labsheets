//A factory pays its workers at the rate of Rs 100 per hour if the number of hours worked
//(per week) does not exceed 40. Otherwise, the hourly rate is Rs 150 for any hour worked
//above 40 in a given week. Write a program that allows the input of number of hours
//worked in a week and calculates and displays the wages for that week.
//Sample Input:
//Input no. of hours worked: 35
//Output:
//Total wages for the week: Rs 3500
//Sample Input:
//Input no. of hours worked: 45
//Output:
//Total wages for the week: Rs 4750

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   float hours=0.0f, wages=0.0f;
   cout<<"Input number of hours worked per week: "<<endl;
   cin>>hours;
   if(hours<=40)
   {wages=hours*100;}
   else
   {wages=(40*100)+((hours-40)*150);}
   cout<<"Wages for that week: "<<wages<<endl;
   return 0;

   
}