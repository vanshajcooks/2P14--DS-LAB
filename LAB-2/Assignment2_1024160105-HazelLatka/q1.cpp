#include <iostream>
using namespace std;

int main() {
    //sorting the array
    int a[11]={10,30,54,67,98,9,-7,67,100,24,90};
    int c[11];
    int n;
    n=5;
    for(int i=0;i<=10;i++){
        for(int j=i+1;j<=10;j++){
             if(a[i]>a[j]){
            int b;
            b=a[i];
            a[i]=a[j];
            a[j]=b;
        }
        }
    }
    
    for(int i=0;i<=10;i++){
        cout<<a[i]<<endl;
    }
    //binary search
int s;    
cout<<"Enter the number you want to search:  "<<endl;
cin>>s;
int size=11;
int lb=0;
int hb=size-1;
int half;
int y=0;

while(lb<=hb){
    half=(lb+hb)/2;
    if(a[half]==s){
       y=1;
      break;
    }
    else if (a[half]>s){
        hb=half-1;
    }
    else{
        lb=half+1;
    }
}

if(y==1){
    cout<<"FOUND AT INDEX "<<half<<endl;
}
else{
    cout<<"NOT FOUND"<<endl;
}

}

