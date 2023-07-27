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
  public:
    //Function to check if S is a subtree of tree T.
    int flag;
    string comp;
    void preorder(Node* root, char d, string &s){
        if(root == NULL) return;
        s += d;
        s += to_string(root->data);
        preorder(root->left, 'L', s);
        preorder(root->right, 'R', s);
    }
    void preorder1(Node* root, Node* S){
        if(root == NULL) return;
        if(root->data == S->data){
            string temp = "";
            preorder(root, '*', temp);
            temp.erase(temp.begin());
            // cout << comp << " " << temp << endl;
            if(comp == temp) flag = 1;
        }
        preorder1(root->left, S);
        preorder1(root->right, S);
    }
    bool isSubTree(Node* T, Node* S) 
    {
        flag = 0;
        comp = "";
        string t = "";
        preorder(S, '*', comp);
        comp.erase(comp.begin());
        preorder1(T, S);
        return flag;
    }
};