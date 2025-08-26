#include <iostream>
using namespace std;

int main() {
    int arr[50];
    int n;
    
    cout << "Enter  no of elements  ";
    cin >> n;

   
    cout << "Enter " << n-1 << " elements " << "\n";
    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }

    int st = 0, end = n - 2;  

    while (st <= end) {
        int mid = (st + end) / 2;
        
        if (arr[mid] == mid + 1) {
           
            st = mid + 1;
        } else {
            
            end = mid - 1;
        }
    }    
    cout << "The missing number is: " << st + 1 << endl;

    return 0;
}