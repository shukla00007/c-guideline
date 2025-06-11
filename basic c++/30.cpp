// while loop
// alternative to the for loop 
//int i=0;
//while(i<10){
//    code
//    i++;
//}
#include <iostream>
using namespace std;
int main() {
    
    int n = 1; // Initialize with 1, as it's the lowest factor other than itself
    while(n<=10) {
        cout<<n<<endl;
        n++; // Decrement i to check the next lower number
    }
}
     
