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
    vector<int> v;
    void preorder(TreeNode* node){
        if(node == NULL) return;
        preorder(node->left);
        v.push_back(node->val);
        preorder(node->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        v.clear();
        preorder(root);
        return v;
    }
};