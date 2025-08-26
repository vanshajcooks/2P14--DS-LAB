#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    string str[n];

    cout << "Enter strings:\n";
    for(int i = 0; i < n; i++)
        cin >> str[i];

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(str[i] > str[j]) {
                string temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    cout << "Sorted strings:\n";
    for(int i = 0; i < n; i++)
        cout << str[i] << endl;

    return 0;
}
