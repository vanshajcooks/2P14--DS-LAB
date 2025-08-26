#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice, pos, val, searchVal, i;
    while (true) {
        cout << "\n---MENU---\n";
        cout << "1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements: ";
            for (i = 0; i < n; i++) cin >> arr[i];
        } 
        else if (choice == 2) {
            if (n == 0) cout << "Array is empty\n";
            else {
                cout << "Array elements: ";
                for (i = 0; i < n; i++) cout << arr[i] << " ";
                cout << "\n";
            }
        } 
        else if (choice == 3) {
            if (n >= 100) cout << "Array is full\n";
            else {
                cout << "Enter position (1 to " << n+1 << "): ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> val;
                if (pos < 1 || pos > n+1) cout << "Invalid position\n";
                else {
                    for (i = n; i >= pos; i--) arr[i] = arr[i-1];
                    arr[pos-1] = val;
                    n++;
                }
            }
        } 
        else if (choice == 4) {
            if (n == 0) cout << "Array is empty\n";
            else {
                cout << "Enter position (1 to " << n << "): ";
                cin >> pos;
                if (pos < 1 || pos > n) cout << "Invalid position\n";
                else {
                    for (i = pos-1; i < n-1; i++) arr[i] = arr[i+1];
                    n--;
                }
            }
        } 
        else if (choice == 5) {
            if (n == 0) cout << "Array is empty\n";
            else {
                cout << "Enter value to search: ";
                cin >> searchVal;
                bool found = false;
                for (i = 0; i < n; i++) {
                    if (arr[i] == searchVal) {
                        cout << "Found at position " << i+1 << "\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Not found\n";
            }
        } 
        else if (choice == 6) {
            break;
        } 
        else {
            cout << "Invalid choice\n";
        }
    }
    return 0;
}
