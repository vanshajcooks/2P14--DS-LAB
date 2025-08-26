#include <iostream>
#include <algorithm>  // for sort
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i]; 
    sort(arr, arr + n);

    int distinctCount = 1; 
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            distinctCount++;
        }
    }

    cout << "Total distinct elements: " << distinctCount << endl;

    return 0;
}

