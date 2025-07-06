//The figure below shows a concrete cylindrical pillar with a cylindrical hole in the middle. The hole is
//of two parts. One part is of height h1, with radius r1, the other part is of height h2, with radius r2. The pillar has height h and radius r. Write a program, that takes as inputs the values of h, r, h1, r1
//and r2 and calculates the volume of concrete required to construct such a pillar with the given
//values.
//Note: h = h1 + h2


//Consider the program in question 3. Given that concrete is sold as full containers of size y m3
//, (where
//y is an integer). Modify the program so that it also allows as input the value of y and the cost of a
//container and displays the cost of concrete for a pillar.

#include <iostream>
using namespace std;
int main ()
{
float h=0.0f, r=0.0f, h1=0.0f, r1=0.0f, r2=0.0f, volume_of_concrete_required_to_construct_such_a_pillar=0.0f;
cout<<"h= "<<endl;
cin>>h;
cout<<"r= "<<endl;
cin>>r;
cout<<"h1= "<<endl;
cin>>h1;
cout<<"r1= "<<endl;
cin>>r1;
cout<<"r2= "<<endl;
cin>>r2;
//h = h1 + h2
volume_of_concrete_required_to_construct_such_a_pillar=(3.142*r*r*h)-((3.142*r1*r1*h1)+(3.142*r2*r2*(h-h1)));
cout<<"Volume of concrete required to construct such a pillar: "<<volume_of_concrete_required_to_construct_such_a_pillar<<endl;
float y=0.0f, cost_of_container=0.0f, cost_of_concrete_for_a_pillar=0.0f;
y=3.142*r*r*h;
cout<<"Full containers in m^3: "<<y<<endl;
cout<<"Cost of container: "<<endl;
cin>>cost_of_container;
cost_of_concrete_for_a_pillar=(cost_of_container/y)*volume_of_concrete_required_to_construct_such_a_pillar;
cout<<"Cost of concrete for a pillar: "<<cost_of_concrete_for_a_pillar<<endl;

return 0;



}
