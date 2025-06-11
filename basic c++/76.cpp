// Find the second largest element in the givne array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,1,0,9,4,12,1,2};
    int mx=INT8_MIN;
    int n=sizeof(arr)/4;
    for (int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }    
    int smax=INT8_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=mx) smax=max(smax,arr[i]);

    }
    cout<<smax;
}