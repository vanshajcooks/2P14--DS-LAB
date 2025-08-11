#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    int start=0;
    int end =n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;}
        cout<<"Reversed array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}