// max function 
#include <iostream>
using namespace std;
int maxoftwo(int a, int b) {
    if(a > b) return a; 
    else return b; 
}
int main(){
    cout<<maxoftwo(10, 20); 
}
//a function may be called more than once from any other functions-true