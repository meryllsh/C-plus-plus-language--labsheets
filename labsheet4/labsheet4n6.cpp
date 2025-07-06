//A company sells 5 different types of cars. Type 1 is a car of 1500 CC, Type 2 is 1500 CC with
//automatic mirrors, type 3 is 1500 CC with automatic mirrors and front and rear sensors. Type 4 is
//1200 CC while type 5 is 1200 CC with automatic gear. Write a program that allows the input of a type
//of car between 1 and 5 (inclusive) and it displays the details of the car. Use switch statements.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int car_type=0.0f;
    cout<<"Type 1: Car of 1500 CC"<<endl;
    cout<<"Type 2: Car of 1500 CC with automatic mirrors"<<endl;
    cout<<"Type 3: Car of 1500 CC with automatic mirrors and front and rear sensors"<<endl;
    cout<<"Type 4: Car of 1200 CC"<<endl;
    cout<<"Type 5: Car of 1200 CC with automatic gear"<<endl;
    cout<<"Please input the type of car between 1 and 5 (inclusive)"<<endl;
    cin>>car_type;
    switch(car_type){
        case 1: 
        cout<<"Car of 1500 CC"<<endl;
        break;
        case 2:
        cout<<"Car of 1500 CC with automatic mirrors"<<endl;
        break;
        case 3:
        cout<<"Car of 1500 CC with automatic mirrors and front and rear sensors"<<endl;
        break;
        case 4:
        cout<<"Car of 1200 CC"<<endl;
        break;
        case 5:
        cout<<"Car of 1200 CC with automatic gear"<<endl;
        break;
        default:
        cout<<"You entered the wrong type of car"<<endl;
        break;
        }
        return 0;


    
}