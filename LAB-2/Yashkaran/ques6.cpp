#include<iostream>
using namespace std;

#define MAX 100

// Triplet structure
struct Triplet {
    int row, col, val;
};

// Read a sparse matrix in triplet form
void readSparse(Triplet mat[], int &num) {
    cout << "Enter number of rows, columns, and non-zero elements: ";
    cin >> mat[0].row >> mat[0].col >> num;
    mat[0].val = num;
    cout << "Enter row, column, value for each non-zero element:\n";
    for(int i=1; i<=num; i++)
        cin >> mat[i].row >> mat[i].col >> mat[i].val;
}

// Print a sparse matrix in triplet form
void printSparse(Triplet mat[]) {
    int num = mat[0].val;
    cout << "Row Col Val\n";
    for(int i=0; i<=num; i++)
        cout << mat[i].row << "   " << mat[i].col << "   " << mat[i].val << endl;
}

// (a) Transpose
void transpose(Triplet mat[], Triplet trans[]) {
    int num = mat[0].val;
    trans[0].row = mat[0].col;
    trans[0].col = mat[0].row;
    trans[0].val = num;
    int k = 1;
    for(int c=0; c<mat[0].col; c++) {
        for(int i=1; i<=num; i++) {
            if(mat[i].col == c) {
                trans[k].row = mat[i].col;
                trans[k].col = mat[i].row;
                trans[k].val = mat[i].val;
                k++;
            }
        }
    }
}

// (b) Addition
void add(Triplet a[], Triplet b[], Triplet sum[]) {
    if(a[0].row != b[0].row || a[0].col != b[0].col) {
        cout << "Addition not possible!\n";
        return;
    }
    int i=1, j=1, k=1;
    sum[0].row = a[0].row;
    sum[0].col = a[0].col;
    while(i<=a[0].val && j<=b[0].val) {
        if(a[i].row < b[j].row || (a[i].row == b[j].row && a[i].col < b[j].col))
            sum[k++] = a[i++];
        else if(b[j].row < a[i].row || (a[i].row == b[j].row && b[j].col < a[i].col))
            sum[k++] = b[j++];
        else {
            sum[k] = a[i];
            sum[k].val = a[i].val + b[j].val;
            k++; i++; j++;
        }
    }
    while(i<=a[0].val) sum[k++] = a[i++];
    while(j<=b[0].val) sum[k++] = b[j++];
    sum[0].val = k-1;
}

// (c) Multiplication (simple, not optimized)
void multiply(Triplet a[], Triplet b[], Triplet prod[]) {
    if(a[0].col != b[0].row) {
        cout << "Multiplication not possible!\n";
        return;
    }
    int k = 1;
    prod[0].row = a[0].row;
    prod[0].col = b[0].col;
    for(int i=1; i<=a[0].val; i++) {
        for(int j=1; j<=b[0].val; j++) {
            if(a[i].col == b[j].row) {
                // Check if this position already exists in prod
                int found = 0;
                for(int x=1; x<k; x++) {
                    if(prod[x].row == a[i].row && prod[x].col == b[j].col) {
                        prod[x].val += a[i].val * b[j].val;
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    prod[k].row = a[i].row;
                    prod[k].col = b[j].col;
                    prod[k].val = a[i].val * b[j].val;
                    k++;
                }
            }
        }
    }
    prod[0].val = k-1;
}

int main() {
    Triplet a[MAX], b[MAX], result[MAX];
    int choice, numA, numB;
    cout << "1. Transpose\n2. Addition\n3. Multiplication\nEnter choice: ";
    cin >> choice;
    if(choice == 1) {
        readSparse(a, numA);
        transpose(a, result);
        cout << "Transpose:\n";
        printSparse(result);
    } else if(choice == 2) {
        cout << "First matrix:\n";
        readSparse(a, numA);
        cout << "Second matrix:\n";
        readSparse(b, numB);
        add(a, b, result);
        cout << "Sum:\n";
        printSparse(result);
    } else if(choice == 3) {
        cout << "First matrix:\n";
        readSparse(a, numA);
        cout << "Second matrix:\n";
        readSparse(b, numB);
        multiply(a, b, result);
        cout << "Product:\n";
        printSparse(result);
    } else {
        cout << "Invalid choice\n";
    }
    return 0;
