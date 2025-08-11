#include <iostream>
using namespace std;

int main() {
    int a[10][10], transpose[10][10];
    int rows, cols, i, j;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter elements of the matrix:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
