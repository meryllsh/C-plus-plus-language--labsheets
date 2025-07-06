//Given the length of two sides of a triangle and the size of the angle between the two sides, the length of
//the third side can be calculated from the Cos Rule: a 2 =b 2 + c 2 – 2bc Cos A. Other angles can also be
//calculated from the sine rule, which is . Furthermore, the area is calculated as

//diagram

//Write a program that allows the input of two sides of a triangle and the angle between the two sides
//and it displays the length of the 3 rd side, the remaining angles as well as the area of the triangle.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float length_a=0.0f, length_b=0.0f, length_c=0.0f, angle_A_degrees=0.0f, angle_A_radians=0.0f, angle_B=0.0f, angle_C=0.0f;
    cout<<"The length of two sides of a triangle are(b,c): "<<endl;
    cin>>length_b>>length_c;
    cout<<"The angle A, between the two sides in degrees: "<<endl;
    cin>>angle_A_degrees;
    angle_A_radians=(M_PI/180)*angle_A_degrees;
    //a 2 =b 2 + c 2 – 2bc Cos A.
    length_a=sqrt((length_b*length_b)+(length_c*length_c)-(2*length_b*length_c*cos(angle_A_radians)));
    cout<<"The length of a is: "<<length_a<<endl;
    angle_B=asin((length_b*sin(angle_A_radians))/length_a);
    cout<<"The angle of B is: "<<angle_B<<endl;
    angle_C=asin((length_c*sin(angle_A_radians))/length_a);
    cout<<"The angle of C is: "<<angle_C<<endl;
    cout<<"The area of the triangle is: "<<0.5*length_b*length_c*sin(angle_A_radians);
    return 0;






}

