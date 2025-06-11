// constructors ek tareeke se ek funciton type sa ha return
#include<iostream>
#include<string>
using namespace std;
class Student{//Student is a new data type
  public:
    string name ;
    int rno;
    float gpa;
    Student(){// default constructor

    }
    Student(string s, int r, float g){//Parameterised Constructor
        //constructor
        name=s;
        rno=r;
        gpa=g;
   }
};
int main(){
    Student s1("subham kumar shukla",76,8.2); 
    //Student s2("lalit manral",88,6.2);
    // s1.name="Subham Kumar Shukla";
    // s1.rno=76;
    // s1.gpa=8.2;
    
    Student s2;
    s2.name="Ayush Kumar Shukla";
    s2.rno=76;
    s2.gpa=8.2;
    Student s3=s1;//deep copy
    s3.name="shivansh";
    Student s4(s1);//copy constructor
    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;
    cout<<s3.name<<" "<<s3.gpa<<" "<<s3.rno<<endl;
    cout<<s4.name<<" "<<s4.gpa<<" "<<s4.rno<<endl;
}
    



