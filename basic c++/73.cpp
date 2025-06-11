// given an array of integers, change the value 
//of all odd indexed value of all odd indexed elements to
//its second multiple and increment all even values by 10
#include<iostream>
using namespace std;
int work(int arr[],int i){
    if(arr[i]%2==0){
        return arr[i]*arr[1];
    }else{
        return arr[i]+10;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
    cout<<work(arr,i)<<" ";
    }
}