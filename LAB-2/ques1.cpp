#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   int arr[6]={1,2,3,4,5,6};
   int find=3;
   int length= sizeof(arr)/sizeof(arr[0]);
   int start=0;
   int end=length-1;
  
   int index=-1;
   while(start<=end){
        int middle = (start + end) / 2;
       if(arr[middle]==find)
       {
           index=middle;
       }
       
       else if(find>middle){
          start=middle+1;
       }
       else{
          start=middle-1;
       }
   }
   
   cout<< "element is found at index"<< index;

    return 0;
}