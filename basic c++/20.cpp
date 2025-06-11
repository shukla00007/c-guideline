// print the table of "n". Here "n" is a integer which user will input 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the positive integer:";
    cin>>n;
    for (int i=n; i<=10*n; i=i+n){
        cout<<i<<" ";
    }

}