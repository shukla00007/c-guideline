/*
classes are blueprint and objects is instance 
*/
#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int price;
    int seats;
    string type;
    car(string n, int p, int s, string t){
        name=n;
        price = p;
        seats = s;
        type = t;

    }
};
void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
void change(car &c){//when i use & is pass values by reference 
    //and without & it pass by value 
  c.name="Audi A8";   
}
int main(){
    
    car c1("Honda City",1500000,5,"sedan");
    // c1.name="Honda City";
    // c1.price= 1500000;
    // c1.seats=5;
    // c1.type="sedan";

    // car c2;
    // c2.name="Maruti Wagan r";
    // c2.price=800000;
    // c2.seats=5;
    // c2.type="Hatchback";
    print(c1);
    change(c1);//pass by values
    print(c1);

    // car c3;
    // c3.name="Toyota Fortuner";
    // c3.price=3600000;
    // c3.seats=8;
    // c3.type="SUV";

    // cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
    // cout<<c2.name<<" "<<c2.price<<" "<<c2.seats<<" "<<c2.type<<endl;
    // cout<<c3.name<<" "<<c3.price<<" "<<c3.seats<<" "<<c3.type<<endl;
//    print(c1);
//    print(c2);
//    print(c3);


}
// passsing by objects
