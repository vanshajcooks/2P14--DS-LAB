#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int a[1000];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (a[i]>a[j]){
                cout<<"("<<a[i]<<","<<a[j]<<")\n";
            count++;
            }
        }}
    cout<<"Total number of inversions : "<<count<<endl;
    return 0;
}