
    #include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        // check if it's NOT a vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result += ch;   // keep non-vowel characters
        }
    }

    cout << "String after deleting vowels: " << result << endl;

    return 0;
}

    