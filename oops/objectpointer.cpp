#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;
    Cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
    void print(){
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
}
};
void change(Cricketer *c){
    c->avg=68.9;//(*c).avg=77.2
}
int main(){
    Cricketer c1("Virat Kohli",25000,55.2);
    Cricketer c2("Rohit Sharma",18000,45.7);
    //Cricketer *p1=&c1;
    //cout<<(*p1).avg<<endl;//c1.runs
    //(*p1).avg=77.5;
    // cout<<c1.avg<<endl;
    // change(&c1);
    // cout<<c1.avg<<endl;
    Cricketer *p1=&c1;
    cout<<p1->runs<<endl;
    cout<<c1.avg<<endl;
    p1->avg=77.5;
    cout<<c1.avg<<endl;

//     //c1.print();
//     //c2.print();
//     int x=4;
//     cout<<&x<<endl;
//     int *p=&x;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     *p=100;
//     cout<<x<<endl;
}