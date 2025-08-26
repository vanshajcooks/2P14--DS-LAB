#include <iostream>
using namespace std;
int main(){
    int a;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"enter missing number";
    cin>>a;
    for(int i=0; i<10; i++){
        if(arr[i]==a){cout<<i;}
    }

    return 0;
}