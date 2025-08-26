#include <iostream>
using namespace std;

struct Term {
    int row, col, val;
};

void multiplySparse(Term a[], Term b[], Term c[]) {
    if (a[0].col != b[0].row) return;

    Term bT[20];
    int k = 1;
    bT[0].row = b[0].col;
    bT[0].col = b[0].row;
    bT[0].val = b[0].val;

    for (int i = 0; i < b[0].col; i++) {
        for (int j = 1; j <= b[0].val; j++) {
            if (b[j].col == i) {
                bT[k].row = b[j].col;
                bT[k].col = b[j].row;
                bT[k].val = b[j].val;
                k++;
            }
        }
    }

    int cIndex = 1;
    c[0].row = a[0].row;
    c[0].col = b[0].col;

    for (int i = 0; i < a[0].row; i++) {
        for (int j = 0; j < bT[0].row; j++) {
            int sum = 0;
            for (int p = 1; p <= a[0].val; p++) {
                if (a[p].row == i) {
                    for (int q = 1; q <= bT[0].val; q++) {
                        if (bT[q].row == j && bT[q].col == a[p].col) {
                            sum += a[p].val * bT[q].val;
                        }
                    }
                }
            }
            if (sum != 0) {
                c[cIndex].row = i;
                c[cIndex].col = j;
                c[cIndex].val = sum;
                cIndex++;
            }
        }
    }
    c[0].val = cIndex - 1;
}

int main() {
    Term a[10] = {{2, 3, 3}, {0, 0, 1}, {0, 2, 2}, {1, 1, 3}};
    Term b[10] = {{3, 2, 3}, {0, 1, 4}, {1, 0, 5}, {2, 1, 6}};
    Term c[20];
    multiplySparse(a, b, c);

    for (int i = 0; i <= c[0].val; i++)
        cout << c[i].row << " " << c[i].col << " " << c[i].val << endl;
}
