#include <iostream>
using namespace std;

void createArray(int* &arr, int &n) {
    cout << "Enter number of elements: ";
    cin >> n;
    delete[] arr; // free old memory if any
    arr = new int[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void displayArray(int* arr, int n) {
    if (n == 0) {
        cout << "Array is empty!\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertElement(int* &arr, int &n) {
    int element, pos;
    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter position (0-based index): ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position!\n";
        return;
    }

    int* newArr = new int[n + 1];
    for (int i = 0; i < pos; i++) newArr[i] = arr[i];
    newArr[pos] = element;
    for (int i = pos; i < n; i++) newArr[i + 1] = arr[i];

    delete[] arr;
    arr = newArr;
    n++;
    cout << "Element inserted.\n";
}

void deleteElement(int* &arr, int &n) {
    if (n == 0) {
        cout << "Array is empty! Nothing to delete.\n";
        return;
    }
    int element;
    cout << "Enter element to delete: ";
    cin >> element;

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        cout << "Element not found!\n";
        return;
    }

    int* newArr = new int[n - 1];
    for (int i = 0; i < pos; i++) newArr[i] = arr[i];
    for (int i = pos + 1; i < n; i++) newArr[i - 1] = arr[i];

    delete[] arr;
    arr = newArr;
    n--;
    cout << "Element deleted.\n";
}

void linearSearch(int* arr, int n) {
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "Element not found.\n";
    }
}

int main() {
    int* arr = nullptr; // dynamic array pointer
    int n = 0;
    int choice;

    while (true) {
        cout << "\n——MENU——\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                createArray(arr, n);
                break;
            case 2:
                displayArray(arr, n);
                break;
            case 3:
                insertElement(arr, n);
                break;
            case 4:
                deleteElement(arr, n);
                break;
            case 5:
                linearSearch(arr, n);
                break;
            case 6:
                delete[] arr; // free memory before exiting
                cout << "Exiting program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}
