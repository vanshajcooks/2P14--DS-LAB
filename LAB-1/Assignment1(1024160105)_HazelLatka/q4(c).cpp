/*c. Find the Transpose of a Matrix*/
#include <iostream>
using namespace std;

int main() {
    int A[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int T[3][2]; 

   
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            T[j][i] = A[i][j];
        }
    }

    
    cout << "Transpose Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
