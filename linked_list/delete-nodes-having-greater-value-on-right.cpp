class Solution
{
    public:
    Node *compute(Node *head)
    {
        Node* ans = new Node(-1);
        Node* ans1 = ans;
        multiset<int> s;
        Node* temp = head;
        while(head != NULL){
            s.insert(head->data);
            head = head->next;
        }
        auto last = s.rbegin();
        while(temp != NULL){
            if(temp->data == *last){
                Node* temp1 = new Node(temp->data);
                ans->next = temp1;
                ans = ans->next;
                last++;
            } else{
                auto itr = s.find(temp->data);
                if(itr != s.end()){
                    s.erase(itr);
                }
            }
            temp = temp->next;
        }
        return ans1->next;
    }
    
};