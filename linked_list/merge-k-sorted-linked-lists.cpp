class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
            int i = 0;
            multiset<int> m;
            while(i != K){
                Node* temp = arr[i];
                while(temp != NULL){
                    m.insert(temp->data);
                    temp = temp->next;
                }
                i++;
            }
            Node* node = new Node(-1);
            Node* temp = node;
            for(auto i : m){
                Node* newnode = new Node(i);
                node->next = newnode;
                node = node->next;
            }
            // cout << endl;
            return temp->next;
    }
};