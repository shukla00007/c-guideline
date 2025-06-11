#include<iostream>
using namespace std;
int xorOr(int arr[], int N)
{
    // Store the count of odds & evens at odd
    // and even indices respectively
    int evens = 0, odds = 0;

    // Traverse the array to count even/odd
    for (int i = 0; i < N; i++) {
        if ((i + 1) % 2 == 0
            && arr[i] % 2 == 0)
            evens += arr[i];
        else if ((i + 1) % 2 != 0
                 && arr[i] % 2 != 0)
            odds += arr[i];
    }

    return abs(odds - evens);
}

// Driver Code
int main()
{
    int arr[] = { 3, 4, 1, 5 };
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << xorOr(arr, N);
    return 0;
}