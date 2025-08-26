#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10] = {0};
    int r1, c1, r2, c2;

    cout << "Enter rows and cols for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and cols for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible.";
        return 0;
    }

    cout << "Enter first matrix:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Result matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
