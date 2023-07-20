class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        long long int i = 0, j = m - 1, mini = INT_MAX;
        while(j < n){
            mini = min(mini, a[j] - a[i]);
            i++;
            j++;
        }
        return mini;
    }   
};