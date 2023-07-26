/**
 * Definition for a binary tree TreeNode.
 * struct TreeTreeNode {
 *     int val;
 *     TreeTreeNode *left;
 *     TreeTreeNode *right;
 *     TreeTreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeTreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeTreeNode(int x, TreeTreeNode *left, TreeTreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
            vector<int> v;
       vector<int> v1;
    if (root == NULL)
        return v;
    queue<TreeNode*> q;
    q.push(root);
    while (q.empty() == false) {
        int TreeNodeCount = q.size();
        int i = 0;
        while (TreeNodeCount > 0) {
            struct TreeNode* TreeNode = q.front();
                v.push_back(TreeNode->val);
            q.pop();
            if (TreeNode->left != NULL)
                q.push(TreeNode->left);
            if (TreeNode->right != NULL)
                q.push(TreeNode->right);
            TreeNodeCount--;
            i++;
        }
        v1.push_back(v[v.size() - 1]);
        v.clear();      
    }
    return v1;
    }
};