// inharitance is like getting some features from the parents like gentic 
#include<iostream>
using namespace std;
class Scooty{//parent class 
    public:
    int topSpeed;
    float mileage;
    private:
    int bootspace;
};
class Bike : public Scooty{//it is derived class /child class
    public:
    int gears;
};
int main(){
    Bike b1;
    b1.topSpeed=100;
    b1.mileage=12.5;
    b1.gears=6;
}
