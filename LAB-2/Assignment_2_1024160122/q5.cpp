#include <iostream>
using namespace std;

class DiagonalMatrix {
    int* arr;
    int n;
public:
    DiagonalMatrix(int size) {
        n = size;
        arr = new int[n]{0};
    }
    void set(int i, int j, int val) {
        if (i == j) arr[i - 1] = val;
    }
    int get(int i, int j) {
        if (i == j) return arr[i - 1];
        return 0;
    }
    ~DiagonalMatrix() { delete[] arr; }
};

class TriDiagonalMatrix {
    int* arr;
    int n;
public:
    TriDiagonalMatrix(int size) {
        n = size;
        arr = new int[3 * n - 2]{0};
    }
    void set(int i, int j, int val) {
        int diff = i - j;
        if (diff == 0)
            arr[n - 1 + diff + i - 1] = val;
        else if (diff == 1)
            arr[i - 2] = val;
        else if (diff == -1)
            arr[2 * n - 1 + i - 1] = val;
    }
    int get(int i, int j) {
        int diff = i - j;
        if (diff == 0)
            return arr[n - 1 + diff + i - 1];
        else if (diff == 1)
            return arr[i - 2];
        else if (diff == -1)
            return arr[2 * n - 1 + i - 1];
        else
            return 0;
    }
    ~TriDiagonalMatrix() { delete[] arr; }
};

class LowerTriangularMatrix {
    int* arr;
    int n;
public:
    LowerTriangularMatrix(int size) {
        n = size;
        arr = new int[n * (n + 1) / 2]{0};
    }
    void set(int i, int j, int val) {
        if (i >= j) {
            int index = (i * (i - 1)) / 2 + (j - 1);
            arr[index] = val;
        }
    }
    int get(int i, int j) {
        if (i >= j) {
            int index = (i * (i - 1)) / 2 + (j - 1);
            return arr[index];
        }
        return 0;
    }
    ~LowerTriangularMatrix() { delete[] arr; }
};

class UpperTriangularMatrix {
    int* arr;
    int n;
public:
    UpperTriangularMatrix(int size) {
        n = size;
        arr = new int[n * (n + 1) / 2]{0};
    }
    void set(int i, int j, int val) {
        if (i <= j) {
            int index = (i - 1) * n - ((i - 2) * (i - 1)) / 2 + (j - i);
            arr[index] = val;
        }
    }
    int get(int i, int j) {
        if (i <= j) {
            int index = (i - 1) * n - ((i - 2) * (i - 1)) / 2 + (j - i);
            return arr[index];
        }
        return 0;
    }
    ~UpperTriangularMatrix() { delete[] arr; }
};

class SymmetricMatrix {
    int* arr;
    int n;
public:
    SymmetricMatrix(int size) {
        n = size;
        arr = new int[n * (n + 1) / 2]{0};
    }
    void set(int i, int j, int val) {
        if (i >= j) {
            int index = (i * (i - 1)) / 2 + (j - 1);
            arr[index] = val;
        } else {
            int index = (j * (j - 1)) / 2 + (i - 1);
            arr[index] = val;
        }
    }
    int get(int i, int j) {
        if (i >= j) {
            int index = (i * (i - 1)) / 2 + (j - 1);
            return arr[index];
        } else {
            int index = (j * (j - 1)) / 2 + (i - 1);
            return arr[index];
        }
    }
    ~SymmetricMatrix() { delete[] arr; }
};

int main() {
    int n = 4;

    DiagonalMatrix dm(n);
    dm.set(1, 1, 5);
    dm.set(2, 2, 8);
    cout << dm.get(1, 1) << endl;
    cout << dm.get(1, 2) << endl;

    TriDiagonalMatrix tdm(n);
    tdm.set(1, 1, 10);
    tdm.set(1, 2, 20);
    tdm.set(2, 1, 30);
    cout << tdm.get(1, 2) << endl;
    cout << tdm.get(2, 3) << endl;

    LowerTriangularMatrix ltm(n);
    ltm.set(3, 1, 15);
    ltm.set(4, 3, 25);
    cout << ltm.get(3, 1) << endl;
    cout << ltm.get(1, 3) << endl;

    UpperTriangularMatrix utm(n);
    utm.set(1, 3, 50);
    utm.set(2, 4, 60);
    cout << utm.get(1, 3) << endl;
    cout << utm.get(3, 1) << endl;

    SymmetricMatrix sm(n);
    sm.set(1, 3, 99);
    cout << sm.get(1, 3) << endl;
    cout << sm.get(3, 1) << endl;

    return 0;
}
