//A country calculates annual income-tax payable, by an income earner, as follows:
// A salary earner is allowed a personal allowance (not taxable) depending on number of
//dependants, as per the table below. A person is allowed to claim for up to three dependants.

//Number of Dependants Personal Allowance (Rs)
//0 255000
//1 325000
//2 395000
//3 455000
// From his/her annual salary, the personal allowance is deducted.
// On the remaining amount, the income tax is calculated as follows:
//Remaining Amount % Income Tax
//First 50000 15 %
//Next 70000 20 %
//Remaining Amount 25%

//Write a program that allows as input the annual income of a person and outputs the tax payable by
//the person.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float annual_income=0.0f, personal_allowance, remaining_income=0.0f, tax_payable=0.0f;
    int num_dependants=0.0f;
    cout<<"Input the annual income of a person: "<<endl;
    cin>>annual_income;
    cout<<"Number of dependant=0, personal allowance=Rs255000"<<endl;
    cout<<"Number of dependant=1, personal allowance=Rs325000"<<endl;
    cout<<"Number of dependant=2, personal allowance=Rs395000"<<endl;
    cout<<"Number of dependant=3, personal allowance=Rs455000"<<endl;
    cout<<"Input the number of dependants(up to 3): "<<endl;
    cin>>num_dependants;
    if(num_dependants==0){
    remaining_income=annual_income-255000;
    cout<<"Remaining income by the person: "<<remaining_income<<endl;
    if(remaining_income<0)
    cout<<"You are broke"<<endl;
    else if(remaining_income<=50000)
    cout<<"Tax payable by the person: "<<0.15*remaining_income<<endl;
    else if(remaining_income<=120000)
    cout<<"Tax payable by the person: "<<(0.15*50000)+(0.20*(remaining_income-50000))<<endl;
    else 
    cout<<"Tax payable by the person: "<<(0.15*50000)+(0.20*70000)+(0.25*(remaining_income-120000))<<endl;
    }
    else if(num_dependants==1){
    remaining_income=annual_income-325000;
    cout<<"Remaining income by the person: "<<remaining_income<<endl;
    if(remaining_income<0)
    cout<<"You are broke"<<endl;
    else if(remaining_income<=50000)
    cout<<"Tax payable by the person: "<<0.15*remaining_income<<endl;
    else if(remaining_income<=120000)
    cout<<"Tax payable by the person: "<<(0.15*50000)+(0.20*(remaining_income-50000))<<endl;
    else 
    cout<<"Tax payable by the person: "<<(0.15*50000)+(0.20*70000)+(0.25*(remaining_income-120000))<<endl;
    }
    else if(num_dependants==2){
    remaining_income=annual_income-395000;
    cout<<"Remaining income by the person: "<<remaining_income<<endl;
    if(remaining_income<0)
    cout<<"You are broke"<<endl;
    else if(remaining_income<=50000)
    cout<<"Tax payable by the person: "<<0.15*remaining_income<<endl;
    else if(remaining_income<=120000)
    cout<<"Tax payable by the person: "<<(0.15*50000)+(0.20*(remaining_income-50000))<<endl;
    else
    cout<<"Tax payable by the person: "<<(0.15*50000)+(0.20*70000)+(0.25*(remaining_income-120000))<<endl;
}
    else if(num_dependants==3){
    remaining_income=annual_income-455000;
    cout<<"Remaining income by the person: "<<remaining_income<<endl;
    if(remaining_income<0)
    cout<<"You are broke"<<endl;
    else if(remaining_income<=50000)
    cout<<"Tax payable by the person: "<<0.15*remaining_income<<endl;
    else if(remaining_income<=120000)
    cout<<"Tax payable by the person: "<<(0.15*50000)+(0.20*(remaining_income-50000))<<endl;
    else
    cout<<"Tax payable by the person: "<<(0.15*50000)+(0.20*70000)+(0.25*(remaining_income-120000))<<endl;

    }
    else
    cout<<"You input the wrong number of dependants"<<endl;
    return 0;
}