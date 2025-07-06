//Write a program that asks the user his id number (use a simple integer value), score in
//CSE1017Y and CSE1019Y and output the user’s name with his average score.

#include <iostream>
using namespace std;
int main()

{
    int id_number = 0.0f, score_in_CSE1017Y = 0.0f, score_in_CSE1019Y = 0.0f, average_score = 0.0f;
    cout << "Please enter your id number: "<< endl;
    cin >> id_number;
    cout << "Enter your score in CSE1017Y: "<< endl;
    cin >> score_in_CSE1017Y;
    cout <<"Enter your score in CSE1019Y: "<<endl;
    cin >> score_in_CSE1019Y;
    char name;
    cout<<"What is your name?"<<endl;
    cin>>name;
    cout<<"Average score: "<<(float(score_in_CSE1017Y)+score_in_CSE1019Y)/2<<endl;
    return 0;

}