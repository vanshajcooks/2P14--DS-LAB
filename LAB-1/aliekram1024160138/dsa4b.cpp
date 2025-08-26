#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible\n";
        return 0;
    }

    cout << "Enter elements of first matrix:\n";
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter elements of second matrix:\n";
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            cin >> b[i][j];

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Resultant matrix:\n";
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
