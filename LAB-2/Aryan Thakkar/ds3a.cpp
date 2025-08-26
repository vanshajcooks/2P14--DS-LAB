#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    


    cout << "Enter the elements: ";
    for(int i = 0; i < n-2; i++) {
        cin >> arr[i];
    }
    int ans = -1;
    for(int i=0;i<n;i++){
       if(arr[i]!=i+1){
      ans=i+1;
      break;
       }



    }
    cout << "The first missing positive integer is: " << ans << endl;
}