// Q4(a)
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Q4(b)
#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible." << endl;
        return 0;
    }

    int matrix1[10][10], matrix2[10][10], result[10][10] = {0};

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            cin >> matrix1[i][j];

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            cin >> matrix2[i][j];

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Q4(c) 
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[10][10], transpose[10][10];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}
