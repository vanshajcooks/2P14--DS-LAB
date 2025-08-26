#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5;
    cout << "original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    for (int i = 0; i < n / 2; i++) swap(arr[i], arr[n - i - 1]);
    cout << "\nreversed array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int c[2][2] = {0};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                c[i][j] += a[i][k] * b[k][j];
    cout << "\nmatrix multiplication result:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) cout << c[i][j] << " ";
        cout << endl;
    }

    cout << "transpose of first matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) cout << a[j][i] << " ";
        cout << endl;
    }
}
