// Take positive interger input and tell if it is three digit number or not 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if(n>99 && n<1000){
        cout<<n<<" "<<"is a three digit number "<<endl;  
    }
    else{
        cout<<n<<" "<<"is not a three digit number "<<endl;
    }

}