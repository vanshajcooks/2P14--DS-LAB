#include <bits/stdc++.h>
using namespace std;

long long mergeCount(vector<int>& arr, int l, int m, int r) {
    vector<int> left(arr.begin() + l, arr.begin() + m + 1);
    vector<int> right(arr.begin() + m + 1, arr.begin() + r + 1);
    int i = 0, j = 0, k = l;
    long long cnt = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) arr[k++] = left[i++];
        else {
            arr[k++] = right[j++];
            cnt += left.size() - i;
        }
    }
    while (i < left.size()) arr[k++] = left[i++];
    while (j < right.size()) arr[k++] = right[j++];
    return cnt;
}

long long mergeSortCount(vector<int>& arr, int l, int r) {
    if (l >= r) return 0;
    int m = l + (r - l) / 2;
    long long cnt = 0;
    cnt += mergeSortCount(arr, l, m);
    cnt += mergeSortCount(arr, m + 1, r);
    cnt += mergeCount(arr, l, m, r);
    return cnt;
}

int main() {
    vector<int> arr = {8, 4, 2, 1};
    cout << mergeSortCount(arr, 0, arr.size() - 1) << "\n";
}
