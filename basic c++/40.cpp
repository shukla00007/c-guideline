// WAP to print the sum of given number and its reverse]
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int r=0;
    int temp=n;
    while(temp!=0){
        int ld=temp%10;
        r=r*10+ld;
        temp/=10;
    }
    int sum=n+r;
    cout<<"sum of "<<n<<" and its reverse "<<r<<"is:"<<sum<<endl;
    return 0;
}