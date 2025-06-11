// nested if-else statements
//Take 3 positive integer inputs and print the greatest of them using nested if-else statements without using multiple conditions 
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first positive integer: ";
    cin>>a;
    cout<<"Enter the second positive integer: ";
    cin>>b;
    cout<<"Enter the third positive integer: ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"The greatest number is: "<<a<<endl;
        }else{
            cout<<"The greatest number is: "<<c<<endl;
        }

    }else{
        if(b>c){
            cout<<"The greatest number is: "<<b<<endl;
        }else{
            cout<<"The greatest number is: "<<c<<endl;
        }
    }
}