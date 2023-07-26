class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX, op = 0, pist = 0;
        for(auto i : prices){
            if(i < lsf){
                lsf = i;
            }
            pist = i - lsf;
            if(op < pist){
                op = pist;
            }
        }
        return op;
    }
};