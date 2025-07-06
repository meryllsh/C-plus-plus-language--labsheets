//Write a program that requests the user to input the radius of a circle and it calculates and
//displays the area of the circle (Assume pi to be 3.142)

#include <iostream>
using namespace std;
int main()
{
    float radius = 0.0f;
  cout << "Enter radius:";
  cin >> radius;
  cout << "Area of circle is " << 3.142 * radius * radius << endl;
  return 0;
  
}

