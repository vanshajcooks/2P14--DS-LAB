#include <iostream>
#include <stack>
using namespace std;

string reverseString(string s) {
    stack<char> st;
    for (char c : s) st.push(c);
    string rev = "";
    while (!st.empty()) { rev += st.top(); st.pop(); }
    return rev;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << "Reversed: " << reverseString(s) << endl;
}
