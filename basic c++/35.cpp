// questions using operators 
/*WAP to count digits of a given number.*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<"Number of digits: "<<count<<endl;
}