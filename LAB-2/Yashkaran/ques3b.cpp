#include<iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int start = 0;
    int end = n - 1;
    int mid;

    while(start <= end) {
        mid = start + (end - start) / 2;

        if(arr[mid] == mid + 1) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    cout << "The first missing positive integer is: " << start + 1 << endl;

    return 0;
}

