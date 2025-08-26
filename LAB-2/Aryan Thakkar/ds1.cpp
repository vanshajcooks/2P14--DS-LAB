#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
   
    

    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid= start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if( arr[mid]>target){
            end=mid-1;

        }
        else{
            start=mid+1;
        }
    }
    return -1;

}
