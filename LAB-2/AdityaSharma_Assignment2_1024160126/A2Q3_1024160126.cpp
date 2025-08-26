// Design the Logic to Find a Missing Number in a Sorted Array. Given an array of n-1 distinct integers in the range of 1 to n, find the missing number in it in a Sorted Array
// (a) Linear time

#include <iostream>
using namespace std;

int findMissingLinear(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) return i + 1;
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,5,6};
    int n = 5;
    cout << "Missing number = " << findMissingLinear(arr, n);
}

// (b) Using binary search

int findMissingBinary(int arr[], int n) {
    int low = 0, high = n - 2; 
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == mid + 1) {
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    return low + 1; 
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;
    cout << "Missing Number (Binary Search): " << findMissingBinary(arr, n) << endl;
    return 0;
}
