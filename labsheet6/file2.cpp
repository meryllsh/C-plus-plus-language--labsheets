#include <iostream>
#include <fstream>
using namespace std;
int main()
{ int x,y,z;
ofstream dataFile; // Declare file stream object
dataFile.open("output.txt");
cout<<"Input values for x,y and z";
cin>>x>>y>>z;
dataFile<<x<<" "<<y<<" "<<z; //Note the operator << is also used for writing
dataFile.close(); // into files.
}