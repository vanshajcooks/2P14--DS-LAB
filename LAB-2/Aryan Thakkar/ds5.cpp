#include<iostream>
using namespace std;

// (a) Diagonal Matrix
void diagonal_matrix() {
    int n;
    cout << "Enter size of diagonal matrix: ";
    cin >> n;
    int A[n]; // Only n elements needed
    for(int i=0; i<n; i++) {
        cout << "Enter element at (" << i+1 << "," << i+1 << "): ";
        cin >> A[i];
    }
    cout << "Diagonal Matrix:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j) cout << A[i] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

// (b) Tri-diagonal Matrix
void tridiagonal_matrix() {
    int n;
    cout << "Enter size of tri-diagonal matrix: ";
    cin >> n;
    int A[3*n-2]; // 3n-2 elements
    for(int i=0; i<3*n-2; i++) A[i]=0;
    cout << "Enter non-zero elements row-wise:\n";
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            int x;
            if(i-j==1) { // Lower diagonal
                cout << "Enter element at (" << i << "," << j << "): ";
                cin >> x;
                A[i-2] = x;
            } else if(i-j==0) { // Main diagonal
                cout << "Enter element at (" << i << "," << j << "): ";
                cin >> x;
                A[n-1+i-1] = x;
            } else if(i-j==-1) { // Upper diagonal
                cout << "Enter element at (" << i << "," << j << "): ";
                cin >> x;
                A[2*n-1+i-1] = x;
            }
        }
    }
    cout << "Tri-diagonal Matrix:\n";
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i-j==1) cout << A[i-2] << " ";
            else if(i-j==0) cout << A[n-1+i-1] << " ";
            else if(i-j==-1) cout << A[2*n-1+i-1] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

// (c) Lower Triangular Matrix
void lower_triangular_matrix() {
    int n;
    cout << "Enter size of lower triangular matrix: ";
    cin >> n;
    int A[n*(n+1)/2];
    int k=0;
    cout << "Enter non-zero elements row-wise:\n";
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cin >> A[k++];
        }
    }
    cout << "Lower Triangular Matrix:\n";
    k=0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i>=j) cout << A[i*(i-1)/2 + (j-1)] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

// (d) Upper Triangular Matrix
void upper_triangular_matrix() {
    int n;
    cout << "Enter size of upper triangular matrix: ";
    cin >> n;
    int A[n*(n+1)/2];
    int k=0;
    cout << "Enter non-zero elements row-wise:\n";
    for(int i=1; i<=n; i++) {
        for(int j=i; j<=n; j++) {
            cin >> A[k++];
        }
    }
    cout << "Upper Triangular Matrix:\n";
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i<=j) cout << A[(j*(j-1))/2 + (i-1)] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

// (e) Symmetric Matrix
void symmetric_matrix() {
    int n;
    cout << "Enter size of symmetric matrix: ";
    cin >> n;
    int A[n*(n+1)/2];
    cout << "Enter lower triangle elements row-wise:\n";
    int k=0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cin >> A[k++];
        }
    }
    cout << "Symmetric Matrix:\n";
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i>=j) cout << A[i*(i-1)/2 + (j-1)] << " ";
            else cout << A[j*(j-1)/2 + (i-1)] << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "1. Diagonal Matrix\n";
    cout << "2. Tri-diagonal Matrix\n";
    cout << "3. Lower Triangular Matrix\n";
    cout << "4. Upper Triangular Matrix\n";
    cout << "5. Symmetric Matrix\n";
    cout << "Enter your choice: ";
    int ch;
    cin >> ch;
    switch(ch) {
        case 1: diagonal_matrix(); break;
        case 2: tridiagonal_matrix(); break;
        case 3: lower_triangular_matrix(); break;
        case 4: upper_triangular_matrix(); break;
        case 5: symmetric_matrix(); break;
        default: cout << "Invalid choice\n";
    }
    return 0;
}