/*4) Implement the logic to
a. Reverse the elements of an array*/
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nReversed array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
