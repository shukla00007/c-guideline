#include <iostream>
using namespace std;
int fact(int n){
    int f=1;
    for (int i=1;i<=n;i++){
        f *= i; 
    }
    return f;
    
}

int main(){
    int n;
    cout <<"enter n:";
    cin >> n;
    int r;
    cout<< "enter r:";
    cin >> r;
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    cout<<a/(b*c) << endl; 
}
