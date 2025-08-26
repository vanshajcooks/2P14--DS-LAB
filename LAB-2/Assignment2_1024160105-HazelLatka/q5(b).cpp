#include <iostream>
#define MAX 4
using namespace std;

int main() {
    int size = 3 * MAX - 2;      
    int a[size];
    
    cout << "\nEnter elements (row major):\n";
    for(int i = 0; i < size; i++)
        cin >> a[i];
    
    cout << "\nThe matrix is...\n";
    int k = 0; 
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) {
            if(i - j == -1 || i - j == 0 || i - j == 1) {
                cout << a[k] << " ";
                k++;
            } else {
                cout << "0 ";
            }
        }
        cout << "\n";
    }

    return 0;
}
