#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 5, 4, 3};
    vector<int> brr = arr;
    sort(brr.begin(), brr.end());
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != brr[i]){
            reverse(arr.begin() + i, arr.end());
            cout << (arr == brr) << endl;
            break;
        }
    }
	return 0;
}