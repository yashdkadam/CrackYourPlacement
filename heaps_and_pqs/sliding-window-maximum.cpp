//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> v;
        multiset<int> s;
        for(int i = 0; i < k; i++){
            s.insert(arr[i]);
        }
        v.push_back(*s.rbegin());
        for(int i = k; i < n; i++){
            s.erase(s.find(arr[i - k]));
            s.insert(arr[i]);
            v.push_back(*s.rbegin());
        }
        return v;
    }
};