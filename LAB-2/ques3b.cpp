#include <iostream>
using namespace std;

int main() {
    int start = 0;
    int end = 7;
    int a;
    int index = -1; 
    int arr[8] = {1, 2, 3, 4, 56, 76, 97, 23};

    cout << "element to find = ";
    cin >> a;

    for (int i = 0; i <= 7; i++) {
        for (int j = i + 1; j <= 7; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i <= 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    while (start <= end) {
        int middle = (start + end) / 2;

        if (arr[middle] == a) {
            index = middle;
            break;
        } else if (arr[middle] > a) {
            end = middle - 1;
        } else {
            start = middle + 1;
        }
    }

    if (index != -1)
        cout << "Element " << a << " is found at index " << index << endl;
    else
        cout << "Element " << a << " not found in the array." << endl;

    return 0;
}
