#include <iostream>
using namespace std;

int main() {
    // Sparse matrix 1
    int a[3][3] = {{5, 0, 8}, {0, 0, 0}, {0, 3, 0}};
    // Sparse matrix 2
    int b[3][3] = {{0, 0, 2}, {0, 0, 0}, {7, 4, 0}};
    int rows = 3, cols = 3;

    cout << "Original Matrix 1 (triplet form):\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (a[i][j] != 0)
                cout << i << " " << j << " " << a[i][j] << "\n";

    cout << "\nOriginal Matrix 2 (triplet form):\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (b[i][j] != 0)
                cout << i << " " << j << " " << b[i][j] << "\n";

    // 1. Transpose of Matrix 1
    cout << "\nTranspose of Matrix 1 (triplet form):\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (a[i][j] != 0)
                cout << j << " " << i << " " << a[i][j] << "\n";

    // 2. Addition
    cout << "\nAddition of Matrix 1 and Matrix 2 (triplet form):\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (a[i][j] + b[i][j] != 0)
                cout << i << " " << j << " " << a[i][j] + b[i][j] << "\n";

    // 3. Multiplication
    cout << "\nMultiplication of Matrix 1 and Matrix 2 (triplet form):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int val = 0;
            for (int k = 0; k < cols; k++)
                val += a[i][k] * b[k][j];
            if (val != 0)
                cout << i << " " << j << " " << val << "\n";
        }
    }

    return 0;
}
