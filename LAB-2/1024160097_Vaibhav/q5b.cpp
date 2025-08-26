#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements n: ";
    cin >> n;

    int arr[50],k=0;
    
    for(int i = 0; i < (3*n)-2; i++) {
        cout << "Enter " << i+1 << " element of tri-diagonal matrix " << ": ";
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
           if(i-j == 0 || i-j == 1 || j-i == 1) {
                cout << arr[k] << " "; 
                k++;
            } else {
                cout << "0 "; 
            }
        }
        cout << endl;
  
}
return 0;
}