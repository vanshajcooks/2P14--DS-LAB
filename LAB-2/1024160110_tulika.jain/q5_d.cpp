
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int k = 0;
    int upper[10];
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            upper[k++] = (i+1) * (j+1);
        }
    }

    cout << "Upper Triangular Matrix:" << endl;
    k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i)
            cout << upper[k++] << " ";
            else
            cout << "0 ";
        }
        cout << endl;
    }
}

