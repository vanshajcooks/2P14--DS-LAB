#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstring>
using namespace std;

// concatenate
void concat(string a, string b) {
    cout << "Concatenated: " << a + b << endl;
}

// reverse
void reverse(string s) {
    reverse(s.begin(), s.end());
    cout << "Reversed: " << s << endl;
}

// delete vowels
void deletevowels(string s) {
    string result = "";
    for (char c : s) {
        if (!strchr("aeiouAEIOU", c))
            result += c;
    }
    cout << "Without vowels: " << result << endl;
}

// alphabetically
void alphasort(string s) {
    sort(s.begin(), s.end());
    cout << "Sorted: " << s << endl;
}

// uppercase to lowercase
void utol(string s) {
    for (char &c : s) c = tolower(c);
    cout << "Lowercase: " << s << endl;
}

int main(){
    string a = "HKSkdha", b = "dksakhkq";

    concat(a,b);
    reverse(b);
    deletevowels(a);
    alphasort(b);
    utol(a);

    return 0;
}