// Display this Ap-1,3,4,7,9...upto "n" terms
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number of terms:";
    cin>>n;
    int d;
    cout<<"enter the difference:";
    cin>>d;
    int a;
    cout<<"enter the first term:";
    cin>>a;
    cout<<"The series is: ";
    for (int i = 0; i < n; i++) {
        cout << a + i * d << " ";
    }

}