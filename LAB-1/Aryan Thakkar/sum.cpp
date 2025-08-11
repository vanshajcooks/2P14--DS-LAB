#include<iostream>
using namespace std;
//Write a program to find sum of every row and every column in a two-dimensional
int main(){
    int r,c;
    cout<<"Enter number of rows and columns: ";
    cin>>r>>c;
    int a[r][c];
    cout<<"Enter elements of the matrix: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    int rowSum[r];
    int colSum[c];
    for(int i = 0; i < r; i++) rowSum[i] = 0;
    for(int j = 0; j < c; j++) colSum[j] = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            rowSum[i] += a[i][j];
            colSum[j] += a[i][j];
        }
    }
    cout<<"Row sums: ";
    for(int i=0;i<r;i++){
        cout<<rowSum[i]<<" ";
    }
    cout<<endl;
    cout<<"Column sums: ";
    for(int j=0;j<c;j++){
        cout<<colSum[j]<<" ";
    }
    cout<<endl;
    return 0;

}