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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        if(n == len){
            ListNode* ans = head->next;
            return ans;
        } 
        int i = 1, tar = len - n;
        temp = head;
        while(i != tar){
            temp = temp->next;
            i++;
        }
        if(temp->next != NULL && temp->next->next != NULL) temp->next = temp->next->next;
        else temp->next = NULL;
        return head;
    }
};