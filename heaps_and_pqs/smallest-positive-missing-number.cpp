
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int maxi = *max_element(arr, arr + n);
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++){
            if(arr[i] >= 0){
               m[arr[i]]++;
            }
        }
        for(int i = 1; i <= maxi; i++){
            if(m[i] == 0){
                return i;
            }
        }
        if(maxi < 0) return 1;
        return maxi + 1;
    } 
};