//Write a program to prompt the user for an integer and calculate the sum of all the integers

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=0.0f, count=1, total=0.0f;
    cout<<"Please enter an integer: "<<endl;
    cin>>n;
    while(count<=n){
    total+=count;
    cout<<"The sum of the number is: "<<total<<endl;
    count=count+1;
    
    }
    cout<<"The total sum is: "<<total<<endl;
 return 0;
}