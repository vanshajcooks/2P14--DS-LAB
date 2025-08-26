#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    string name = "kriti";
    string caste = "sehgal";
    string result = name + caste;
    cout << "(a) Concatenated string: " << result << endl;

    reverse(name.begin(), name.end());
    cout << "(b) Reversed name: " << name << endl;

    string result2 = "";
    for (char ch : caste) {
        char lower = tolower(ch);
        if (!(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')) {
            result2 += ch;
        }
    }
    cout << "(c) Caste without vowels: " << result2 << endl;

    string hey = "HELLO";
    string result4 = "";
    for (char ch : hey) {
        result4 += tolower(ch);
    }
    cout << "(e) Lowercase conversion of HELLO: " << result4 << endl;

    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();

    vector<string> arr(n);
    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }

    sort(arr.begin(), arr.end());

    cout << "(d) Strings in alphabetical order:\n";
    for (string s : arr) {
        cout << s << endl;
    }

    return 0;
}
