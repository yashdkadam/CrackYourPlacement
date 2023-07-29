/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp1 = new Node(-1);
        Node* temp = temp1;
        Node* temp2 = head;
        unordered_map<Node*, Node*> m;
        vector<Node*> v;
        while(head != NULL){
            temp->next = new Node(head->val);
            temp = temp->next;
            head = head->next;
        }
        temp = temp1->next;
        head = temp2;
        while(temp != NULL){
            m[head] = temp;
            temp = temp->next;
            head = head->next;
        }
        temp = temp1->next;
        head = temp2;
        while(temp != NULL){
            if(head->random != NULL){
                temp->random = m[head->random];
            }
            temp = temp->next;
            head = head->next;
        }
        return temp1->next;
    }
};
