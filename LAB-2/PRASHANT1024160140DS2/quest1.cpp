// Name: Prashant Narayan Verma
// Roll No: 1024160140

#include <iostream>
using namespace std;

// Function to implement Binary Search
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;  // middle element

        if (arr[mid] == key) {
            return mid;  // element found
        }
        else if (arr[mid] < key) {
            left = mid + 1;  // search in right half
        }
        else {
            right = mid - 1; // search in left half
        }
    }
    return -1; // element not found
}

int main() {
    int n, key;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

