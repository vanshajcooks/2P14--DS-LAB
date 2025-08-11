#include <iostream>
using namespace std;

int main() {
    int rows, cols, i, j;
    int arr[10][10];

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter elements:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Sum of each row:\n";
    for (i = 0; i < rows; i++) {
        int sum = 0;
        for (j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        cout << "Row " << i + 1 << ": " << sum << "\n";
    }

    cout << "Sum of each column:\n";
    for (j = 0; j < cols; j++) {
        int sum = 0;
        for (i = 0; i < rows; i++) {
            sum += arr[i][j];
        }
        cout << "Column " << j + 1 << ": " << sum << "\n";
    }

    return 0;
}
