/*
Input a string of size n and update all even positions 
in the string to character 'a'.consider 0-based indexing
*/
#include<iostream>
using namespace std;
int main(){
    string s="hello this side is subham";
    int n=s.length();
    for(int i=0;i<n;i++){
        if(i%2==0){
            s[i]='a';
        }
    }
    cout<<"string:"<<s;
    return 0;
}
