// print 1 to n without extra parameter 
#include <iostream>
using namespace std;
void print(int n){
    if(n==0) return;//base case
    print(n-1);//call
    cout<<n<<endl;//work

}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(n);
}
// proper dry run
