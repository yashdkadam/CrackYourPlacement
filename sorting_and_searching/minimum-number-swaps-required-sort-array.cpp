#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr = {1, 5, 4, 3, 2};
	int cnt = 0, n = 5, flag = 0;
	for(int i = 0; i < n; i++){
	    int ind = 0;
	    flag = 0;
	    for(int j = i + 1; j < n; j++){
	        if(arr[j] < arr[i]){
	            ind = j;
	            flag = 1;
	        }
	    }
	    if(flag){
	        swap(arr[ind], arr[i]);
	        cnt++;
	    }
	}
	cout << cnt << endl;
	return 0;
}