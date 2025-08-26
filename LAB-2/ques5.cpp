#include <iostream>
#include <vector>
using namespace std;

class SpecialMatrix {
    vector<int> arr;
    int n;
public:
    SpecialMatrix(int size) { n = size; }

    // (a) Diagonal Matrix
    void setDiagonal(int i, int val) {
        if (arr.empty()) arr.resize(n);
        arr[i] = val;
    }
    int getDiagonal(int i, int j) {
        return (i == j) ? arr[i] : 0;
    }

    // (b) Tri-diagonal Matrix
    void setTriDiagonal(int i, int j, int val) {
        if (arr.empty()) arr.resize(3*n-2);
        if (i-j==1) arr[i-1] = val;             // below main
        else if (i==j) arr[n-1+i-1] = val;      // main
        else if (j-i==1) arr[2*n-1+i-1] = val;  // above main
    }

    // (c) Lower Triangular
    void setLowerTriangular(int i, int j, int val) {
        if (arr.empty()) arr.resize(n*(n+1)/2);
        if (i>=j) arr[i*(i-1)/2 + (j-1)] = val;
    }

    // (d) Upper Triangular
    void setUpperTriangular(int i, int j, int val) {
        if (arr.empty()) arr.resize(n*(n+1)/2);
        if (i<=j) arr[(i-1)*n - (i-2)*(i-1)/2 + (j-i)] = val;
    }

    // (e) Symmetric
    void setSymmetric(int i, int j, int val) {
        if (arr.empty()) arr.resize(n*(n+1)/2);
        if (i>=j) arr[i*(i-1)/2 + (j-1)] = val;
        else arr[j*(j-1)/2 + (i-1)] = val;
    }
};
