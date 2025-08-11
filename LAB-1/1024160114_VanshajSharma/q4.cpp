#include <iostream>

using namespace std;

int main(){
	
	// Reversing elements of array
	
	int arr[100],n;
	
	cout << "Enter no of elements: ";
	cin >> n;
	
	cout << "Enter " << n << " elements:\n";
	for (int i =0; i<n; i++){
		cin >> arr[i];
	}
	
	for (int i=0; j=n-1; i<j; i++;j--){
		int temp = arr[i]
		arr[i]=arr[j]
		arr[j]=temp;
	}
	
	cout << "reversed array: \n";
	for (int i=0; i<n;i++){
		cout << arr[i] << " ";
	}
	
	cout << "\n";
	
	
	//Matrix Multiplication
	int A[10][10],B[10][10],C[10][10];
	int r1,c1,c2,r2;
	
	cout << "Enter rows and columns for first matrix: ";
	cin >> r1 >> c1;
	cout << "Enter rows and columns for second matrix: ";
	cin >> r2 >> c2;
	
	
	if(c1 != r2){
		cout << "Matrix mult not possible!\n";
		return 0;
	}
	
	cout << "Enter elemtns of first matrix:\n";
	for (int i=0; i<r1;i++)
	{
		for (int j=0;j<c1;j++){
			cin >> A[i][j];
		}
	}
	cout << "Enter elemtns of second matrix:\n";
	for (int i=0; i<r2;i++)
	{
		for (int j=0;j<c2;j++){
			cin >> B[i][j];
		}
	}
	
	//This is result matrix
	for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            C[i][j] = 0;
	
	
	for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    cout << "Resultant matrix after multiplication:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
    
    
    //Transpose matrix
    
    int mat[10][10], transpose[10][10];
    int rows, cols;

    cout << "Enter rows and columns of matrix: ";
    cin >> rows >> cols;

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> mat[i][j];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << "\n";
    }
    
    
    return 0;
}
