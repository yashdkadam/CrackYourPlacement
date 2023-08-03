/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* clone = head;
        vector<ListNode*> v;
        while(head != NULL){
            v.push_back(head);
            head = head->next;
        }
        left--; 
        cout << v.size() << " " << left << " " << right << endl;
        if(right == v.size())
            reverse(v.begin() + left, v.end());
        else
            reverse(v.begin() + left, v.begin() + right);
        for(auto i : v){
            cout <<i->val << " ";
        }
        cout << endl;
        ListNode* newl = new ListNode(-1);
        ListNode* tmp = newl;
        for(auto i : v){
            newl->next = i;
            newl = newl->next;
        }
        newl->next = NULL;
        return tmp->next;
    }
};