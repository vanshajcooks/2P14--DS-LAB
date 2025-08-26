#include <iostream>
using namespace std;
int main() {
    int arr[50];
    int n, count = 0;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate) {
            count++;
        }
    }

    cout << "Number of distinct elements: " << count << endl;
    return 0;
}