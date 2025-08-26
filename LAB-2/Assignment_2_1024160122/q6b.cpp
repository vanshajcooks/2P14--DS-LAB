#include <iostream>
using namespace std;

struct Term {
    int row, col, val;
};

void addSparse(Term a[], Term b[], Term c[]) {
    if (a[0].row != b[0].row || a[0].col != b[0].col) return;

    int i = 1, j = 1, k = 1;
    c[0].row = a[0].row;
    c[0].col = a[0].col;

    while (i <= a[0].val && j <= b[0].val) {
        if (a[i].row < b[j].row || (a[i].row == b[j].row && a[i].col < b[j].col))
            c[k++] = a[i++];
        else if (b[j].row < a[i].row || (b[j].row == a[i].row && b[j].col < a[i].col))
            c[k++] = b[j++];
        else {
            c[k] = a[i];
            c[k++].val = a[i++].val + b[j++].val;
        }
    }
    while (i <= a[0].val) c[k++] = a[i++];
    while (j <= b[0].val) c[k++] = b[j++];
    c[0].val = k - 1;
}

int main() {
    Term a[10] = {{3, 3, 3}, {0, 0, 5}, {1, 1, 3}, {2, 0, 6}};
    Term b[10] = {{3, 3, 2}, {0, 2, 8}, {1, 1, 4}};
    Term c[20];
    addSparse(a, b, c);

    for (int i = 0; i <= c[0].val; i++)
        cout << c[i].row << " " << c[i].col << " " << c[i].val << endl;
}
