/*
2) Design the logic to remove the duplicate elements from an Array and after the 
deletion the array should contain the unique elements.*/

#include <iostream>
using namespace std;

int main() {
    int arr[20] = {87, 67, 90, 56, 45, 34, 87, 98, 90, 100, 77, 87, 65, 92, 43, 50, 60, 20, 10, 5};
    int size = 20;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; 
                j--;    
            }
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) { 
        cout << arr[i] << " ";
    }

    return 0;
}
