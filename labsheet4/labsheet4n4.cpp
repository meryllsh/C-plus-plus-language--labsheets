//A utilities company supplies electricity to consumers based on three possible tariffs as shown in the
//table below. Consumers are free to choose their tariffs based on number and type of appliances
//they wish to support. Each tariff also has a monthly minimum charge.
//Tariff Number Minimum Charge (Rs) Charges Per Unit (Rs)
//First 25 Next 50 Next 75 Remaining
//110 44.00 2.75 3.25 4.00 6.50
//120 184.00 3.00 3.50 4.25 6.00
//140 360.00 3.25 3.75 4.50 5.75
//Write a program that allows the input of the tariff chosen by a consumer and the number of units
//consumed, in a month, and outputs the total amount the consumer has to pay for that month.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int tariff_no=0.0f;
    float no_units=0.0f;
    cout<<"Please input the tariff number(110, 120, 140): "<<endl;
    cin>>tariff_no;
    cout<<"Please input the number of units consumed in a month: "<<endl;
    cin>>no_units;
    if(tariff_no==110){
    if(no_units>150)
    cout<<"The total amount the consumer has to pay for that month: "<<(25*2.75)+(50*3.25)+(75*4.00)+((no_units-150)*6.50)<<endl;
    else if(no_units>75)
    cout<<"The total amount the consumer has to pay for that month: "<<(25*2.75)+(50*3.25)+((no_units-75)*4)<<endl;
    else if(no_units>25)
    cout<<"The total amount the consumer has to pay for that month: "<<(25*2.75)+((no_units-25)*3.25)<<endl;
    else if(no_units>=0)
    cout<<"The total amount the consumer has to pay for that month: "<<no_units*2.75<<endl;
    else
    cout<<"You have input the wrong number of units"<<endl;}
    else if(tariff_no==120){
    if(no_units>150)
    cout<<"The total amount the consumer has to pay for that month: "<<(25*3.00)+(50*3.50)+(75*4.25)+((no_units-150)*6.00)<<endl;
    else if(no_units>75)
    cout<<"The total amount the consumer has to pay for that month: "<<(25*3.00)+(50*3.50)+((no_units-75)*4.25)<<endl;
    else if(no_units>25)
    cout<<"The total amount the consumer has to pay for that month: "<<(25*3.00)+((no_units-25)*3.50)<<endl;
    else if(no_units>=0)
    cout<<"The total amount the consumer has to pay for that month: "<<no_units*3.00<<endl;
    else
    cout<<"You have input the wrong number of units"<<endl;}
    else if(tariff_no==140){
        if(no_units>150)
    cout<<"The total amount the consumer has to pay for that month: "<<(25*3.25)+(50*3.75)+(75*4.50)+((no_units-150)*5.75)<<endl;
    else if(no_units>75)
    cout<<"The total amount the consumer has to pay for that month: "<<(25*3.25)+(50*3.75)+((no_units-75)*4.50)<<endl;
    else if(no_units>25)
    cout<<"The total amount the consumer has to pay for that month: "<<(25*3.25)+((no_units-25)*3.75)<<endl;
    else if(no_units>=0)
    cout<<"The total amount the consumer has to pay for that month: "<<no_units*3.25<<endl;
    else
    cout<<"You have input the wrong number of units"<<endl;}
    
    else
    cout<<"You have input the wrong number of tariff"<<endl;
    return 0;

    

}