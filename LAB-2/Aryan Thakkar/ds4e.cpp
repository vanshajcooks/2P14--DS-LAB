#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter an uppercase string: ";
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]= str[i]+('a'-'A');
            
          
        }else{
            
            return 1;
           
        }
                }
                cout<<"Lowercase string: "<<str<<endl;
                return 0;
    }

    
