//Write a function that takes as parameter the marks scored by a student in a module and returns
//the grade obtained, based on the following criteria:

//Marks>=70 : A
//60<=Marks <70: B
//50<=Marks < 60: C
//40<= Marks <50: D
//Marks<40: F

//Write the required main function code to allow a user to input the marks of a student and the
//program displays the grade of the student.
//Note: use multiple return statements.

#include <iostream>
#include <cmath>
using namespace std;
char grade(int marks){
    if(marks>=70)
    {return 'A';}
    else if(marks>=60)
    {return 'B';}
    else if(marks>=50)
    {return 'C';}
    else if(marks>=40)
    {return 'D';}
    else
    {return 'F';}
    
}
int main(){
    float marks1;
    char grade1;
    cout<<"Input the number of marks of a student: "<<endl;
    cin>>marks1;
    grade1=grade(marks1);
    cout<<"Grade is: "<<grade1<<endl;
    return 0;

}