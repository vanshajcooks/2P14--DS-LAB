
/*5) Write a program to find sum of every row and every column in a two-dimensional 
array*/
#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << rowSum << endl;
    }

   
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        cout << "Sum of column " << j + 1 << " = " << colSum << endl;
    }

    return 0;
}
