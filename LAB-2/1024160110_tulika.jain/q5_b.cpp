
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int tri[3*5 - 2]; 

    for (int i = 0; i < 3*n-2; i++) 
       tri[i] = i+1;

    cout << "Tri-diagonal Matrix:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i-j == 1)
            cout << tri[i-2] << " ";     
            else if (i == j)
            cout << tri[n+i-2] << " ";  
            else if (j-i == 1) 
            cout << tri[2*n+i-2] << " "; 
            else 
            cout << "0 ";
        }
        cout << endl;
    }
}