// make a function which calculates th factorial of n using recursion 
#include <iostream>
using namespace std;
int fact(int n){
    if(n==0||n==1) return 1 ;
    return n * fact(n-1);
}
int main(){
    int n ;
    cout<<"Enter n for factorial: ";
    cin>>n;
    cout<<"factorial:"<<fact(n);
    return 0;

}
// tree diagram 
/*
fact(5)->
        5*fact(n-1(4))-->
                         4*fact(3)-->
                                     3*fact(2)-->
                                              2*fact(1)-->
                                              1*fact(0)-fact(0)=1-->


*/