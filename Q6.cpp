#include <iostream>
using namespace std;

// Recursive Binary Search
int binarySearchRecursive(int arr[], int left, int right, int key) {
    if (left > right)
        return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binarySearchRecursive(arr, left, mid - 1, key);
    else
        return binarySearchRecursive(arr, mid + 1, right, key);
}

// Iterative Binary Search
int binarySearchIterative(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100]; // assuming max 100 elements
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    // Recursive
    int recResult = binarySearchRecursive(arr, 0, n - 1, key);
    if (recResult != -1)
        cout << "Element found at index (recursive): " << recResult << endl;
    else
        cout << "Element not found (recursive)." << endl;

    // Iterative
    int iterResult = binarySearchIterative(arr, n, key);
    if (iterResult != -1)
        cout << "Element found at index (iterative): " << iterResult << endl;
    else
        cout << "Element not found (iterative)." << endl;

    return 0;
}
