// calculate the product of all the elements in the given array
#include <iostream>
using namespace std;
int main(){
    int arr[]={12,6,7,34,9,23,2,8,3,6,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    long long prod=1;
    for(int i=0;i<n;i++){
        prod=prod*arr[i];
    }
    cout<<prod;
}