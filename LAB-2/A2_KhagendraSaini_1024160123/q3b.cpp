#include <iostream>
using namespace std;

int binarymissing(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] != mid + 1) {
            if (mid == 0 || arr[mid - 1] == mid)
                return mid + 1;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,9};

    cout << "Missing number: " << binarymissing(arr,9);

    return 0;
}
