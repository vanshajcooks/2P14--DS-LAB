#include <iostream>
using namespace std;

int main() {
    
   int arr[19]={1,2,3,4,5,6,7,9,10,11,12,13,14,15,16,17,18,19,20};
   //linear search
   for(int i=0;i<19;i++){
       if(arr[i]!=i+1){
           cout<<"Missing number is "<<i+1<<endl;
           break;
       }
   }
   
   
int lb = 0, hb = 18;
int missing;

while(lb <= hb){
    int mid = (lb + hb) / 2;
    if(arr[mid] == mid + 1){
        lb = mid + 1;
    } else {
        missing = mid + 1;
        hb = mid - 1;
    }
}

cout << "MISSING NUMBER IS: " << missing;

   
   
}
