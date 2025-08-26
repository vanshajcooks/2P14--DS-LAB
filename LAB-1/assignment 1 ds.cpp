//1

#include <stdio.h>

int main() {
    int arr[100];   // Array with max size 100
    int n = 0;      // Current size
    int choice;     // Menu choice
    int pos, value, i;
    
    do {
        printf("\n—— MENU ——\n");
        printf("1. CREATE\n");
        printf("2. DISPLAY\n");
        printf("3. INSERT\n");
        printf("4. DELETE\n");
        printf("5. LINEAR SEARCH\n");
        printf("6. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: // CREATE
                printf("Enter number of elements: ");
                scanf("%d", &n);
                printf("Enter %d elements: ", n);
                for(i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                break;
                
            case 2: // DISPLAY
                if(n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements: ");
                    for(i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
                
            case 3: // INSERT
                if(n == 100) {
                    printf("Array is full, cannot insert.\n");
                } else {
                    printf("Enter position (1 to %d): ", n+1);
                    scanf("%d", &pos);
                    if(pos < 1 || pos > n+1) {
                        printf("Invalid position.\n");
                    } else {
                        printf("Enter value to insert: ");
                        scanf("%d", &value);
                        // Shift right
                        for(i = n; i >= pos; i--) {
                            arr[i] = arr[i-1];
                        }
                        arr[pos-1] = value;
                        n++;
                        printf("Element inserted.\n");
                    }
                }
                break;
                
            case 4: // DELETE
                if(n == 0) {
                    printf("Array is empty, cannot delete.\n");
                } else {
                    printf("Enter position to delete (1 to %d): ", n);
                    scanf("%d", &pos);
                    if(pos < 1 || pos > n) {
                        printf("Invalid position.\n");
                    } else {
                        // Shift left
                        for(i = pos-1; i < n-1; i++) {
                            arr[i] = arr[i+1];
                        }
                        n--;
                        printf("Element deleted.\n");
                    }
                }
                break;
                
            case 5: // LINEAR SEARCH
                if(n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Enter value to search: ");
                    scanf("%d", &value);
                    int found = 0;
                    for(i = 0; i < n; i++) {
                        if(arr[i] == value) {
                            printf("Element found at position %d.\n", i+1);
                            found = 1;
                            break;
                        }
                    }
                    if(!found) {
                        printf("Element not found.\n");
                    }
                }
                break;
                
            case 6: // EXIT
                printf("Exiting program...\n");
                break;
                
            default:
                printf("Invalid choice. Try again.\n");
        }
        
    } while(choice != 6);
    
    return 0;
}



//2


//Logic
//Start
//
//Input the size n of the array.
//
//Read n elements into the array.
//
//Use two loops:
//
//Outer loop (i from 0 to n-1) ? pick an element.
//
//Inner loop (j from i+1 to n-1) ? compare with the remaining elements.
//
//If arr[i] == arr[j], it’s a duplicate:
//
//Shift all elements after j one position to the left.
//
//Decrease the size n by 1.
//
//Decrease j by 1 (so we check the new element at position j).
//
//Continue until all elements are checked.
//
//Display the updated array.
//
//End



#include <stdio.h>

int main() {
    int arr[100], n;
    int i, j, k;

    // Step 1: Read array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 2: Remove duplicates
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                // Shift elements left
                for(k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;   // Reduce size
                j--;   // Stay at same index after shifting
            }
        }
    }

    // Step 3: Display updated array
    printf("Array after removing duplicates: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}



//3
//output

10000

//4

//a
#include <stdio.h>

int main() {
    int arr[100], n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse logic
    for(i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


//b
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Matrix multiplication not possible (c1 must equal r2).\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiplication
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}



//c

#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10];
    int r, c, i, j;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//5

#include <stdio.h>

int main() {
    int a[10][10];
    int r, c, i, j;
    int rowSum, colSum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of each row
    printf("\nSum of each row:\n");
    for(i = 0; i < r; i++) {
        rowSum = 0;
        for(j = 0; j < c; j++) {
            rowSum += a[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rowSum);
    }

    // Sum of each column
    printf("\nSum of each column:\n");
    for(j = 0; j < c; j++) {
        colSum = 0;
        for(i = 0; i < r; i++) {
            colSum += a[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, colSum);
    }

    return 0;
}

