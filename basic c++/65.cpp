// write a function to claculate the nth fibonacci number using recurison
#include <iostream>
using namespace std;
int fibo(int n){
    if(n==1||n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter the number till fibonacci series run:";
    cin>>n;
    for(int i=1;i<=n;i++)
      cout<<fibo(i)<<endl;
}
//Euler's tour tree