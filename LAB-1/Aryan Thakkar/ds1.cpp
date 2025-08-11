#include<iostream>
using namespace std;
int main(){
    int arr[1000]={1,2,3,4,5};
    for(int i=0; i<5; i++){
        
            cout<<arr[i]<<" ";
           
        
}
cout<<endl;
int pos;
    cout<<"Enter the position to insert: ";
    cin>>pos;
    int n=5; // Current size of the array
    if(pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        
    }
    
    int newElement;
    cout<<"Enter the element to insert: ";
    cin>>newElement;
    

    for(int i=n; i>pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = newElement;
    n++; 
    cout<<"Array after insertion: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}