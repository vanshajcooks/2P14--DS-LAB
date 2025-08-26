#include <iostream>
using namespace std;

void add(int a[20][3], int b[20][3], int c[40][3]) {
    if (a[0][0] != b[0][0] || a[0][1] != b[0][1]) {
        cout << "Addition not possible\n";
        return;
    }
    int i=1, j=1, k=1;
    c[0][0] = a[0][0];
    c[0][1] = a[0][1];
    while (i <= a[0][2] && j <= b[0][2]) {
        if (a[i][0] < b[j][0] || (a[i][0]==b[j][0] && a[i][1] < b[j][1]))
            c[k][0]=a[i][0], c[k][1]=a[i][1], c[k][2]=a[i][2], i++, k++;
        else if (b[j][0] < a[i][0] || (b[j][0]==a[i][0] && b[j][1] < a[i][1]))
            c[k][0]=b[j][0], c[k][1]=b[j][1], c[k][2]=b[j][2], j++, k++;
        else {
            c[k][0]=a[i][0]; 
            c[k][1]=a[i][1];
            c[k][2]=a[i][2] + b[j][2];
            if (c[k][2]!=0) k++;
            i++, j++;
        }
    }
    while (i<=a[0][2]) c[k][0]=a[i][0], c[k][1]=a[i][1], c[k][2]=a[i][2], i++, k++;
    while (j<=b[0][2]) c[k][0]=b[j][0], c[k][1]=b[j][1], c[k][2]=b[j][2], j++, k++;

    c[0][2] = k-1;
}

void print(int a[40][3]) {
    for (int i = 0; i <= a[0][2]; i++) {
        cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << endl;
    }
}

int main() {
    int a[20][3] = {
        {3, 3, 3},  // 3x3 matrix, 3 nonzero
        {0, 0, 5},
        {1, 1, 8},
        {2, 2, 3}
    };

    int b[20][3] = {
        {3, 3, 3}, 
        {0, 1, 2},
        {1, 1, 4},
        {2, 0, 6}
    };

    int c[40][3];
    cout << "Matrix A:\n"; print(a);
    cout << "\nMatrix B:\n"; print(b);

    add(a, b, c);
    cout << "\nA + B:\n"; print(c);
}
