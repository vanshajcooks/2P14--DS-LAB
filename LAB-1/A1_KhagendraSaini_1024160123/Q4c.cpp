#include <iostream>
using namespace std;

int main() {
    int a[10][10], trans[10][10];
    int r, c;

    cout << "Enter rows and cols: ";
    cin >> r >> c;
    cout << "Enter matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            trans[j][i] = a[i][j];

    cout << "Transpose:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}