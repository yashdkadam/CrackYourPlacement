class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        while (head != NULL)
        {
            if (head->val == INT_MAX)
                return true;
            head->val = INT_MAX;
            head = head->next;
        }
        return false;
    }
};