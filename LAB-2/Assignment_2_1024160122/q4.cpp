#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void concatenate(char s1[], char s2[]) {
   
    strcat(s1, s2);
}

void reverseString(char s[]) {
    int n = strlen(s);
    for (int i = 0; i < n/2; i++) {
        swap(s[i], s[n-i-1]);
    }
}

void removeVowels(char s[]) {
    char temp[100]; 
    int j = 0;
    for (int i = 0; s[i]; i++) {
        char c = tolower(s[i]);
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')) {
            temp[j++] = s[i];
        }
    }
    temp[j] = '\0';
    strcpy(s, temp);
}

void sortStrings(string arr[], int n) {
    sort(arr, arr+n);
}

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

int main() {
    int choice;
    char s1[100], s2[100];
    string s3_array[3];
    int n_sort = 3;

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. CONCATENATE two strings" << endl;
        cout << "2. REVERSE a string" << endl;
        cout << "3. REMOVE VOWELS from a string" << endl;
        cout << "4. SORT an array of strings" << endl;
        cout << "5. EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 
        switch (choice) {
            case 1:
                cout << "Enter the first string: ";
                cin.getline(s1, 100);
                cout << "Enter the second string: ";
                cin.getline(s2, 100);
                concatenate(s1, s2);
                cout << "Concatenated string is: " << s1 << endl;
                break;
            case 2:
                cout << "Enter a string to reverse: ";
                cin.getline(s1, 100);
                reverseString(s1);
                cout << "Reversed string is: " << s1 << endl;
                break;
            case 3:
                cout << "Enter a string to remove vowels from: ";
                cin.getline(s1, 100);
                removeVowels(s1);
                cout << "String with vowels removed: " << s1 << endl;
                break;
            case 4:
                cout << "Enter 3 strings to sort:" << endl;
                for (int i = 0; i < n_sort; ++i) {
                    cout << "String " << i+1 << ": ";
                    getline(cin, s3_array[i]);
                }
                sortStrings(s3_array, n_sort);
                cout << "Sorted strings:" << endl;
                for (int i = 0; i < n_sort; ++i) {
                    cout << s3_array[i] << endl;
                }
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
