// min of all elements of array 
#include <iostream>
using namespace std;
int main(){
    int arr[]={12,6,7,34,9,23,2,8,3,-6,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mn= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<mn) mn=arr[i];
    }
    cout<<mn;
}