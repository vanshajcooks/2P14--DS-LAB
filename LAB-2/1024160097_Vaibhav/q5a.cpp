#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements (n): ";
    cin >> n;

    int arr[50];
    for (int i = 0; i < n ; i++) {
        cout << "Enter element of diagonal matrix " << ": ";
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout << arr[i] << " "; 
            } else {
                cout << "0 "; 
            }
        }
        cout << endl; 
    }
    
    
}