//1
//Binary vs Linear Search 
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i=0; i<n; i++) {
        if(arr[i] == key) return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low=0, high=n-1;
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid] < key) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

int main() {
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int pos1 = linearSearch(arr,n,key);
    if(pos1 != -1) cout<<"Linear Search: Found at index "<<pos1<<"\n";
    else cout<<"Linear Search: Not Found\n";

    int pos2 = binarySearch(arr,n,key);
    if(pos2 != -1) cout<<"Binary Search: Found at index "<<pos2<<"\n";
    else cout<<"Binary Search: Not Found\n";

    return 0;
}


//2

//Bubble Sort

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {64,34,25,12,22,11,90};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original array: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    bubbleSort(arr,n);

    cout<<"\nSorted array: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}


//3

//Linear Time

#include <iostream>
using namespace std;

int findMissingLinear(int arr[], int n) {
    int total = (n+1)*(n+2)/2;   // sum of 1..n+1
    int sum = 0;
    for(int i=0;i<n;i++) sum+=arr[i];
    return total - sum;
}

int main() {
    int arr[] = {1,2,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Missing number (Linear): "<<findMissingLinear(arr,n)<<endl;
    return 0;
}


//Binary Search

#include <iostream>
using namespace std;

int findMissingBinary(int arr[], int n) {
    int low=0, high=n-1;
    while(low<=high) {
        int mid=(low+high)/2;
        if(arr[mid] != mid+1) {
            if(mid==0 || arr[mid-1]==mid) return mid+1;
            high=mid-1;
        } else {
            low=mid+1;
        }
    }
    return n+1;
}

int main() {
    int arr[] = {1,2,3,4,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Missing number (Binary Search): "<<findMissingBinary(arr,n)<<endl;
    return 0;
}



//4
//String Programs
//(a) Concatenate Strings

#include <iostream>
using namespace std;
int main() {
    string s1, s2;
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    cout<<"Concatenated: "<<s1+s2<<endl;
    return 0;
}


//(b) Reverse a String

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cout<<"Enter string: ";
    cin>>s;
    reverse(s.begin(), s.end());
    cout<<"Reversed: "<<s<<endl;
    return 0;
}


//(c) Delete Vowels

#include <iostream>
using namespace std;
int main() {
    string s,res="";
    cout<<"Enter string: ";
    cin>>s;
    for(char c: s) {
        if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
             c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
            res+=c;
    }
    cout<<"Without vowels: "<<res<<endl;
    return 0;
}


//(d) Sort Strings Alphabetically

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of strings: ";
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    cout<<"Sorted strings: \n";
    for(string s:arr) cout<<s<<endl;
    return 0;
}



//(e) Uppercase to Lowercase


#include <iostream>
using namespace std;
int main() {
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    if(c>='A' && c<='Z') c+=32;
    cout<<"Lowercase: "<<c<<endl;
    return 0;
}


//5 

// Special Matrix

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////
// (a) Diagonal Matrix
//////////////////////////////////////////////////////
void diagonalMatrix(int n) {
    int diag[20];
    cout << "\nEnter " << n << " diagonal elements: ";
    for(int i=0; i<n; i++) cin >> diag[i];

    cout << "\nDiagonal Matrix:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == j) cout << diag[i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

//////////////////////////////////////////////////////
// (b) Tri-diagonal Matrix
// Only store elements where |i-j| <= 1
//////////////////////////////////////////////////////
void tridiagonalMatrix(int n) {
    int tri[60]; // can store 3n-2 elements
    cout << "\nEnter elements of tridiagonal matrix (3n-2 values): ";
    for(int i=0; i<3*n-2; i++) cin >> tri[i];

    cout << "\nTri-diagonal Matrix:\n";
    int k=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(abs(i-j) <= 1) cout << tri[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

//////////////////////////////////////////////////////
// (c) Lower Triangular Matrix
// Store row-wise (only when j<=i)
//////////////////////////////////////////////////////
void lowerTriangularMatrix(int n) {
    int lower[100];
    int k=0;
    cout << "\nEnter elements of lower triangular matrix: ";
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cin >> lower[k++];
        }
    }

    cout << "\nLower Triangular Matrix:\n";
    k=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(j <= i) cout << lower[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

//////////////////////////////////////////////////////
// (d) Upper Triangular Matrix
// Store row-wise (only when j>=i)
//////////////////////////////////////////////////////
void upperTriangularMatrix(int n) {
    int upper[100];
    int k=0;
    cout << "\nEnter elements of upper triangular matrix: ";
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            cin >> upper[k++];
        }
    }

    cout << "\nUpper Triangular Matrix:\n";
    k=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(j >= i) cout << upper[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

//////////////////////////////////////////////////////
// (e) Symmetric Matrix
// Only store lower triangular part (i>=j)
// Since A[i][j] = A[j][i]
//////////////////////////////////////////////////////
void symmetricMatrix(int n) {
    int sym[100];
    int k=0;
    cout << "\nEnter elements of symmetric matrix (lower triangular): ";
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cin >> sym[k++];
        }
    }

    cout << "\nSymmetric Matrix:\n";
    k=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i >= j) cout << sym[(i*(i+1))/2 + j] << " ";
            else cout << sym[(j*(j+1))/2 + i] << " ";
        }
        cout << endl;
    }
}

//////////////////////////////////////////////////////
// Main Program
//////////////////////////////////////////////////////
int main() {
    int n;
    cout << "Enter order of square matrix: ";
    cin >> n;

    diagonalMatrix(n);
    tridiagonalMatrix(n);
    lowerTriangularMatrix(n);
    upperTriangularMatrix(n);
    symmetricMatrix(n);

    return 0;
}


//6
//Transpose

#include <iostream>
using namespace std;

int main() {
    int m,n,num;
    cout<<"Enter rows, cols and number of non-zero elements: ";
    cin>>m>>n>>num;

    int sparse[20][3];   // triplet representation
    cout<<"Enter row col value for "<<num<<" elements:\n";
    for(int i=0;i<num;i++) {
        cin>>sparse[i][0]>>sparse[i][1]>>sparse[i][2];
    }

    cout<<"\nOriginal Triplet Representation:\n";
    cout<<"Row Col Val\n";
    for(int i=0;i<num;i++) {
        cout<<sparse[i][0]<<" "<<sparse[i][1]<<" "<<sparse[i][2]<<endl;
    }

    // Transpose
    int transpose[20][3];
    int k=0;
    for(int col=0; col<n; col++) {
        for(int i=0;i<num;i++) {
            if(sparse[i][1]==col) {
                transpose[k][0]=sparse[i][1];
                transpose[k][1]=sparse[i][0];
                transpose[k][2]=sparse[i][2];
                k++;
            }
        }
    }

    cout<<"\nTranspose Triplet Representation:\n";
    cout<<"Row Col Val\n";
    for(int i=0;i<num;i++) {
        cout<<transpose[i][0]<<" "<<transpose[i][1]<<" "<<transpose[i][2]<<endl;
    }

    return 0;
}


//Addition

#include <iostream>
using namespace std;

int main() {
    int m,n,num1,num2;
    cout<<"Enter rows and cols: ";
    cin>>m>>n;

    cout<<"Enter number of non-zero elements in A: ";
    cin>>num1;
    int A[20][3];
    cout<<"Enter row col val for A:\n";
    for(int i=0;i<num1;i++)
        cin>>A[i][0]>>A[i][1]>>A[i][2];

    cout<<"Enter number of non-zero elements in B: ";
    cin>>num2;
    int B[20][3];
    cout<<"Enter row col val for B:\n";
    for(int i=0;i<num2;i++)
        cin>>B[i][0]>>B[i][1]>>B[i][2];

    int C[40][3];  
    int i=0,j=0,k=0;

    // Merge like merge sort
    while(i<num1 && j<num2) {
        if(A[i][0]<B[j][0] || (A[i][0]==B[j][0] && A[i][1]<B[j][1])) {
            C[k][0]=A[i][0]; C[k][1]=A[i][1]; C[k][2]=A[i][2];
            i++; k++;
        }
        else if(B[j][0]<A[i][0] || (B[j][0]==A[i][0] && B[j][1]<A[i][1])) {
            C[k][0]=B[j][0]; C[k][1]=B[j][1]; C[k][2]=B[j][2];
            j++; k++;
        }
        else {
            C[k][0]=A[i][0];
            C[k][1]=A[i][1];
            C[k][2]=A[i][2]+B[j][2];
            i++; j++; k++;
        }
    }

    while(i<num1) {
        C[k][0]=A[i][0]; C[k][1]=A[i][1]; C[k][2]=A[i][2];
        i++; k++;
    }
    while(j<num2) {
        C[k][0]=B[j][0]; C[k][1]=B[j][1]; C[k][2]=B[j][2];
        j++; k++;
    }

    cout<<"\nResult of Addition:\nRow Col Val\n";
    for(int p=0;p<k;p++)
        cout<<C[p][0]<<" "<<C[p][1]<<" "<<C[p][2]<<endl;

    return 0;
}


//Multiplication of Two Sparse Matrices

#include <iostream>
using namespace std;

int main() {
    int m,n,p,numA,numB;
    cout<<"Enter rows and cols of A: ";
    cin>>m>>n;
    cout<<"Enter rows and cols of B: ";
    cin>>n>>p;  // note: A's cols = B's rows

    cout<<"Enter number of non-zero elements in A: ";
    cin>>numA;
    int A[20][3];
    cout<<"Enter row col val for A:\n";
    for(int i=0;i<numA;i++)
        cin>>A[i][0]>>A[i][1]>>A[i][2];

    cout<<"Enter number of non-zero elements in B: ";
    cin>>numB;
    int B[20][3];
    cout<<"Enter row col val for B:\n";
    for(int i=0;i<numB;i++)
        cin>>B[i][0]>>B[i][1]>>B[i][2];

    // Transpose B
    int BT[20][3], k=0;
    for(int col=0;col<p;col++) {
        for(int i=0;i<numB;i++) {
            if(B[i][1]==col) {
                BT[k][0]=B[i][1];
                BT[k][1]=B[i][0];
                BT[k][2]=B[i][2];
                k++;
            }
        }
    }
    int numBT = k;

    int C[40][3];  
    int ccount=0;

    // Multiply
    for(int i=0;i<m;i++) {
        for(int j=0;j<p;j++) {
            int sum=0;
            for(int a=0;a<numA;a++) {
                if(A[a][0]==i) {
                    for(int b=0;b<numBT;b++) {
                        if(BT[b][0]==j && A[a][1]==BT[b][1]) {
                            sum += A[a][2]*BT[b][2];
                        }
                    }
                }
            }
            if(sum!=0) {
                C[ccount][0]=i;
                C[ccount][1]=j;
                C[ccount][2]=sum;
                ccount++;
            }
        }
    }

    cout<<"\nResult of Multiplication:\nRow Col Val\n";
    for(int i=0;i<ccount;i++)
        cout<<C[i][0]<<" "<<C[i][1]<<" "<<C[i][2]<<endl;

    return 0;
}


//7
//Count Inversions

#include <iostream>
using namespace std;
int main() {
    int arr[] = {2,4,1,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int inv=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]>arr[j]) inv++;
        }
    }
    cout<<"Number of inversions: "<<inv<<endl;
    return 0;
}


//8
//Count Distinct Elements

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int distinct = 0;

    for(int i=0; i<n; i++) {
        bool isDistinct = true;
        // check if arr[i] appeared before
        for(int j=0; j<i; j++) {
            if(arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }
        if(isDistinct) distinct++;
    }

    cout << "Total distinct elements: " << distinct << endl;
    return 0;
}



