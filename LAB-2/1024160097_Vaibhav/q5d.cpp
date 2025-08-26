#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter order of  matrix "<<"\n";
    cin >> n;

    int arr[50],k=0,z=(n*(n+1))/2;
    cout << "Enter " << z << " elements of lower triangular matrix: ";
    
    for(int i = 0; i < z; i++) {
        cout << "Enter " << i+1 << " element of lower triangular matrix " << ": ";
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
           if(i <= j) {
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