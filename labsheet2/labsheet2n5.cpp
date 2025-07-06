//A ladder in leant against a wall as shown below. Write a program that takes as input the length of the
//ladder and the angle of inclination (from the ground) and calculates and displays the maximum height of
//the wall against which the ladder can be used.

#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    float length_of_the_ladder=0.0f, angle_of_inclination_in_degrees=0.0f, angle_of_inclination_in_radians=0.0f, Maximum_height_of_the_wall_against_which_the_ladder_can_be_used=0.0f;
    cout<<"Length of the ladder: "<<endl;
    cin>>length_of_the_ladder;
    cout<<"Angle of inclination from the ground in degrees: "<<endl;
    cin>>angle_of_inclination_in_degrees;
    angle_of_inclination_in_radians=(M_PI/180)*angle_of_inclination_in_degrees;
    cout<<"Angle of inclination in radians: "<<angle_of_inclination_in_radians<<endl;
    cout<<"Maximum height of the wall against which the ladder can be used: "<<(sin(angle_of_inclination_in_radians))*(length_of_the_ladder)<<endl;
    return 0;

}