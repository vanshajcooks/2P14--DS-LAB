#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s1;
    cout<< "Enter a string: ";
    getline(cin,s1);
    string s2;
    cout<< "Enter another string: ";
    getline(cin,s2);
    cout<<"Concatenated string is : "<<s1+s2<<endl;
    

}