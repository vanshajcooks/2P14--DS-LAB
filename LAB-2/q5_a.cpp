
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int diag[5]; 

    for (int i = 0; i < n; i++)
    {
       cin>>diag[i]; 
    }

    cout << "Diagonal Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << diag[i] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}