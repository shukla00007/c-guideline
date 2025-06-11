// Take input percentage of a student and print grade according to the marks :
// 81-100 : very good
// 61-80 : good
// 41-60 : average
// 0-40 : fail
#include <iostream>
using namespace std;
int main(){
    int percentage;
    cout<<"Enter the percentage of the student:";
    cin>>percentage;
    if (percentage >=81 && percentage <=100){
        cout<<"Grade: Very Good"<<endl;
    } 
    else if (percentage >=61){
        cout<<"Grade: Good"<<endl;
    } 
    else if (percentage >=41){
        cout<<"Grade: Average"<<endl;
    }
    else  {
        cout<<"Grade: Fail"<<endl;
    } 
    return 0; // Exit successfully

}