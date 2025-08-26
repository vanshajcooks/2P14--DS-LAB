#include <iostream>
using namespace std;



int arr[100];
int n = 0; // Current number of elements

void createArray() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void displayArray() {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertElement() {
    
    int pos, val;
    cout << "Enter position to insert (1 to " << n + 1 << "): ";
    cin >> pos;
    
    cout << "Enter value to insert: ";
    cin >> val;

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    n++;
    cout << "Value inserted.\n";
}

void deleteElement() {
    int pos;
    cout << "Enter position to delete (1 to " << n << "): ";
    cin >> pos;
    cout << "Deleted element: " << arr[pos - 1] << endl;

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void linearSearch() {
    int val;
    bool found = false;
    cout << "Enter value to search: ";
    cin >> val;
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            cout << "Value found at position " << i + 1 << ".\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Value not found.\n";
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\n--- MENU ---\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createArray(); break;
            case 2: displayArray(); break;
            case 3: insertElement(); break;
            case 4: deleteElement(); break;
            case 5: linearSearch(); break;
            case 6: exit(0);
            default: cout << "Invalid choice.\n";
        }
    }
    return 0;
}
