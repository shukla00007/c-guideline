#include <iostream>
using namespace std;

// Function to remove duplicates from a sorted array and print unique elements
void remove(int arr[], int n)
{
    // If array has 0 or 1 element, just print the array
    if (n == 0 || n == 1) {
        cout << arr[0]; // Print the only element (if n==1)
    }
    else {
        // Loop through the array
        for (int i = 0; i < n; i++)
        {
            // If current element is not equal to the next element, print it
            if (arr[i] != arr[i + 1]) {
                cout << arr[i];
            }
        }
    }
}

int main()
{
    // Initialize the array with duplicate elements (sorted)
    int arr[] = {1, 2, 2, 3, 3,};
    // Calculate the length of the array
    int length = sizeof(arr) / sizeof(arr[0]);
    // Call the remove function to print unique elements
    remove(arr, length);
}
