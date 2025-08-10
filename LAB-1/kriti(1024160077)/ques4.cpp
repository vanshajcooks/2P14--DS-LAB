#include <iostream>
using namespace std;

void reverseArray() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void matrixMultiplication() {
    int r1, c1, r2, c2;
    cout << "Enter rows and cols for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and cols for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible\n";
        return;
    }

    int a[r1][c1], b[r2][c2], result[r1][c2] = {0};

    cout << "Enter first matrix: ";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter second matrix: ";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];

    cout << "Result matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << result[i][j] << " ";
        cout << "\n";
    }
}

void transposeMatrix() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int a[r][c], t[c][r];

    cout << "Enter matrix: ";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            t[j][i] = a[i][j];

    cout << "Transpose matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            cout << t[i][j] << " ";
        cout << "\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\nQ4 Menu:\n";
        cout << "1. Reverse an array\n";
        cout << "2. Matrix multiplication\n";
        cout << "3. Transpose of a matrix\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: reverseArray(); break;
            case 2: matrixMultiplication(); break;
            case 3: transposeMatrix(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}
