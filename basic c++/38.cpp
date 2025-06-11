// WAP to print sum of all the even digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int sum=0;
    while(n!=0){
        int ld =n%10;
        if(n%2==0){
            sum+=ld;
        }
        n/=10;

    }
    cout<<"Sum of even digits: "<<sum<<endl;

}