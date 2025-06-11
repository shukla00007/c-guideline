// inharitance is like getting some features from the parents like gentic 
#include<iostream>
using namespace std;
class Cricketer{
    public:
    int run;
    int wickets;
    int average;
};
class Engineer{
    public:
    int experience;
    string domain;

};
class phodu: public Engineer,Cricketer{
    public:
    string name;
};

int main(){
    
}
