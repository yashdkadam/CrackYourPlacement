#include <bits/stdc++.h>
using namespace std;

int ifloor(vector<int> &arr, int n, int x){
    auto i = lower_bound(arr.begin(), arr.end(), x);
    int ind = i - arr.begin();
    if(ind == n) return -1;
    return arr[ind];
}

int iceil(vector<int> &arr, int n, int x){
    auto i = upper_bound(arr.begin(), arr.end(), x);
    int ind = i - arr.begin();
    if(ind == n) return -1;
    return arr[ind];
}

int main() {
    vector<int> arr = { 1, 2, 8, 10, 10, 12, 19 };
    int n = arr.size();
    int x = 8;
	cout << ifloor(arr, n, x) << endl;
	cout << iceil(arr, n, x) << endl;
	return 0;
}