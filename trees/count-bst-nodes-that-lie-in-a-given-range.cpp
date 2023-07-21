//Function to count number of nodes in BST that lie in the given range.
class Solution{
    int count = 0, L, H;
    void preorder(Node* node){
    if(node == NULL){
       return;
    }
    // cout << node->data << "\n";
    if(node->data >= L && node->data <= H){
        count++;
    }
    preorder(node->left);
    preorder(node->right);
}
public:
    int getCount(Node *root, int l, int h)
    {
        L = l;
        H = h;
        preorder(root);
        return count;  
    }
};
