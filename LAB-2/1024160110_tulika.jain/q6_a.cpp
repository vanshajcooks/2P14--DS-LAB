#include <iostream>
using namespace std;

void transpose(int a[20][3], int b[20][3]) {
    int i, j, k;
    b[0][0] = a[0][1];
    b[0][1] = a[0][0];
    b[0][2] = a[0][2];

    k = 1;
    for (i = 0; i < a[0][1]; i++) {   // loop over columns of original
        for (j = 1; j <= a[0][2]; j++) {
            if (a[j][1] == i) {
                b[k][0] = a[j][1];
                b[k][1] = a[j][0];
                b[k][2] = a[j][2];
                k++;
            }
        }
    }
}

void print(int a[20][3]) {
    for (int i = 0; i <= a[0][2]; i++) {
        cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << endl;
    }
}

int main() {
    int a[20][3] = {
        {4, 5, 4},  // 4x5 matrix, 4 nonzero
        {0, 1, 5},
        {1, 3, 8},
        {2, 0, 3},
        {3, 2, 6}
    };

    int b[20][3];
    cout << "Original Triplet:\n";
    print(a);

    transpose(a, b);
    cout << "\nTranspose Triplet:\n";
    print(b);
}
