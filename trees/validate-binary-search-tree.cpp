class Solution
{
    int flag, prev;
    void preorder(Node *node){
        if(node == NULL) return;
        preorder(node->left);
        if(node->data < prev) flag++;
        prev = node->data; 
        preorder(node->right);
    }
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        flag = 0, prev = 0;
        preorder(root);
        if(flag > 0) return false;
        return true;
    }
};