#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int &n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n - 1; k++) arr[k] = arr[k + 1];
                n--; 
            } else {
                j++; 
            }
        }
    }
}

void displayArray(int arr[], int n) {
    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "\nOriginal ";
    displayArray(arr, n);

    removeDuplicates(arr, n);

    cout << "After removing duplicates ";
    displayArray(arr, n);

    return 0;
}

