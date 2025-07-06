//Make a copy of the program for question 1 and modify it so that it works for complex roots only.

#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    float a=0.0f, b=0.0f, c=0.0f;
    cout<<"This program finds the real and imaginary parts of a quadratic"<<endl;
    cout<<"Please enter the coefficients (a, b, c): "<<endl;
    cin>>a>>b>>c;
    float y = (sqrt(-(b * b - 4 * a * c)))/ (2 * a);
    float x = - b/ (2 * a);
    cout<<x<<"+"<<y<<"i"<<endl;
    cout<<x<<"-"<<y<<"i"<<endl;
    
return 0;





}
