/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode* root, priority_queue<int, vector<int>,greater<int>> &p){
        if(root == NULL) return;
        p.push(root->val);
        preorder(root->left, p);
        preorder(root->right, p);
    }
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int, vector<int>, greater<int>> p;
        int ans;
        k--;
        preorder(root, p);
        while(k--){
            p.pop();
        }
        return p.top();
    }
};