// Space required to store any two-dimensional array is 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑟𝑜𝑤𝑠 × 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ
// 𝑐𝑜𝑙𝑢𝑚𝑛𝑠. Assuming array is used to store elements of the following matrices, implement an efficient way that reduces the space requirement.
// (a) Diagonal Matrix.

#include <iostream>
using namespace std;
int main() {
    int n = 4; // size of the matrix
    int A[4] = {1, 2, 3, 4}; // diagonal elements
    cout << "Diagonal Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << A[i] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}


// (b) Tri-diagonal Matrix.

#include <iostream>
using namespace std;        
int main() {
    int n = 4; // size of the matrix
    int A[4] = {1, 2, 3, 4}; // diagonal elements
    cout << "Tri-diagonal Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i == j - 1 || i == j + 1) cout << A[i] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}

// (c) Lower triangular Matrix.

#include <iostream>
using namespace std;
int main() {
    int n = 4; // size of the matrix
    int A[4] = {1, 2, 3, 4}; // lower triangular elements
    cout << "Lower Triangular Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) cout << A[i] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}
// (d) Upper triangular Matrix.

#include <iostream>
using namespace std;
int main() {
    int n = 4; // size of the matrix
    int A[4] = {1, 2, 3, 4}; // upper triangular elements
    cout << "Upper Triangular Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) cout << A[j] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}
// (e) Symmetric Matrix

#include <iostream>
using namespace std;    
int main() {
    int n = 4; // size of the matrix
    int A[4][4] = {{1, 2, 3, 4}, {2, 5, 6, 7}, {3, 6, 8, 9}, {4, 7, 9, 10}}; // symmetric elements
    cout << "Symmetric Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}