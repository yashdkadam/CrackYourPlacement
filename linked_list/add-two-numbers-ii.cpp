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
class Solution
{
public:
    ListNode *rev(ListNode *head)
    {
        ListNode *prev = NULL, *curr = head, *next = head;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode *addTwoNumbers(ListNode *first, ListNode *second)
    {
        first = rev(first);
        second = rev(second);
        ListNode *newListNode = new ListNode(-1);
        ListNode *temp = newListNode;
        int carry = 0;
        while (first != NULL || second != NULL || carry == 1)
        {
            int sum = 0;
            if (first != NULL)
            {
                sum += first->val;
                first = first->next;
            }
            if (second != NULL)
            {
                sum += second->val;
                second = second->next;
            }
            sum += carry;
            carry = sum / 10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }
        return rev(newListNode->next);
    }
};