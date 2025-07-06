//Write a program that allows the input of values for x, y and z and uses the function square, to
//calculate the value of 40 x2 + 50 y2 + 20 z2

//. The calculated value must then be displayed.

#include <iostream>
#include <cmath>
using namespace std;

int square(int value){
    int sq;
    sq=value*value;
    return sq;
}
int main(){
int x=0.0f, y=0.0f, z=0.0f, result=0.0f;
cout<<"Input a value for x: "<<endl;
cin>>x;
cout<<"Input a value for y: "<<endl;
cin>>y;
cout<<"Input a value for x: "<<endl;
cin>>z;
result=40*square(x)+50*square(y)+20*square(z);
cout<<"The value of 40x^2+50y^2+20z^2: "<<result<<endl;
return 0;
}



