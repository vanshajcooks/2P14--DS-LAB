// String Related Programs
// (a) Write a program to concatenate one string to another string.
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    strcat(str1, str2); // Concatenate str2 to str1
    cout << "Concatenated string: " << str1 << endl;

    return 0;
}
// (b) Write a program to reverse a string.
#include <iostream>
#include <cstring>                                  
using namespace std;
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        swap(str[i], str[len - i - 1]); // Swap characters
    }
    cout << "Reversed string: " << str << endl;

    return 0;
}
// (c) Write a program to delete all the vowels from the string.
#include <iostream>
#include <cstring>      
using namespace std;
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    char result[100];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j++] = str[i]; // Copy non-vowel characters
        }
    }
    result[j] = '\0'; // Null-terminate the result string
    cout << "String after removing vowels: " << result << endl;

    return 0;
}
// (d) Write a program to sort the strings in alphabetical order.
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    
// (e) Write a program to convert a character from uppercase to lowercase