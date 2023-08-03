/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    vector<int> v;
    void f(Node* head){
        if(head == NULL) return;
        while(head != NULL){
            v.push_back(head->val);
            if(head->child){
                f(head->child);
            }
            head = head->next;
        }
    }
    Node* flatten(Node* head) {
        if(head == NULL) return head;
        v.clear();
        f(head);
        Node* curr = new Node(-1);
        Node* ans = curr;
        for(auto i: v){
            curr->next = new Node(i);
            curr = curr->next;
        }
        Node* prev1 = ans->next;
        curr = ans->next->next;
        cout << prev1->val << " " << curr->val << endl;
        while(curr != NULL){
            curr->prev = prev1;
            prev1 = prev1->next;
            curr = curr->next;
        }

        return ans->next;
    }
};