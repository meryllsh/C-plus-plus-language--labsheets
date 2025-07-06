//Write a program that displays the sum of all multiples of 5 between 0 and 100 inclusive.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num=5, total=0.0f;
    while(num<=100){
    total+=num;
    num=num+5;
    
}
cout<<"Sum of all multiples of 5 between 0 and 100 inclusive: "<<total<<endl;
return 0;
}
