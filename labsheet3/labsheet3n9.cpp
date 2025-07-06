//At a University, 100-point exams are graded as follows:
//Marks Grade
//70 – 100 A
//60 – 69 B
//50 – 59 C
//40 – 49 D
//&lt; 40 F
//Write a program that accepts an exam score as input and uses a decision structure to
//find the corresponding grade. Display suitable messages if the marks do not lie in the
//range 0 - 100.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int score=0.0f;
    cout<<"Input your exam score: "<<endl;
    cin>>score;
    if(score>100)
    cout<<"Incorrect score";
    else if(score>=70)
    cout<<"Grade A";
    else if(score>=60)
    cout<<"Grade B";
    else if(score>=50)
    cout<<"Grade C";
    else if(score>=40)
    cout<<"Grade D";
    else if(score>=0)
    cout<<"Grade F";
    else
    cout<<"Incorrect score";
    return 0;
}