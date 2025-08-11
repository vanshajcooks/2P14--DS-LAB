#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    return newSize;
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
