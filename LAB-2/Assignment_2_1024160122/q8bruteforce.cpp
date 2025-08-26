#include <bits/stdc++.h>
using namespace std;

int countDistinctSorting(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
        if (i == 0 || arr[i] != arr[i - 1]) cnt++;
    return cnt;
}

int main() {
    vector<int> arr = {4, 5, 4, 2, 2, 8};
    cout << countDistinctSorting(arr) << "\n";
}
