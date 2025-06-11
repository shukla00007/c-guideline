#include<iostream>
using namespace std;
class Scooty{
    public:
    int topspeed;
    float mileage;
    virtual void sound(){
        cout<<"Vroom Vroom"<<endl;
    }
    private:
    int bootspace;

};
class bike :public Scooty{
    public:
    int gears;
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }
};
int main(){
    Scooty *b= new bike();
    b->sound();
    // Scooty *s= new Scooty();
    // s->sound();
}