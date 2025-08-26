#include <iostream>
#define MAX 4
using namespace std;

int main() {
    int a[MAX];

    cout << "\nEnter elements (row major):\n";
    for (int i = 0; i < MAX; i++)
        cin >> a[i];

    cout << "\nThe matrix is...\n";
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if (i == j)
                cout << a[i] << " ";
            else
                cout << "0 ";
        }
        cout << "\n";
    }

    return 0;
}
