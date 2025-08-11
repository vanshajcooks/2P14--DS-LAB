#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 3, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; ) {
        if (arr[i] == arr[i + 1]) {
            
            for (int j = i + 1; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; 
        } else {
            i++;
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}