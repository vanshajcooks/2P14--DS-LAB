// Name: Prashant Narayan Verma
// Roll No: 1024160140

#include <iostream>
using namespace std;

// (a) Linear Time Solution: O(n)
int findMissingLinear(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Since array is sorted, the difference should be 1
        if (arr[i + 1] - arr[i] != 1) {
            return arr[i] + 1;
        }
    }
    return -1; // if no missing number found
}

// (b) Binary Search Solution: O(log n)
int findMissingBinary(int arr[], int n) {
    int left = 0, right = n - 2; // because array has n-1 elements

    while (left <= right) {
        int mid = (left + right) / 2;

        // In a perfect sequence, arr[i] = i+1
        if (arr[mid] == mid + 1) {
            left = mid + 1; // missing number is on right side
        } else {
            right = mid - 1; // missing number is on left side
        }
    }
    return left + 1; // the missing number
}

int main() {
    // Example: n = 6, so numbers should be 1 to 6
    // But one number is missing
    int arr[] = {1, 2, 3, 5, 6}; 
    int n = 6; // total numbers should be from 1 to 6

    cout << "Array elements: ";
    for (int i = 0; i < n - 1; i++) cout << arr[i] << " ";
    cout << endl;

    int missingLinear = findMissingLinear(arr, n);
    cout << "Missing Number (Linear Search): " << missingLinear << endl;

    int missingBinary = findMissingBinary(arr, n);
    cout << "Missing Number (Binary Search): " << missingBinary << endl;

    return 0;
}
