#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (i = 0; i < n; i++) cin >> arr[i];

    for (i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "Reversed array: ";
    for (i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
    return 0;
}
