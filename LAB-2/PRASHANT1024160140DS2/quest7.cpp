// Name: Prashant Narayan Verma
// Roll No: 1024160140

#include <iostream>
using namespace std;

// Merge function that also counts inversions
long long mergeAndCount(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    long long invCount = 0;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
            invCount += (n1 - i); // Remaining elements in L[] are > R[j]
        }
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    return invCount;
}

// Recursive merge sort that counts inversions
long long mergeSortAndCount(int arr[], int left, int right) {
    long long invCount = 0;
    if (left < right) {
        int mid = (left + right) / 2;
        invCount += mergeSortAndCount(arr, left, mid);
        invCount += mergeSortAndCount(arr, mid + 1, right);
        invCount += mergeAndCount(arr, left, mid, right);
    }
    return invCount;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    long long inversionCount = mergeSortAndCount(arr, 0, n - 1);

    cout << "Number of inversions = " << inversionCount << endl;
    return 0;
}
