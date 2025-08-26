#include <iostream>
using namespace std;

int main() {
    int r = 3, c = 3;
    int mat[3][3] = {
        {5, 7, 9},
        {2, 4, 6},
        {8, 1, 3}
    };

    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += mat[i][j];
        }
        cout << "Row " << i + 1 << " sum = " << sum << endl;
    }

    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) {
            sum += mat[i][j];
        }
        cout << "Column " << j + 1 << " sum = " << sum << endl;
    }

    return 0;
}

