#include <iostream>
using namespace std;

int countInversions(int arr[], int n) {
    int inv_count = 0;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i] > arr[j]) inv_count++;
        }
    }
    return inv_count;
}

int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Number of inversions: " << countInversions(arr, n) << endl;
    return 0;
}
