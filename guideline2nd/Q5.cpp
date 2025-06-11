#include <iostream>
using namespace std;

// Function to merge two ordered arrays into a single ordered array
void mergeOrderedArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0; // i for arr1, j for arr2
    int k = 0;        // k for merged array
    // Merge elements from both arrays in order
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }
    // Copy any remaining elements from arr1
    while (i < n1) merged[k++] = arr1[i++];
    // Copy any remaining elements from arr2
    while (j < n2) merged[k++] = arr2[j++];
}

int main() {
    int n1, n2; // Variables to store sizes of the two arrays
    cout << "Enter size of first ordered array: ";
    cin >> n1;
    int arr1[100], arr2[100], merged[200]; // Arrays to store input and merged result

    // Input elements for the first array
    cout << "Enter elements of first ordered array:\n";
    for (int i = 0; i < n1; ++i) cin >> arr1[i];

    // Input elements for the second array
    cout << "Enter size of second ordered array: ";
    cin >> n2;
    cout << "Enter elements of second ordered array:\n";
    for (int i = 0; i < n2; ++i) cin >> arr2[i];

    // Merge the two arrays
    mergeOrderedArrays(arr1, n1, arr2, n2, merged);

    // Output the merged array
    cout << "Merged ordered array:\n";
    // Print merged array elements
    for (int m = 0; m < n1 + n2; m++) cout << merged[m] << " ";
    cout << endl;

    return 0;
}
