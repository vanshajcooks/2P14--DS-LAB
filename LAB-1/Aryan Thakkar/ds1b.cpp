#include<iostream>
using namespace std;
int main() {
    int arr[1000]={1,2,3,4,5};
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pos;
    cout<<"Enter the position to delete: ";
    cin>>pos;
    int n=5;
    if(pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        
    }
    for(int i=pos; i<n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    cout<<"Array after deletion: "; 
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
   
}
    