// which element of the array does this expression reference?
//num[4]
//-5th element from start 
//and the 4th index element
/*
memory Allocation in arrays
passing array to functions 
*/
#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0]=8;
}
int main(){
    int arr[3]={1,2,3};
    for(int i=0;i<=2;i++){
        cout<<arr[i];
    }
    cout<<endl;
    change(arr);
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
}