// Write a program to reverse the array without using any extra array.
#include<iostream>
using namespace std;
int main(){
    int a[]={12,6,7,34,9,23,2,8};
    int n=sizeof(a)/4;
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[i];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
}
// palindrome - means element of array is in the order of 
// {a,b,c,d,c,b,a}like that