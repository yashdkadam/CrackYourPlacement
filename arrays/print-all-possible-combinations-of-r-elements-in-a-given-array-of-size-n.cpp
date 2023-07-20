#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void f(int ind, vector<int> &arr, vector<int> &ds, int n, int r){
    if(ds.size() == r){
        for(auto i :ds){
            cout << i << " "; 
        }
        cout << endl;
        return;
    }
    for(int i = ind;i < n; i++){
        ds.push_back(arr[i]);
        f(i+ 1, arr, ds, n, r);
        ds.pop_back();
    }
}

int main() {
	vector<int> arr = {1, 2, 3, 4, 5};
	vector<int> ds;
	int n = arr.size();
	int r = 3;
	f(0, arr, ds, n, r);
	return 0;
}