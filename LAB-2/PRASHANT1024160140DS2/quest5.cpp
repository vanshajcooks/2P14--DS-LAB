// Name: Prashant Narayan Verma
// Roll No: 1024160140

#include <iostream>
using namespace std;

// (a) Diagonal Matrix
class Diagonal {
    int *A, n;
public:
    Diagonal(int size) {
        n = size;
        A = new int[n];
    }
    void set(int i, int j, int x) {
        if (i == j) A[i-1] = x;
    }
    int get(int i, int j) {
        if (i == j) return A[i-1];
        else return 0;
    }
    void display() {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                if (i == j) cout << A[i-1] << " ";
                else cout << "0 ";
            }
            cout << endl;
        }
    }
};

// (c) Lower Triangular Matrix
class LowerTriangular {
    int *A, n;
public:
    LowerTriangular(int size) {
        n = size;
        A = new int[n*(n+1)/2];
    }
    void set(int i, int j, int x) {
        if (i >= j) A[i*(i-1)/2 + (j-1)] = x;
    }
    int get(int i, int j) {
        if (i >= j) return A[i*(i-1)/2 + (j-1)];
        else return 0;
    }
    void display() {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                cout << get(i,j) << " ";
            }
            cout << endl;
        }
    }
};

// (d) Upper Triangular Matrix
class UpperTriangular {
    int *A, n;
public:
    UpperTriangular(int size) {
        n = size;
        A = new int[n*(n+1)/2];
    }
    void set(int i, int j, int x) {
        if (i <= j) A[(j*(j-1))/2 + (i-1)] = x;
    }
    int get(int i, int j) {
        if (i <= j) return A[(j*(j-1))/2 + (i-1)];
        else return 0;
    }
    void display() {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                cout << get(i,j) << " ";
            }
            cout << endl;
        }
    }
};

// For (b) and (e), similar mapping logic applies (tri-diagonal and symmetric).

int main() {
    int n = 4;
    cout << "Demonstrating Diagonal Matrix (4x4):\n";
    Diagonal d(4);
    d.set(1,1,5); d.set(2,2,8); d.set(3,3,9); d.set(4,4,12);
    d.display();

    cout << "\nDemonstrating Lower Triangular Matrix (4x4):\n";
    LowerTriangular l(4);
    l.set(1,1,5); l.set(2,1,3); l.set(2,2,8); l.set(3,1,7);
    l.set(3,2,6); l.set(3,3,4); l.set(4,1,2); l.set(4,2,9);
    l.set(4,3,1); l.set(4,4,11);
    l.display();

    cout << "\nDemonstrating Upper Triangular Matrix (4x4):\n";
    UpperTriangular u(4);
    u.set(1,1,5); u.set(1,2,8); u.set(1,3,7); u.set(1,4,6);
    u.set(2,2,3); u.set(2,3,4); u.set(2,4,9);
    u.set(3,3,2); u.set(3,4,1);
    u.set(4,4,11);
    u.display();

    return 0;
}
