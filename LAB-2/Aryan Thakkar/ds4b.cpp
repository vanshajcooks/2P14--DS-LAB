#include<iostream>
using namespace std;
#include<cstring>
int main(){
    char str[100];
    cout << "Enter a string: ";
    cin>> str;
     int n= strlen(str);
     for(int i=0;i<n/2;i++){
        char temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
     }
     cout<< "Reversed string: " << str << endl;
        return 0;

}
