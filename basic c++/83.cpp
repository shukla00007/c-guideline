// find the maximum element in a given matrix
#include<iostream>
using namespace std;
int main(){
   int rows, cols;
     cout<<"Enter the number of rows:";
     cin>>rows;
     cout<<"Enter the number of columns:";
     cin>>cols;
     int matrix1[rows][cols];
     cout<<"Enter the elements of the first matrix: "<<endl;
     for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix1[i][j];
        }
     }
    
    int mx= INT8_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++)
        mx=max(mx,matrix1[i][j]);

    }
    cout<<"the maximum element in a matrix is:"<<mx;
}
