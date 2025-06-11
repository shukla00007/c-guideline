// count the number of elements in given array greater than a number x
#include<iostream>
using namespace std;



int main(){
    int arr[]={1,3,0,10,2,5,6};
    int x=4;
    int count=0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++) {
        if (arr[i]>x) {
            count++;
        }
    }
    cout << count;
}