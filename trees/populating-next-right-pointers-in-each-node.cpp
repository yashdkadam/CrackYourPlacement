/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */


class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       Node* temp = NULL;
       queue<Node*> q;
       q.push(root);
       while(!q.empty()){
           int size = q.size();
           while(size--){
               Node* curr = q.front();
               q.pop();
               curr->nextRight = temp;
               temp = curr;
               if(curr->right) q.push(curr->right);
               if(curr->left) q.push(curr->left);
           }
           temp = NULL;
       }
    }    
      
};














