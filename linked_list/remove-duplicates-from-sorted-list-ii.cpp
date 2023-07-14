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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
            return NULL;
        map<int, int> m;
        ListNode *temp = head;
        while (head != NULL)
        {
            m[head->val]++;
            head = head->next;
        }
        head = temp;
        ListNode *prev = NULL;
        for (auto i : m)
        {
            if (i.second == 1)
            {
                head->val = i.first;
                prev = head;
                head = head->next;
            }
        }
        if (prev != NULL)
            prev->next = NULL;
        else
            return NULL;
        return temp;
    }
};