// take integer input and print the absolute value of that integer 
#include <iostream>
using namespace std;   
int main(){
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    if(n>=0){
        cout<<"The absolute value is: "<<n<<endl;
    }
    else{
        cout<<"The absolute value is: "<<-n<<endl;
    }
    return 0; // Exit successfully
}