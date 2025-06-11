#include<iostream>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char* agrv[])
{
    int n;
    // Check if the number of terms is provided as a command-line argument
    if(argc > 1){
        n = stoi(agrv[1]); // Convert the argument to integer
    }
    else {
        // Prompt the user to enter the number of terms if not provided
        cout << "Enter the total number of terms: ";
        cin >> n;
    }

    double sum=0.0;
    // Calculate the sum of the series: sum += pow(-1, i+1) / pow(i, i)
    for(int i=1;i<=n;i++)
    {
        sum+=pow(-1,i+1)/pow(i,i);
    }
    // Output the result
    cout<<"sum of the above entered term: "<<sum;
    return 0;
}