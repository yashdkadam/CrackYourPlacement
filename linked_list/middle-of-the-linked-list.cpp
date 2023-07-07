class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            head = head->next;
            // temp = temp->next;
            if (temp->next->next != NULL)
            {
                temp = temp->next->next;
            }
            else
            {
                break;
            }
        }
        return head;
    }
};