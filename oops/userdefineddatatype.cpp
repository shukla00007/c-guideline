// you need to store data of 50 students 
// data -cgpa rno name 
//float cgpa [50];
//int rno[50];
// string names[50];
#include<iostream>
using namespace std;
class student{//Student is a new data type
  public:
    string name ;
    int rno;
    float gpa;
};
int main(){
    student s1; 
    s1.name="Subham Kumar Shukla";
    s1.rno=76;
    s1.gpa=8.2;
    student s2;
    s2.name="Ayush Kumar Shukla";
    s2.rno=76;
    s2.gpa=8.2;
    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;

}
    

