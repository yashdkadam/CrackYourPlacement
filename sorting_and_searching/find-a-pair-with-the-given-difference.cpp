bool findPair(int arr[], int n1, int n){
    //code
    unordered_map<int, int> m;
    for(int i = 0; i < n1; i++){
        m[arr[i]]++;
    }
    if(n == 0) {
        for(auto i : m){
            if(i.second == 2) return true;
        }
        return false;
    }
    for(int i = 0; i < n1; i++){
        if(m.find(arr[i] - n) != m.end()) return true;
    }
    return false;
}