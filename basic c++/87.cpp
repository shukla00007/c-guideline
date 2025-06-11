#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
    string s="subham";
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;
    cout<<s<<endl;
    int n=s.length();
    // int i=0;
    // int j=n/2-1;
    // while(i<j){
    //     char temp=s[i];
    //     s[i]=s[j];
    //     s[j]=temp;
    //     i++;
    //     j--;


    // }
    reverse(s.begin()+2,s.begin()+6);
    cout<<s<<endl;



}