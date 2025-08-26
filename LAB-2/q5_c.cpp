
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int k = 0;
    int lower[10]; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            lower[k++] = (i+1) * (j+1); 
        }
    }

    cout << "Lower Triangular Matrix:" << endl;
    k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i) 
            cout << lower[k++] << " ";
            else 
            cout << "0 ";
        }
        cout << endl;
    }
}