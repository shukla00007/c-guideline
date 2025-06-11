//  If cost price and selling price if an item is input
//  throught the keyboard, write a program to determine
//  whether the seller has made profit or incurred loss 
//  or no profit no loss. Also determine how much profit 
//  he made or loss he incurred.
#include <iostream>
using namespace std;
int main(){
    int cp;
    cout << "Enter the cost price: ";
    cin >> cp;
    int sp;
    cout << "Enter the selling price: ";
    cin >> sp;
    if (sp>cp)
    {
        cout << "Profit:"<<sp-cp<<endl;
    }
    else if (sp<cp)
    {
        cout << "Loss:"<<cp-sp<<endl;
    }
    else
    {
        cout << "No profit no loss." << endl;
    }
}