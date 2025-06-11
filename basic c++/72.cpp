/*
given an integer n. create an array containing
squares of all natural numbers till n and print
 the elements of the array
 */ 
#include<iostream>
using namespace std;
int square(int arr[], int i){
    return arr[i]*arr[i];
}
int main(){
    int arr[]={1,2,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<square(arr, i)<<" ";
    }
    cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
}
