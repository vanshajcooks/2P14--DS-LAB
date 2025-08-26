#include <iostream>
#define MAX 4
using namespace std;

int main() {
    int size = (MAX * (MAX + 1)) / 2; // store lower triangular part
    int a[size];

    cout << "\nEnter elements of the symmetric matrix (row-wise lower triangular part):\n";
    for (int i = 0; i < size; i++)
        cin >> a[i];

    cout << "\nThe full symmetric matrix is:\n";
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            int index;
            if (i >= j) {
                index = i * (i + 1) / 2 + j; // lower triangular element
                cout << a[index] << " ";
            } else {
                // use symmetry
                index = j * (j + 1) / 2 + i; // element from lower part
                cout << a[index] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
