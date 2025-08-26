// Name: Prashant Narayan Verma
// Roll No: 1024160140

#include <iostream>
using namespace std;

#define MAX 100

// Triplet form: arr[k][0] = row, arr[k][1] = col, arr[k][2] = value

// Display triplet
void display(int A[MAX][3]) {
    int n = A[0][2]; // number of non-zero elements
    cout << "Row Col Val\n";
    for (int i = 0; i <= n; i++) {
        cout << A[i][0] << "   " << A[i][1] << "   " << A[i][2] << endl;
    }
}

// (a) Transpose of sparse matrix
void transpose(int A[MAX][3], int B[MAX][3]) {
    int rows = A[0][0], cols = A[0][1], n = A[0][2];
    B[0][0] = cols; B[0][1] = rows; B[0][2] = n;

    int k = 1;
    for (int col = 0; col < cols; col++) {
        for (int i = 1; i <= n; i++) {
            if (A[i][1] == col) {
                B[k][0] = A[i][1];
                B[k][1] = A[i][0];
                B[k][2] = A[i][2];
                k++;
            }
        }
    }
}

// (b) Addition of two sparse matrices
void addSparse(int A[MAX][3], int B[MAX][3], int C[MAX][3]) {
    if (A[0][0] != B[0][0] || A[0][1] != B[0][1]) {
        cout << "Addition not possible: dimensions mismatch\n";
        return;
    }

    int nA = A[0][2], nB = B[0][2];
    int i=1, j=1, k=1;

    C[0][0] = A[0][0];
    C[0][1] = A[0][1];

    while (i <= nA && j <= nB) {
        if (A[i][0] < B[j][0] || (A[i][0] == B[j][0] && A[i][1] < B[j][1])) {
            C[k][0] = A[i][0]; C[k][1] = A[i][1]; C[k][2] = A[i][2];
            i++; k++;
        } else if (B[j][0] < A[i][0] || (B[j][0] == A[i][0] && B[j][1] < A[i][1])) {
            C[k][0] = B[j][0]; C[k][1] = B[j][1]; C[k][2] = B[j][2];
            j++; k++;
        } else { // same position
            int sum = A[i][2] + B[j][2];
            if (sum != 0) {
                C[k][0] = A[i][0]; C[k][1] = A[i][1]; C[k][2] = sum;
                k++;
            }
            i++; j++;
        }
    }
    // Copy remaining elements
    while (i <= nA) {
        C[k][0] = A[i][0]; C[k][1] = A[i][1]; C[k][2] = A[i][2]; i++; k++;
    }
    while (j <= nB) {
        C[k][0] = B[j][0]; C[k][1] = B[j][1]; C[k][2] = B[j][2]; j++; k++;
    }

    C[0][2] = k-1; // non-zero count
}

// (c) Multiplication of two sparse matrices
void multiplySparse(int A[MAX][3], int B[MAX][3], int C[MAX][3]) {
    if (A[0][1] != B[0][0]) {
        cout << "Multiplication not possible: dimensions mismatch\n";
        return;
    }

    int rows = A[0][0], cols = B[0][1];
    int temp[MAX][3]; 
    temp[0][0] = rows; temp[0][1] = cols; temp[0][2] = 0;
    int k = 1;

    // Multiply logic
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int sum = 0;
            for (int p = 1; p <= A[0][2]; p++) {
                if (A[p][0] == i) {
                    for (int q = 1; q <= B[0][2]; q++) {
                        if (B[q][0] == A[p][1] && B[q][1] == j) {
                            sum += A[p][2] * B[q][2];
                        }
                    }
                }
            }
            if (sum != 0) {
                temp[k][0] = i;
                temp[k][1] = j;
                temp[k][2] = sum;
                k++;
            }
        }
    }
    temp[0][2] = k-1;

    // Copy result
    for (int i = 0; i <= temp[0][2]; i++) {
        C[i][0] = temp[i][0];
        C[i][1] = temp[i][1];
        C[i][2] = temp[i][2];
    }
}

int main() {
    int A[MAX][3] = {
        {3, 3, 3},   // rows, cols, non-zeros
        {0, 0, 5},
        {1, 1, 8},
        {2, 2, 9}
    };

    int B[MAX][3] = {
        {3, 3, 3},
        {0, 1, 3},
        {1, 2, 7},
        {2, 0, 6}
    };

    cout << "Matrix A (Triplet Form):\n";
    display(A);

    cout << "\nMatrix B (Triplet Form):\n";
    display(B);

    // (a) Transpose
    int T[MAX][3];
    transpose(A, T);
    cout << "\nTranspose of A:\n";
    display(T);

    // (b) Addition
    int C[MAX][3];
    addSparse(A, B, C);
    cout << "\nA + B (Addition):\n";
    display(C);

    // (c) Multiplication
    int M[MAX][3];
    multiplySparse(A, B, M);
    cout << "\nA * B (Multiplication):\n";
    display(M);

    return 0;
}
