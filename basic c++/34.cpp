#include<iostream>
using namespace std;
main(){
    // int i=10;
    // while (i=20)
    // printf("\nA computer buff!");
    int x=4,y=0;
    while(x>=0){
        x--;
        y++;
        if(x==y)
            continue;
        else
            cout<<x<<" "<<y<<endl;
    }
}