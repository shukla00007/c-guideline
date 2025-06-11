// find the maximum value out of all of the elements in the array. 
#include <iostream>
using namespace std;
int main(){
    int arr[]={12,6,7,34,9,23,2,8,3,6,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mx= arr[0];
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);

    }
    cout<<mx;
}