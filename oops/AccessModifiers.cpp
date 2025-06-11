#include<iostream>
using namespace std;
class Student{
   public:
    int rno;
    string name;
   Student(int r, string n, float m){
    rno=r;
    name=n;
    marks=m;
   }
   float getMarks(){//getter
    return marks;
   }
   void setmarks(float m){//setter
    marks=m;
   }
   private:
    float marks;
};
int main(){
    Student s1(76,"subham kumar shukla",92.2);
    cout<<s1.getMarks()<<endl;
    s1.setmarks(98.5);
    cout<<s1.getMarks()<<endl;
}
// we do not want teh user to change a particular class member
// but we want that use can atleast print it. 