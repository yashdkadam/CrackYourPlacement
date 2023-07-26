//User function Template for C++

class Solution
{
    public:
    vector<int> v;
    int i;
    struct Node* temp1;
    void preorder(Node* node){
        if(node == NULL) return;
        v.push_back(node->key);
        preorder(node->left);
        preorder(node->right);
    }
    void flatten(Node *root)
    {
        v.clear();
        temp1 = NULL;
        struct Node* temp = root;
        preorder(root);
        i = 1;
        root = temp;
        root->left = NULL;
        root->right = NULL;
        while(i != v.size()){
            root->right = newNode(v[i]);
            i++;
            root = root->right;
        }
    }
};