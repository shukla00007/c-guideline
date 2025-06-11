// compile and run time error
//shows error when typing the code -synthatical error 
// run time error- divide by zero
#include<iostream>
using namespace std;
class Loading{
    public:
    void sum(string a, string b){
        cout<<a+b<<endl;
    }
    void sum(int a, int b){
        cout<<a+b<<endl;

    }
    void sum(int a ,int b, int c){
        cout<<a+b+c<<endl;
    }
};
int main(){
    Loading a;
    a.sum(5,4);
    a.sum(5,4,3);
    a.sum("subham"," kumar shukla";)
}
