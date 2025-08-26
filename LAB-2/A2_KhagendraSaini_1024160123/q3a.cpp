#include <iostream>
using namespace std;

int linearmissing(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,6,7,8,9};

    cout << "Missing number: " << linearmissing(arr,9);

    return 0;
}