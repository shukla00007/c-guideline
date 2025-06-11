// Given a point(x,y),write a program to find out if it lies in the 1st quadrant, 
// 2nd quadrant, 3rd quadrant or 4th quadrant on the x-axis, y-axis or at the origin,
//viz.(0,0).
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the x-coordinate: ";
    cin>>x;
    cout<<"Enter the y-coordinate:";
    cin>>y;
    if (x>0 && y>0){
        cout<<"The point ("<<x<<","<<y<<") lies in the 1st quadrant."<<endl;
    } 
    else if (x<0 && y>0){
        cout<<"The point ("<<x<<","<<y<<") lies in the 2nd quadrant."<<endl;
    } 
    else if (x<0 && y<0){
        cout<<"The point ("<<x<<","<<y<<") lies in the 3rd quadrant."<<endl;
    } 
    else if (x>0 && y<0){
        cout<<"The point ("<<x<<","<<y<<") lies in the 4th quadrant."<<endl;
    } 
    else if (x==0 && y==0){
        cout<<"The point ("<<x<<","<<y<<") is at the origin."<<endl;
    } 
    else if (x==0){
        cout<<"The point ("<<x<<","<<y<<") lies on the y-axis."<<endl;
    } 
    else {
        cout<<"The point ("<<x<<","<<y<<") lies on the x-axis."<<endl;
    }
}