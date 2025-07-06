//A swimming club charges a fee per swimming session. If, for members, it charges a fee x per
//session per adult and y per child, for non-members, the charges will be 2x per adult and 1.5
//y per child. If the head of a family is a member, the whole family is charged as members.
//Write a program that performs the calculation for the fee to be charged to a family. The
//program should allow as inputs the values of x and y, the number of adults and number of
//children and whether they should be charged as members or non-members.

#include <iostream>
#include <cmath> 
using namespace std;
int main()
{ 
    float x=0.0f, y=0.0f, no_adults=0.0f, no_children=0.0f;
    char z;
cout<<"Fee per session per adult for members in a swimming club: "<<endl;
cin>>x;
cout<<"Fee per session per child for members in a swimming club: "<<endl;
cin>>y;
cout<<"Fee per session per adult for non-members in a swimming club: "<<2*x<<endl;
cout<<"Fee per session per child for non-members in a swimming club: "<<1.5*y<<endl;
cout<<"Input the number of adults: "<<endl;
cin>>no_adults;
cout<<"Input the number of children: "<<endl;
cin>>no_children;
cout<<"Is the head of family a member? Input 'Y' for 'Yes' or 'N' for 'No'. Answer: "<<endl;
cin>>z;
if(z=='Y')
   {cout<<"Fee to be charged to a family: "<<(no_adults*x)+(no_children*y)<<endl;}
   else if(z=='N')
   {cout<<"Fee to be charged to a family: "<<(no_adults*2*x)+(no_children*1.5*y)<<endl;}
   else
   cout<<"Wrong input"<<endl;

   return 0;

}





