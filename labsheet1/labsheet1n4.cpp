//A car travels a distance d1 at a speed s1, followed by a distance d2 at a speed s2 and finally a
//distance d3 at a speed s3. Assuming all distances to be in km and all speeds in km/h, write a
//program to input the values of s1, s2, s3 and d1, d2, d3 and display:  The total distance travelled.  The total time taken for the whole journey and
// The average speed over the journey.

#include <iostream>
using namespace std;
int main()
{
    float d1=0.0f, d2=0.0f, d3=0.0f, s1=0.0f, s2=0.0f, s3=0.0f, total_distance_travelled=0.0f, total_time_taken=0.0f, average_speed=0.0f;
    cout<<"d1: "<<endl;
    cin>>d1;
    cout<<"s1: "<<endl;
    cin>>s1;
    cout<<"d2: "<<endl;
    cin>>d2;
    cout<<"s2: "<<endl;
    cin>>s2;
    cout<<"d3: "<<endl;
    cin>>d3;
    cout<<"s3: "<<endl;
    cin>>s3;
    total_distance_travelled=d1+d2+d3;
    cout<<"The total distance travelled: "<<total_distance_travelled<<endl;
    total_time_taken=(d1/s1)+(d2/s2)+(d3/s3);
    cout<<"The total time taken for the whole journey: "<<total_time_taken<<endl;
    average_speed=total_distance_travelled/total_time_taken;
    cout<<"The average speed over the journey: "<<average_speed<<endl;
    return 0;
}









