class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        set<int> s;
        ListNode *temp = head;
        ListNode *temp1 = head;
        while (head != NULL)
        {
            s.insert(head->val);
            head = head->next;
        }
        auto it = s.begin();
        while (it != s.end())
        {
            temp->val = *it;
            it++;
            if (it == s.end())
            {
                temp->next = NULL;
                break;
            }
            temp = temp->next;
        }
        return temp1;
    }
};