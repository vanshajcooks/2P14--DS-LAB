#include <iostream>
using namespace std;

void makeArray(int*& data, int& size) {
    cout << "How many elements? ";
    cin >> size;

    if (data != nullptr) {
        delete[] data;
    }

    data = new int[size];
    cout << "Enter " << size << " values: ";
    for (int i = 0; i < size; ++i) {
        cin >> data[i];
    }
}

void showArray(const int* data, int size) {
    if (size == 0) {
        cout << "[Empty Array]\n";
        return;
    }
    cout << "Values: ";
    for (int i = 0; i < size; ++i) {
        cout << data[i] << (i == size - 1 ? "" : " ");
    }
    cout << "\n";
}

void addElement(int*& data, int& size) {
    int value, index;
    cout << "Value to insert: ";
    cin >> value;
    cout << "Index position (0-based): ";
    cin >> index;

    if (index < 0 || index > size) {
        cout << "Invalid index!\n";
        return;
    }

    int* temp = new int[size + 1];
    for (int i = 0; i < index; ++i) temp[i] = data[i];
    temp[index] = value;
    for (int i = index; i < size; ++i) temp[i + 1] = data[i];

    delete[] data;
    data = temp;
    ++size;

    cout << "Inserted successfully.\n";
}

void removeElement(int*& data, int& size) {
    if (size == 0) {
        cout << "No elements to delete.\n";
        return;
    }

    int target;
    cout << "Enter value to remove: ";
    cin >> target;

    int idx = -1;
    for (int i = 0; i < size; ++i) {
        if (data[i] == target) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        cout << "Value not found.\n";
        return;
    }

    int* temp = new int[size - 1];
    for (int i = 0; i < idx; ++i) temp[i] = data[i];
    for (int i = idx + 1; i < size; ++i) temp[i - 1] = data[i];

    delete[] data;
    data = temp;
    --size;

    cout << "Deleted successfully.\n";
}

void searchLinear(const int* data, int size) {
    int key;
    cout << "Search for value: ";
    cin >> key;

    bool exists = false;
    for (int i = 0; i < size; ++i) {
        if (data[i] == key) {
            cout << "Found at index " << i << "\n";
            exists = true;
        }
    }

    if (!exists) {
        cout << "Not found.\n";
    }
}

int main() {
    int* arr = nullptr;
    int n = 0;
    int choice;

    while (true) {
        cout << "\n=== Array Menu ===\n";
        cout << "1. Create array\n";
        cout << "2. Display array\n";
        cout << "3. Insert element\n";
        cout << "4. Delete element\n";
        cout << "5. Search (Linear)\n";
        cout << "6. Quit\n";
        cout << "Select option: ";
        cin >> choice;

        switch (choice) {
            case 1: makeArray(arr, n); break;
            case 2: showArray(arr, n); break;
            case 3: addElement(arr, n); break;
            case 4: removeElement(arr, n); break;
            case 5: searchLinear(arr, n); break;
            case 6:
                delete[] arr;
                cout << "Program ended.\n";
                return 0;
            default:
                cout << "Invalid selection. Try again.\n";
        }
    }
}

