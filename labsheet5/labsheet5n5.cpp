//Write a program to input a set of numbers and print out their average. The program will start by
//prompting the user for the number of numbers to be input and will then prompt for the individual
//numbers.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n=0.0f, count=1;
    float num=0.0f, total=0.0f;
    cout<<"Please input the number of numbers to be input: "<<endl;
    cin>>n;
    while(count<=n){
    cout<<"Input your number for input "<<count<<endl;
    cin>>num;
    total+=num;
    count=count+1;
    }
    cout<<"Average of these numbers is: "<<total/n<<endl;
    return 0;

}