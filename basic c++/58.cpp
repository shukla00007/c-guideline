// recursion
//function calling itself
#include <iostream>
using namespace std;
void greet(){
    cout<<"hey"<<endl;
    greet();//
}
int main(){
    greet();
}
/*
1.repetition
2.infinite loop
*/