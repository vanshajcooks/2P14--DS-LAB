#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int mat[10][10], trans[10][10];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];

    // Transpose
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            trans[j][i] = mat[i][j];

    cout << "Transpose matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
