// q1 
//Piyush (1024160081)
#include <iostream>
using namespace std;

const int SIZE = 100;
int dataArr[SIZE];
int length = 0;
    
void createArr() {
    cout << "How many elements? ";
    cin >> length;
    cout << "Enter " << length << " numbers: ";
    for (int i = 0; i < length; ++i) {
        cin >> dataArr[i];
    }
}

void showArr() {
    if (length == 0) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array: ";
    for (int i = 0; i < length; ++i) {
        cout << dataArr[i] << " ";
    }
    cout << "\n";
}

void addElement() {
    int position, value;
    cout << "Position (0-based) and value to insert: ";
    cin >> position >> value;

    if (position < 0 || position > length) {
        cout << "Invalid position!\n";
        return;
    }
    for (int i = length; i > position; --i) {
        dataArr[i] = dataArr[i - 1];
    }
    dataArr[position] = value;
    length++;
}

void removeElement() {
    int position;
    cout << "Enter position to remove (0-based): ";
    cin >> position;

    if (position < 0 || position >= length) {
        cout << "Invalid position!\n";
        return;
    }
    for (int i = position; i < length - 1; ++i) {
        dataArr[i] = dataArr[i + 1];
    }
    length--;
}

void searchElement() {
    int target;
    cout << "Enter value to search: ";
    cin >> target;

    for (int i = 0; i < length; ++i) {
        if (dataArr[i] == target) {
            cout << "Found at index " << i << "\n";
            return;
        }
    }
    cout << "Not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n==== ARRAY MENU ====\n"
             << "1. Create\n"
             << "2. Display\n"
             << "3. Insert\n"
             << "4. Delete\n"
             << "5. Search\n"
             << "6. Exit\n"
             << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createArr(); break;
            case 2: showArr(); break;
            case 3: addElement(); break;
            case 4: removeElement(); break;
            case 5: searchElement(); break;
            case 6: cout << "Goodbye!\n"; break;
            default: cout << "Invalid option, try again.\n";
        }
    } while (choice != 6);

    return 0;
}
//  piyush (1024160081)