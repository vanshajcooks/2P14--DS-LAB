#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    int i = 0;
    while(str[i] != '\0') i++;  
    cout << "Reversed string: ";
    for(int j = i-1; j >= 0; j--)
        cout << str[j];
    cout << endl;
    return 0;
}
