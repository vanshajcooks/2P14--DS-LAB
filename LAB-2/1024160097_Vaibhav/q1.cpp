#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout << "enter 5 elements in sorted order";
    
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
     int start,end,mid,x,found=0;
     cout<<"enter the elments of search";
     cin >> x;
     start=0, end=4;
     while(start<end){
      mid=(start +end)/2;
      if (arr[mid]==x){
        found=1;
        cout << "Element found at index: " << mid << endl;
        break;
      }
      else if (arr[mid]<x){
        start=mid+1;
      } else{
        end=mid-1;
      }
     }
     if (found==0){
      cout << "elements not found" <<endl;
     }
     return 0;
}