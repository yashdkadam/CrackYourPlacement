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
    int height(TreeNode* node){
        int lheight = 0, rheight = 0;
        if(node == NULL) return 0;
        lheight = height(node->left);
        rheight = height(node->right);
        return max(lheight, rheight) + 1;
    }
    int maxDepth(TreeNode* root) {
        return height(root);
    }
};