// Write a program to store roll number and marks 
//obtained by 4 student side by side in a matrix 
#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={{76,81},{13,76},{81,91},{88,90}};
    for(int j=0;j<4;j++){
        for(int i=0;i<2;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}