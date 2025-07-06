//Write a program that allows the input of an integer value n and displays all multiples of 3 which
//are less than or equal to n, as well as the sum of the square of these values.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n=0.0f, count=3, total=0.0f, square=0.0f;
    cout<<"Input an integer value n: "<<endl;
    cin>>n;
    while(count<=n){
    cout<<"Multiple of 3: "<<count<<endl;
    square=count*count;
    total+=square;
    count=count+3;
    }
    cout<<"Sum of the square of these values: "<<total<<endl;
    return 0;


}