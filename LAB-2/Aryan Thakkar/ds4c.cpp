#include<iostream>
using namespace std;
#include<cstring>
int main(){
    int n;
    cout << "Enter the number of strings: ";

    cin >> n;
    cin.ignore(); // To ignore the newline character after reading n
    char str[10][1000];
    cout << "Enter the strings: " << endl;
    for(int i = 0; i < n; i++) {
    cin>> str[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(str[i], str[j]) > 0) {
                swap(str[i], str[j]);
        }
    }

}
cout << "Sorted strings: " << endl;
for(int i = 0; i < n; i++) {
    cout << str[i] << endl;
}
return 0;
}