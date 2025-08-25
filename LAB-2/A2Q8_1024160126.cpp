// Write a program to count the total number of distinct elements in an array of length n.
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    sort(arr, arr+n);

    int distinct = 1; // first element is always distinct
    for(int i=1;i<n;i++) {
        if(arr[i] != arr[i-1]) distinct++;
    }

    cout << "Total distinct elements = " << distinct << endl;
    return 0;
}
