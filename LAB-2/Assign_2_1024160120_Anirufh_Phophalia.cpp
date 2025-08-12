#include<iostream>
#include <cstring>
using namespace std;

//  Implement the Binary search algorithm regarded as a fast search algorithm with run-time complexity of Ο(log n) in comparison to the Linear Search.
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; 
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
int main() {
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;
    int size = sizeof(data) / sizeof(data[0]);

    int result = binarySearch(data, size, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}


// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order. Code the Bubble sort with the following elements: 64 34 25 12 22 11 90
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


// Design the Logic to Find a Missing Number in a Sorted Array. Given an array of n-1 distinct integers in the range of 1 to n, find the missing number in it in a Sorted Array 
// (a) Linear time 
// (b) Using binary search. 
int findMissingNumber(int arr[], int size) {
    int expectedSum = (size + 1) * (size + 2) / 2; 
    int actualSum = 0;
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }
    return expectedSum - actualSum;
}
int findMissingNumberBinarySearch(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] != mid + 1) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return left + 1;
}
int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int missingNumber = findMissingNumber(arr, size);
    int missingNumberBinary = findMissingNumberBinarySearch(arr, size);
    cout << "Missing number is: " << missingNumber << endl;
    cout << "Missing number using binary search is: " << missingNumberBinary << endl;
    return 0;
}


//  Write a program to concatenate one string to another string.
int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);
    strcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;
    return 0;
}


//  Write a program to reverse a string.
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        swap(str[i], str[len - i - 1]);
    }
    cout << "Reversed string: " << str << endl;
    return 0;
}


// (c) Write a program to delete all the vowels from the string. 
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            for (int j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            len--;
            i--;
        }
    }
    cout << "String after removing vowels: " << str << endl;
    return 0;
}    


// Write a program to sort the strings in alphabetical order. 
int main() {
    char str[100][100];
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore(); 
    for (int i = 0; i < n; i++) {
        cout << "Enter string " << i + 1 << ": ";
        cin.getline(str[i], 100);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    cout << "Strings in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }
    return 0;
}


//  Write a program to convert a character from uppercase to lowercase.
int main(){
    char ch;
    cout << "Enter an uppercase character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }
    cout << "Lowercase character: " << ch << endl;
    return 0;
}


// Space required to store any two-dimensional array is number of rows X number of columns. Assuming array is used to store elements of the following matrices, implement an efficient way that reduces the space requirement.
// (a) Diagonal Matrix.
// (b) Tri-diagonal Matrix.
// (c) Lower triangular Matrix.
// (d) Upper triangular Matrix.
// (e) Symmetric Matrix
void setDiagonal(int A[], int n, int i, int j, int x) {
    if (i == j) A[i - 1] = x;
}
int getDiagonal(int A[], int n, int i, int j) {
    if (i == j) return A[i - 1];
    else return 0;
}
void setTriDiagonal(int A[], int n, int i, int j, int x) {
    if (i - j == 1) A[i - 2] = x;                     
    else if (i - j == 0) A[n - 1 + i - 1] = x;        
    else if (i - j == -1) A[2 * n - 1 + i - 1] = x;   
}
int getTriDiagonal(int A[], int n, int i, int j) {
    if (i - j == 1) return A[i - 2];
    else if (i - j == 0) return A[n - 1 + i - 1];
    else if (i - j == -1) return A[2 * n - 1 + i - 1];
    else return 0;
}
void setLowerTriangular(int A[], int n, int i, int j, int x) {
    if (i >= j) A[i * (i - 1) / 2 + (j - 1)] = x;
}
int getLowerTriangular(int A[], int n, int i, int j) {
    if (i >= j) return A[i * (i - 1) / 2 + (j - 1)];
    else return 0;
}
void setUpperTriangular(int A[], int n, int i, int j, int x) {
    if (i <= j) A[(i - 1) * n - (i - 2) * (i - 1) / 2 + (j - i)] = x;
}
int getUpperTriangular(int A[], int n, int i, int j) {
    if (i <= j) return A[(i - 1) * n - (i - 2) * (i - 1) / 2 + (j - i)];
    else return 0;
}
void setSymmetric(int A[], int n, int i, int j, int x) {
    if (i >= j) A[i * (i - 1) / 2 + (j - 1)] = x;
    else A[j * (j - 1) / 2 + (i - 1)] = x;
}
int getSymmetric(int A[], int n, int i, int j) {
    if (i >= j) return A[i * (i - 1) / 2 + (j - 1)];
    else return A[j * (j - 1) / 2 + (i - 1)];
}
void display(void (*printFunc)(int[], int), int A[], int n) {
    printFunc(A, n);
}
void printDiagonal(int A[], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << getDiagonal(A, n, i, j) << " ";
        cout << "\n";
    }
}
void printTriDiagonal(int A[], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << getTriDiagonal(A, n, i, j) << " ";
        cout << "\n";
    }
}
void printLowerTriangular(int A[], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << getLowerTriangular(A, n, i, j) << " ";
        cout << "\n";
    }
}
void printUpperTriangular(int A[], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << getUpperTriangular(A, n, i, j) << " ";
        cout << "\n";
    }
}
void printSymmetric(int A[], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << getSymmetric(A, n, i, j) << " ";
        cout << "\n";
    }
}
int main() {
    int n = 4;

    // Diagonal
    int diag[4] = {0};
    setDiagonal(diag, n, 1, 1, 5);
    setDiagonal(diag, n, 2, 2, 8);
    setDiagonal(diag, n, 3, 3, 3);
    setDiagonal(diag, n, 4, 4, 6);
    cout << "\nDiagonal Matrix:\n";
    printDiagonal(diag, n);

    // Tri-diagonal
    int tri[3 * 4 - 2] = {0};
    setTriDiagonal(tri, n, 1, 1, 4);
    setTriDiagonal(tri, n, 1, 2, 5);
    setTriDiagonal(tri, n, 2, 1, 6);
    setTriDiagonal(tri, n, 2, 2, 7);
    setTriDiagonal(tri, n, 2, 3, 8);
    setTriDiagonal(tri, n, 3, 2, 9);
    setTriDiagonal(tri, n, 3, 3, 1);
    setTriDiagonal(tri, n, 3, 4, 2);
    setTriDiagonal(tri, n, 4, 3, 3);
    setTriDiagonal(tri, n, 4, 4, 4);
    cout << "\nTri-diagonal Matrix:\n";
    printTriDiagonal(tri, n);

    // Lower Triangular
    int lower[4 * (4 + 1) / 2] = {0};
    int val = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            setLowerTriangular(lower, n, i, j, val++);
    cout << "\nLower Triangular Matrix:\n";
    printLowerTriangular(lower, n);

    // Upper Triangular
    int upper[4 * (4 + 1) / 2] = {0};
    val = 1;
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++)
            setUpperTriangular(upper, n, i, j, val++);
    cout << "\nUpper Triangular Matrix:\n";
    printUpperTriangular(upper, n);

    // Symmetric
    int sym[4 * (4 + 1) / 2] = {0};
    val = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            setSymmetric(sym, n, i, j, val++);
    cout << "\nSymmetric Matrix:\n";
    printSymmetric(sym, n);

    return 0;
}


// Write a program to implement the following operations on a Sparse Matrix, assuming the matrix is represented using a triplet. 
// (a) Transpose of a matrix. 
// (b) Addition of two matrices. 
// (c) Multiplication of two matrices. 
struct Term {
    int row, col, val;
};
void readSparse(Term mat[], int &n) {
    cout << "Enter rows, cols, and number of non-zero elements: ";
    cin >> mat[0].row >> mat[0].col >> mat[0].val;
    n = mat[0].val;
    cout << "Enter row col value for each non-zero element:\n";
    for (int i = 1; i <= n; i++) {
        cin >> mat[i].row >> mat[i].col >> mat[i].val;
    }
}
void printSparse(Term mat[]) {
    cout << mat[0].row << " " << mat[0].col << " " << mat[0].val << "\n";
    for (int i = 1; i <= mat[0].val; i++) {
        cout << mat[i].row << " " << mat[i].col << " " << mat[i].val << "\n";
    }
}
void transpose(Term a[], Term b[]) {
    b[0].row = a[0].col;
    b[0].col = a[0].row;
    b[0].val = a[0].val;
    int k = 1;
    for (int col = 0; col < a[0].col; col++) {
        for (int i = 1; i <= a[0].val; i++) {
            if (a[i].col == col) {
                b[k].row = a[i].col;
                b[k].col = a[i].row;
                b[k].val = a[i].val;
                k++;
            }
        }
    }
}
void addSparse(Term A[], Term B[], Term C[]) {
    if (A[0].row != B[0].row || A[0].col != B[0].col) {
        cout << "Matrix dimensions must match for addition.\n";
        C[0].val = 0;
        return;
    }
    C[0].row = A[0].row;
    C[0].col = A[0].col;
    int i = 1, j = 1, k = 1;
    while (i <= A[0].val && j <= B[0].val) {
        if (A[i].row == B[j].row && A[i].col == B[j].col) {
            int sum = A[i].val + B[j].val;
            if (sum != 0) {
                C[k++] = {A[i].row, A[i].col, sum};
            }
            i++; j++;
        }
        else if (A[i].row < B[j].row || 
                (A[i].row == B[j].row && A[i].col < B[j].col)) {
            C[k++] = A[i++];
        }
        else {
            C[k++] = B[j++];
        }
    }
    while (i <= A[0].val) C[k++] = A[i++];
    while (j <= B[0].val) C[k++] = B[j++];
    C[0].val = k - 1;
}
void multiplySparse(Term A[], Term B[], Term C[]) {
    if (A[0].col != B[0].row) {
        cout << "Matrix dimensions incompatible for multiplication.\n";
        C[0].val = 0;
        return;
    }
    Term BT[100];
    transpose(B, BT);
    C[0].row = A[0].row;
    C[0].col = B[0].col;
    int k = 1;
    for (int r = 0; r < A[0].row; r++) {
        for (int c = 0; c < B[0].col; c++) {
            int sum = 0;
            for (int i = 1; i <= A[0].val; i++) {
                if (A[i].row == r) {
                    for (int j = 1; j <= BT[0].val; j++) {
                        if (BT[j].row == c && BT[j].col == A[i].col) {
                            sum += A[i].val * BT[j].val;
                        }
                    }
                }
            }
            if (sum != 0) {
                C[k++] = {r, c, sum};
            }
        }
    }
    C[0].val = k - 1;
}
int main() {
    Term A[100], B[100], T[100], SUM[100], PROD[100];
    int nA, nB;

    cout << "Enter first sparse matrix:\n";
    readSparse(A, nA);

    cout << "Enter second sparse matrix:\n";
    readSparse(B, nB);

    cout << "\nTranspose of first matrix:\n";
    transpose(A, T);
    printSparse(T);

    cout << "\nAddition of matrices:\n";
    addSparse(A, B, SUM);
    if (SUM[0].val > 0) printSparse(SUM);

    cout << "\nMultiplication of matrices:\n";
    multiplySparse(A, B, PROD);
    if (PROD[0].val > 0) printSparse(PROD);

    return 0;
}


// Let A[1 …. n] be an array of n real numbers. A pair (A[i], A[j ]) is said to be an inversion if these numbers are out of order, i.e., i < j but A[i]>A[j ]. Write a program to count the number of inversions in an array.
long long mergeAndCount(int arr[], int temp[], int left, int mid, int right) {
    int i = left;    
    int j = mid + 1;  
    int k = left;   
    long long inv_count = 0;
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1);
        }
    }
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    while (j <= right) {
        temp[k++] = arr[j++];
    }
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }
    return inv_count;
}
long long mergeSortAndCount(int arr[], int temp[], int left, int right) {
    long long inv_count = 0;
    if (left < right) {
        int mid = (left + right) / 2;
        inv_count += mergeSortAndCount(arr, temp, left, mid);     
        inv_count += mergeSortAndCount(arr, temp, mid + 1, right); 
        inv_count += mergeAndCount(arr, temp, left, mid, right);  
    }
    return inv_count;
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[1000];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int temp[1000];
    long long inversionCount = mergeSortAndCount(arr, temp, 0, n - 1);

    cout << "Number of inversions: " << inversionCount << endl;
    return 0;
}

// Write a program to count the total number of distinct elements in an array of length n.
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int distinctCount = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            distinctCount++;
        }
    }

    cout << "Total distinct elements: " << distinctCount << endl;
    return 0;
}

