#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char str1[100], str2[100];
    cout << "Enter a string: ";
    cin.getline(str1, 100);
        cout << "Enter a string: ";

    cin.getline(str2, 100);
        strcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;
    return 0;   }


    
