#include<iostream>
using namespace std;
int main(){
    int arr[1000]={64,34,25,12,22,11,90};
    int  n=7;
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]); 
                swapped=true;
            }
        }
        if(!swapped) {
            break; // If no two elements were swapped, the array is sorted
        }
    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
