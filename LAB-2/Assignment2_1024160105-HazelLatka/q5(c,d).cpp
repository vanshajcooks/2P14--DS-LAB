#include <iostream>
#define MAX 4
using namespace std;

int main() {
    int size = (MAX * (MAX + 1)) / 2; // size for triangular matrices
    int a[size];

    cout << "\nEnter elements (row major):\n";
    for (int i = 0; i < size; i++)
        cin >> a[i];

    // Print upper triangular matrix
    cout << "\nThe upper triangular matrix is...\n";
    int k = 0;
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if (i <= j) {
                cout << a[k] << " ";
                k++;
            } else {
                cout << "0 ";
            }
        }
        cout << "\n";
    }

    // Print lower triangular matrix
    cout << "\nThe lower triangular matrix is...\n";
    k = 0;
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if (i >= j) {
                cout << a[k] << " ";
                k++;
            } else {
                cout << "0 ";
            }
        }
        cout << "\n";
    }

    return 0;
}
