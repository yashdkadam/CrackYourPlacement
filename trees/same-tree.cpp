/* A binary tree node


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


   
class Solution
{
    string str1, str2;
    int flag = 0;
    void preorder(Node* node){
    if(node == NULL){
        return;
    }
    if(flag == 0){
    // cout << node->data << "\n";
        str1 += to_string(node->data);
    }
    else{
        str2 += to_string(node->data);
    }
    preorder(node->left);
    preorder(node->right);
}
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        preorder(r1);
        // cout << str1 << "\n";
        flag++;
        preorder(r2);
        // cout << str2 << "\n";
        if(str1 == str2) return true;
        return false;
    }
};