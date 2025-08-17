#include <iostream>
using namespace std;

struct Term {
    int row, col, val;
};

void transpose(Term a[], Term b[]) {
    int k = 1;
    b[0].row = a[0].col;
    b[0].col = a[0].row;
    b[0].val = a[0].val;

    for (int i = 0; i < a[0].col; i++) {
        for (int j = 1; j <= a[0].val; j++) {
            if (a[j].col == i) {
                b[k].row = a[j].col;
                b[k].col = a[j].row;
                b[k].val = a[j].val;
                k++;
            }
        }
    }
}

int main() {
    Term a[10] = {{3, 3, 4}, {0, 0, 5}, {0, 2, 8}, {1, 1, 3}, {2, 0, 6}};
    Term b[10];
    transpose(a, b);

    for (int i = 0; i <= b[0].val; i++)
        cout << b[i].row << " " << b[i].col << " " << b[i].val << endl;
}
