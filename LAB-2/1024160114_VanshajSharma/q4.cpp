#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void concatStrings() {
    string s1, s2;
    cout << "Enter first string: ";
    cin.ignore();
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);
    cout << "Concatenated string: " << s1 + s2 << endl;
}

void reverseString() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    cout << "Reversed string: " << str << endl;
}

void sortStrings() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    char str[10][1000];
    cout << "Enter the strings: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                char temp[1000];
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    cout << "Sorted strings: " << endl;
    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }
}

void removeVowels() {
    char str[1000];
    cout << "Enter a string: ";
    cin >> str;
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' ||

