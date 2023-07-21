/* Structure for tree and linked list

struct Noded
{
    int data;
    struct Noded* left;
    struct Noded* right;
    
    Noded(int x){
        data = x;
        left = right = NULL;
    }
};
 */
 


// This function should return head to the DLL
class Solution
{
    public:
    //Function to convert binary tree to doubly linked list and return it.
    void preorder(Node* root, vector<int> &v){
        if(root == NULL) return;
        preorder(root->left, v);
        v.emplace_back(root->data);
        preorder(root->right, v);
    }
    Node * bToDLL(Node *root)
    {
        vector<int> v;
        preorder(root, v);
        int n = v.size();
        Node* head = new Node(v[0]);
        Node* temp = head;
        head->left = NULL;
        for(int i = 1; i < n - 1; i++){
            Node* ne = new Node(v[i]);
            Node* nr = ne;
            temp->right=nr;
            nr->left=temp;
            temp = temp->right;
        }
        if(n>1){
            Node* last=new Node(v[n - 1]);
            Node* ls = last;
            temp->right = ls;
            ls->left = temp;
            ls->right = NULL;
        }
        return head;
    }
};













