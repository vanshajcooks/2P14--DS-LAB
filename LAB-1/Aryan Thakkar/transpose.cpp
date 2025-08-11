#include<iostream>
using namespace std;
//transpose of a matrix
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
    int b[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            b[i][j]=a[j][i];

        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}