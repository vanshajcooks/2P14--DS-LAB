// Name: Prashant Narayan Verma
// Roll No: 1024160140

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// (a) Concatenate two strings
void concatenateStrings() {
    char str1[100], str2[100];
    cout << "\nEnter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    strcat(str1, str2);
    cout << "Concatenated String: " << str1 << endl;
}

// (b) Reverse a string
void reverseString() {
    string str;
    cout << "\nEnter a string: ";
    cin >> str;
    reverse(str.begin(), str.end());
    cout << "Reversed String: " << str << endl;
}

// (c) Delete all vowels
bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}

void deleteVowels() {
    string str, result = "";
    cout << "\nEnter a string: ";
    cin >> str;
    for (char c : str) {
        if (!isVowel(c)) result += c;
    }
    cout << "String without vowels: " << result << endl;
}

// (d) Sort strings alphabetically
void sortStrings() {
    int n;
    cout << "\nEnter number of strings: ";
    cin >> n;

    string arr[100];
    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    cout << "Strings in Alphabetical Order:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << endl;
}

// (e) Convert uppercase to lowercase
void convertCase() {
    char ch;
    cout << "\nEnter an uppercase character: ";
    cin >> ch;
    cout << "Lowercase: " << (char)tolower(ch) << endl;
}

// ---------------- MAIN FUNCTION ----------------
int main() {
    int choice;

    do {
        cout << "\n===== STRING PROGRAMS MENU =====\n";
        cout << "1. Concatenate Strings\n";
        cout << "2. Reverse a String\n";
        cout << "3. Delete Vowels from a String\n";
        cout << "4. Sort Strings Alphabetically\n";
        cout << "5. Convert Uppercase to Lowercase\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: concatenateStrings(); break;
            case 2: reverseString(); break;
            case 3: deleteVowels(); break;
            case 4: sortStrings(); break;
            case 5: convertCase(); break;
            case 6: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
