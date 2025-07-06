//The Konditorei coffee shop sells coffee at Rs 25.00 a cup plus cost of delivery. For delivery, there is a
//fixed initial cost of Rs 15.00 and an additional cost Rs2.50 per cup . Eg. For one cup the delivery cost
//is Rs17.50, for 2 cups it is Rs 20.00, while for 10 cups it is Rs 40.00. Write a program that calculates
//the cost of an order. (Note: Input should be no. of cups ordered)

#include <iostream>
using namespace std;
int main()
{
    int number_of_cups=0.0f;
    float The_cost_of_an_order=0.0f;
    cout<<"Number of cups: "<<endl;
    cin>>number_of_cups;
    The_cost_of_an_order=(float(25.00)*number_of_cups)+float(15.00)+(float(2.50)*number_of_cups);
    cout<<"The cost of an order: "<<The_cost_of_an_order<<endl;
    return 0;

    

}
