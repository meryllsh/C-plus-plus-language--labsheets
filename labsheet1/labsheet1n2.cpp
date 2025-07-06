//Write a program that calculates the cost per square centimetre of a circular pizza, given its diameter
//and price as inputs.

#include <iostream>
using namespace std;
int main()

{
    float Diameter = 0.0f;
    cout << "Diameter is:"<<endl,
    cin >> Diameter;
    float Area=3.142 * Diameter/2 * Diameter/2;
    cout << "Area in square centimetre of a circular pizza:" << Area << endl;
    float Price = 0.0f;
    cout << "Price:"<<endl;
    cin >> Price;
    cout << "Cost per square centimtre of a circular pizza:" << Price/Area <<endl;
    
    return 0; 

}



