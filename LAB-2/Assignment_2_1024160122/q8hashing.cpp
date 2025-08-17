#include <bits/stdc++.h>
using namespace std;

int countDistinctHashing(vector<int>& arr) {
    unordered_set<int> s(arr.begin(), arr.end());
    return s.size();
}

int main() {
    vector<int> arr = {4, 5, 4, 2, 2, 8};
    cout << countDistinctHashing(arr) << "\n";
}
