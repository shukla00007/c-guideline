// input a string of length n and count all the vowels iin the given string 
#include<iostream>
using namespace std;
int main(){
    string s="Cow is an animal with four legs";
    int count=0;
    for (int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    cout<<count;
}