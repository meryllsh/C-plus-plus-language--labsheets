//A lecturer gives 5-point quizzes that are graded as follows: 5 – A, 4 – B, 3 – C, 2 – D, 1 – E,
//0 – F.
//Write a program that accepts a quiz score as input and uses a decision structure to
//display the above grades.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int score=0.0f;
    cout<<"Input a quiz score: "<<endl;
    //choose a quiz score between 1, 2, 3, 4, 5 and 6.
    cin>>score;
    if(score==5)
    cout<<"Your score is A"<<endl;
    else if(score==4)
    cout<<"Your score is B"<<endl;
    else if(score==3)
    cout<<"Your score is C"<<endl;
    else if(score==2)
    cout<<"Your score is D"<<endl;
    else if(score==1)
    cout<<"Your score is E"<<endl;
    else if(score==0)
    cout<<"Your score is F"<<endl;
    else
    cout<<"You can't be graded"<<endl;
    return 0;

}