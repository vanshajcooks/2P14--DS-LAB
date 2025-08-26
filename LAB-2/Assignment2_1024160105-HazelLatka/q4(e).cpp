#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    if(c >= 'A' && c <= 'Z')
        c = c + 32;  // ASCII difference
    cout << "Lowercase: " << c << endl;
    return 0;
}
