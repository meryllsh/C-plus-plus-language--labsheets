//Modify the previous program to add up the reciprocals of all the integers up to and including the
//input value.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=0.0f;
    float count=1, total=0.0f;
    cout<<"Please enter an integer: "<<endl;
    cin>>n;
    while(count<=n){
    total+=(1/count);
    cout<<"The sum of the number is: "<<total<<endl;
    count=count+1;
    
    }
    cout<<"The total sum is: "<<total<<endl;
 return 0;
}