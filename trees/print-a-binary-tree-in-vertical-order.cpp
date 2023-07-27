class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        if(root == NULL) return {};
        
        multimap<int, int> m;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            int qs = q.size();
            for(int i = 0; i < qs; i++){
                Node* temp = q.front().first;
                int line = q.front().second;
                q.pop();
                
                m.insert({line, temp->data});
                if(temp->left) q.push({temp->left, line - 1});
                if(temp->right) q.push({temp->right, line + 1});
            }
        }
        vector<int> ans;
        for(auto i : m){
            ans.emplace_back(i.second);
        }
        return ans;
    }
};
