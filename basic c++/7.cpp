// take positive integer input and tell if it is divisible by 5 or 3 
#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter a positive integer: ";
    cin>>n;
    if(n%5==0 || n%3==0){// "||" is the logical OR operator
        cout << n << " is divisible by either 5 or 3." << endl;
    }
    else{
        cout << n << " is not divisible by either 5 or 3." << endl;
    }
}