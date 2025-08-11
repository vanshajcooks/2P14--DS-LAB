#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int n = 7;

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

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
