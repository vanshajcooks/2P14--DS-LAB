#include <iostream>
using namespace std;

int main() {
    int arr[50], n, i, pos, val;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(i=0; i<n; i++) cin >> arr[i];

    cout << "Array: ";
    for(i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Enter position to insert: ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;

    for(i=n; i>=pos; i--) arr[i] = arr[i-1];
    arr[pos-1] = val;
    n++;

    cout << "After insertion: ";
    for(i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Enter position to delete: ";
    cin >> pos;

    for(i=pos-1; i<n-1; i++) arr[i] = arr[i+1];
    n--;

    cout << "After deletion: ";
    for(i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

