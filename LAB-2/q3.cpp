#include <iostream>
using namespace std;
int findingMissinglinear(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] != i + 1) {
            return i + 1; 
        }
    }
    return -1; 
}

int findinMissingBinary(int arr[], int size) {
    int left = 0;
    int right = size - 1;       
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] != mid + 1) {
            if (mid == 0 || arr[mid - 1] == mid) {
                return mid + 1; 
            }
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1; 
}
