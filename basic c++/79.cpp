// 2d arrays 
// vectors 
/*
what and why?
so far we have explored arrays with only one dimension. it 
is also possible for arrays to have two or more dimensions. 
The two dimensional array is also called a matrix.
int arr[r][c];
this is a 2d array where r depicts number of rows in matrix
and c depicts number of columns in the matrix.
pattern printing 
int arr[4][3];
---
---
---
---

*/
#include<iostream>
using namespace std;
int main(){
    //int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // arr[0][0]=6;
    // arr[0][1]=1;
    // arr[0][2]=2;
    // arr[1][0]=4;
    // arr[1][1]=3;
    // arr[1][2]=5;
    //int arr[4][2]={1234,56,1256,43,1434,32,1312,96};
    //int arr[2][3]={12,34,56,78,91,23};
    int arr[][3]={12,34,56,78,91,23};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}