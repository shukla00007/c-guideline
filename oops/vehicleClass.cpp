// inharitance is like getting some features from the parents like gentic 
#include<iostream>
using namespace std;
class Vehicale{ 
    public:
    int topSpeed;
    float mileage;
    string fuel;
    int gear;
};
class TwoWheeler : public Vehicale{
    public:

};
class FourWheeler : public Vehicla{
    public:

};
class Scooty: public TwoWheeler{
    public:

};
class Bike: public TwoWheeler{
    public:
}

int main(){
    Bike b1;  
    b1.topSpeed=100;
    b1.mileage=12.5;
    b1.gears=6;
}
