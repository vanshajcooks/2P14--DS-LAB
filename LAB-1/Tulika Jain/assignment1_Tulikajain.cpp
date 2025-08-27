#include <iostream>
using namespace std;

// 1) Develop a Menu driven program to demonstrate the following operations of Arrays 
// ——MENU——- 
// 1.CREATE 
// 2. DISPLAY 
// 3. INSERT 
// 4. DELETE 
// 5. LINEAR SEARCH 
// 6. EXIT
int main() {
   int choice;
   do {
       cout << "——MENU———" << endl;
       cout << "1. CREATE" << endl;
       cout << "2. DISPLAY" << endl;
       cout << "3. INSERT" << endl;
       cout << "4. DELETE" << endl;
       cout << "5. LINEAR SEARCH" << endl;
       cout << "6. EXIT" << endl;
       cout << "Enter your choice: ";
       cin >> choice;

       switch (choice) {
           case 1:
               // Create array
               break;
           case 2:
               // Display array
               break;
           case 3:
               // Insert element
               break;
           case 4:
               // Delete element
               break;
           case 5:
               // Linear search
               break;
           case 6:
               cout << "Exiting program." << endl;
               break;
           default:
               cout << "Invalid choice. Please try again." << endl;
       }
   } while (choice != 6);

   return 0;
}


// Design the logic to remove the duplicate elements from an Array and after the deletion the array should contain the unique elements. 
int main() {
  int arr[100], n, i, j;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  cout << "Enter the elements of the array: ";
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // Remove duplicates
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        // Shift elements to the left
         for (int k = j; k < n - 1; k++) {
            arr[k] = arr[k + 1];
         }
         n--; // Decrease size
         j--; // Stay at the same position
      }
    }
  }
  cout << "Array after removing duplicates: ";
  for (i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// Predict the Output of the following program  
int main() { 
  int i; 
  int arr[5] = {1}; 
  for (i = 0; i < 5; i++) 
  printf("%d",arr[i]); 
  return 0; 
}
// Output: 10000

// Implement the logic to 
// a. Reverse the elements of an array 
// b. Find the matrix multiplication 
// c. Find the Transpose of a Matrix 
int main() {
    // a. Reverse the elements of an array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Reversed Array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // b. Find the matrix multiplication
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2] = {0};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Matrix Multiplication Result:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // c. Find the Transpose of a Matrix
    int transpose[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            transpose[j][i] = mat1[i][j];
        }
    }

    cout << "Transpose of Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Write a program to find sum of every row and every column in a two-dimensional array.
int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rowSum[3] = {0};
    int colSum[3] = {0};

    // Calculate sum of each row
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rowSum[i] += arr[i][j];
        }
    }

    // Calculate sum of each column
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            colSum[j] += arr[i][j];
        }
    }

    // Display row sums
    cout << "Row Sums: ";
    for (int i = 0; i < 3; i++) {
        cout << rowSum[i] << " ";
    }
    cout << endl;

    // Display column sums
    cout << "Column Sums: ";
    for (int j = 0; j < 3; j++) {
        cout << colSum[j] << " ";
    }
    cout << endl;

    return 0;
}  
