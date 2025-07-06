//6. Modify the previous program to print out the largest and smallest number read in as well as the
//average. Also change the prompt to show the number of values still to be entered.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=0.0f, count=1;
    float num=0.0f, total=0.0f, large=-999, small=999;
    cout<<"Please input the number of numbers to be input: "<<endl;
    cin>>n;
    while(count<=n){
    cout<<"Number of values still to be entered: "<<n-(count-1)<<endl;
    cout<<"Input your number for input "<<count<<endl; 
    cin>>num;   
    total+=num;
    count=count+1;
    if(num>=large)
    {large=num;
    
    }
    if(num<=small)
    {small=num;
    }
    }
    cout<<"Largest number: "<<large<<endl;
    cout<<"Smallest number: "<<small<<endl;

    cout<<"Average of the smallest and largest number: "<<(small+large)/2<<endl;

    cout<<"Average of these "<<n<< " numbers is: "<<total/n<<endl;
    return 0;

}