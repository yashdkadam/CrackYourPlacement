/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    int flag;
    int heightTree(Node *node){
        int rheight = 0, lheight = 0;
        if(node->left == NULL && node->right == NULL) return 1;
        if(node->left) rheight += heightTree(node->left);
        if(node->right) lheight += heightTree(node->right);
        if(abs(lheight - rheight) >= 2) flag = 1;
        return max(lheight, rheight) + 1;
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        flag = 0;
        int height = heightTree(root);
        if(flag == 1) return 0;
        return 1;
    }
};