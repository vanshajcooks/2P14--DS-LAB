// Name: Prashant Narayan Verma
// Roll No: 1024160140

#include <iostream>
#include <set>  // for set data structure
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Use set to store distinct elements
    set<int> distinct;
    for (int i = 0; i < n; i++) {
        distinct.insert(arr[i]);
    }

    cout << "Total number of distinct elements = " << distinct.size() << endl;

    return 0;
}
