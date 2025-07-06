#include <iostream>
#include <fstream>
using namespace std;
int main()
{ int x,y,z;
ifstream f;
f.open("input.txt");
f>>x>>y>>z;
cout<<"x= "<<x<<endl;
cout<<"y= "<<y<<endl;
cout<<"z= "<<z<<endl;
f.close();
return 0;
}