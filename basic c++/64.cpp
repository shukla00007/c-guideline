// make a function which calculates "a" raised to the power "b"using recursion.
#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main(){
    int a;
    cout<<"Enter the base :";
    cin>>a;
    int b;
    cout<<"enter the power :";
    cin>>b;
    cout<<pow(a,b);
}