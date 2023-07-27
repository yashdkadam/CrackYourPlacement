/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    struct Node* temp;
    int flag, leftSum, rightSum;
    void preorder(Node* node){
        if(node == NULL) return;
        preorder(node->left);
        if(node == temp){
        //   cout << node->data << "\n";
           flag++;
        }
        if(flag == 0 && node != temp) leftSum += node->data;
        else if(flag == 1 && node != temp) rightSum += node->data;
        preorder(node->right);
    }
    bool isSymmetric(struct Node* root)
    {
        flag = 0, leftSum = 0, rightSum = 0;
        temp = root;
	    preorder(root);
	   // cout << leftSum << " " << rightSum << "\n";
	    if(leftSum == rightSum) return true;
	    return false;
    }
};