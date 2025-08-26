//  Write a program to implement the following operations on a Sparse Matrix, assuming the matrix is represented using a triplet.
// (a) Transpose of a matrix.
#include <iostream>
using namespace std;
int main() {
    int n = 4; // size of the matrix
    int sparseMatrix[4][3] = {
        {0, 0, 5},
        {1, 2, 8},
        {2, 1, 6},
        {3, 3, 9}
    }; // triplet representation of a sparse matrix

    cout << "Transpose of Sparse Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        cout << sparseMatrix[i][1] << " " << sparseMatrix[i][0] << " " << sparseMatrix[i][2] << endl;
    }
    return 0;
}
// (b) Addition of two matrices.
// #include <iostream>
// using namespace std;
int main() {
    int n = 4; // size of the matrix
    int sparseMatrix1[4][3] = {
        {0, 0, 5},
        {1, 2, 8},
        {2, 1, 6},
        {3, 3, 9}
    }; // first sparse matrix in triplet form

    int sparseMatrix2[4][3] = {
        {0, 0, 3},
        {1, 2, 4},
        {2, 1, 7},
        {3, 3, 2}
    }; // second sparse matrix in triplet form

    cout << "Addition of Sparse Matrices:" << endl;
    for (int i = 0; i < n; i++) {
        cout << sparseMatrix1[i][0] << " " << sparseMatrix1[i][1] << " " 
             << sparseMatrix1[i][2] + sparseMatrix2[i][2] << endl;
    }
    return 0;
}
// (c) Multiplication of two matrices.
#include <iostream>
using namespace std;
int main() {
    int n = 4; // size of the matrix
    int sparseMatrix1[4][3] = {
        {0, 0, 5},
        {1, 2, 8},
        {2, 1, 6},
        {3, 3, 9}
    }; // first sparse matrix in triplet form

    int sparseMatrix2[4][3] = {
        {0, 0, 3},
        {1, 2, 4},
        {2, 1, 7},
        {3, 3, 2}
    }; // second sparse matrix in triplet form

    cout << "Multiplication of Sparse Matrices:" << endl;
    for (int i = 0; i < n; i++) {
        cout << sparseMatrix1[i][0] << " " << sparseMatrix2[i][1] << " "
             << sparseMatrix1[i][2] * sparseMatrix2[i][2] << endl;
    }
    return 0;
}