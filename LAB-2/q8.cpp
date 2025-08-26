#include <iostream>
using namespace std;

int countDistinct(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        bool isDistinct = true;
        // check if arr[i] appeared before
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct) count++;
    }
    return count;
}

int main() {
    int arr[] = {4, 2, 2, 8, 4, 6, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Total distinct elements: " << countDistinct(arr, n) << endl;
    return 0;
}
