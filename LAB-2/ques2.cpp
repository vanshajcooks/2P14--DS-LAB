#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int temp=-9;
   int arr[7]={64,34,25,12,22,11,90};
   for(int i=0; i<=6; i++){
       for(int j=i+1; j<=6; j++ ){
           if(arr[i]>arr[j]){
               //swap
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
           }
       }
   }
 cout<< "new array is:";
 for(int i=0; i<=6; i++){
     cout<<arr[i]<<endl;
 }
    return 0;
}