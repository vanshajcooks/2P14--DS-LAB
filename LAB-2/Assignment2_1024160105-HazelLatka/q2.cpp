#include <iostream>
using namespace std;

int main() {
    // bubble sort
    int a[11]={10,30,54,67,98,9,-7,67,100,24,90};
    int n;
    for(int i=0;i<=10;i++){
        for(int j=0;j<11-i-1;j++){
             if(a[j]>a[j+1]){
            int b;
            b=a[j];
            a[j]=a[j+1];
            a[j+1]=b;
        }
        }
    }
    
    for(int i=0;i<=10;i++){
        cout<<a[i]<<endl;
    }
    
}

