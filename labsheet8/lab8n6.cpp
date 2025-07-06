//Write a program containing the following functions:
//◦ A function, cyl_Area() that has as parameter the radius of a cylinder and its height and returns
//the total outer surface area of the cylinder.
//◦ A function cyl_Paint() that has as parameters the radius of a cylindrical tank (closed at both
//ends), the height of the tank and the price of painting per unit area and calculates and returns the
//price of painting the outside of the tank. The function should make use of the function cyl_Area().
//◦ A main() function that allows the input of the radius and height of a cylindrical tank as well as the
//price of painting a unit area of the tank and displays the price of painting the tank.


#include <iostream>
#include <cmath>
using namespace std;
float cyl_Area(float r, float h){
    float Area;
    Area=2*M_PI*r*(r+h);
    return Area;
}
float cyl_Paint(float r1, float h1, float cost){
    float Area1, Price_painting;
    Area1=cyl_Area(r1, h1);
    Price_painting=cost*Area1;
    return Price_painting;
}
int main(){
float r2, h2, cost1, result;
cout<<"Please input the radius: "<<endl;
cin>>r2;
cout<<"Please input the height: "<<endl;
cin>>h2;
cout<<"Please input the price of painting per unit area: "<<endl;
cin>>cost1;
result=cyl_Paint(r2, h2, cost1);
cout<<"The price of the painting is: "<<result<<endl;
return 0;
}



