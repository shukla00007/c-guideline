// write a program to add two matrices.
#include<iostream>
using namespace std;
int main(){
     int rows, cols;
     cout<<"Enter the number of rows:";
     cin>>rows;
     cout<<"Enter the number of columns:";
     cin>>cols;
     int matrix1[rows][cols],matrix2[rows][cols],sumMatrix[rows][cols];
     cout<<"Enter the elements of the first matrix: "<<endl;
     for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix1[i][j];
        }
     }
     cout<<"Enter the elements of the second matrix:"<<endl;
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix2[i][j];
        }
     }
     for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            sumMatrix[i][j]=matrix1[i][j]+matrix2[i][j];
        }
     }
      cout<<"sum of matrices:"<<endl;
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<sumMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

}