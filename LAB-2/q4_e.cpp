#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter an uppercase character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; 
        cout << "Lowercase character: " << ch << endl;
    } else {
        cout << "Entered character is not uppercase!" << endl;
    }

    return 0;
}
