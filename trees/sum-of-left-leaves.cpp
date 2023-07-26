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
    void preorder(TreeNode* root, int &sum){
        if(root == NULL) return;
        if(root->left != NULL && root->left->left == NULL && root->left->right == NULL) sum += root->left->val;
        preorder(root->right, sum);
        preorder(root->left, sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        preorder(root, sum);
        return sum;
    }
};