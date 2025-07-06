#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream dataFile;

dataFile.open("cust.dat");
if (!dataFile)
{
cout << "Error opening file."<<endl;
}
}