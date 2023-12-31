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
    vector<ListNode*, ListNode*> rev(ListNode* head, int k){
        ListNode* curr = head;
        ListNode* next = head;
        ListNode* prev = NULL;
        while(k--){
            if(curr->next == NULL || curr == NULL) return prev;
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return {prev, curr};
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        vector<ListNode*> v;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next
        }
        for(int i = 0; i < len; i += k){
            vector<ListNode*, ListNode*> temp = rev(head, k);
            v.push_back();

        }
        return NULL;
    }
};