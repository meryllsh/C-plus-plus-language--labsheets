//1. Write a program that will allow a user to input a set of numbers (using 0
//to stop input). The program will then calculate the square of each of the
//number and store the numbers and their squares in a file named
//Squares.txt, in a tabular format. Suppose user inputs 3 5 1 7 9 0, the file
//Squares.txt should contain:
//Number Square
//3       9
//5       25
//1       1
//7       49
//9       81

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    int x=0.0f;
    ofstream myFile;
    myFile.open("Squares.txt");
    if(!myFile){
        cout<<"Error in opening file"<<endl;
        return -1;
    }
    cout<<"Input a set of numbers and input 0 to terminate"<<endl;
    cin>>x;
    myFile<<"Number"<<"  "<<"Square"<<endl;
    while(x!=0){
        myFile<<x<<"        "<<x*x<<endl;
        cout<<"Square: "<<x*x<<endl;
        cin>>x;
    }
    cout<<"The data has been inserted successfully"<<endl;
    return 0;

}

