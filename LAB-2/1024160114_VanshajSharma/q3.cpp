#include <iostream>
#include <algorithm>  
using namespace std;

int main() {
    int arr[1000];
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);  

    int ans = 1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == ans) {
            ans++;  
        }
    }

    cout << "The first missing positive integer is: " << ans << endl;
    return 0;
}

