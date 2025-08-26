#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    // Concatenate using append
    str1.append(str2);

    cout << "After concatenation: " << str1 << endl;
    return 0;
}
