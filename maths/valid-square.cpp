class Solution {
public:
    int getslope(vector<int> &p, vector<int> &q){
        return ((q[0] - p[0]) != 0) ? (q[1] - p[1])/(q[0] - p[0]) : INT_MAX;
    }
    int dist(vector<int> &p, vector<int> &q){
        return pow(q[1] - p[1], 2) + pow(q[0] - p[0], 2);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> q = {p1, p2, p3, p4};
        set<int> s;
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(i != j){
                    s.insert(dist(q[i], q[j]));
                }
            }
        }
        if(s.size() <= 2){
            int first = *s.begin(), last = *s.rbegin();
            return (first*2 == last && first != 0 && last != 0);
        }
        return false;
    }
};