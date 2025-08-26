#include <bits/stdc++.h>
using namespace std;

long long countInversionsBrute(vector<int>& arr) {
    long long cnt = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j]) cnt++;
    return cnt;
}

int main() {
    vector<int> arr = {8, 4, 2, 1};
    cout << countInversionsBrute(arr) << "\n";
}
