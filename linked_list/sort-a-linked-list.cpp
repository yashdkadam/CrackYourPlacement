/* Structure of the linked list node is as
struct Node
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/

class Solution
{
public:
    // Function to sort the given linked list using Merge Sort.
    Node *mergeSort(Node *head)
    {
        vector<int> v;
        Node *temp = head;
        while (head != NULL)
        {
            v.push_back(head->data);
            head = head->next;
        }
        head = temp;
        int i = 0;
        sort(v.begin(), v.end());
        while (head != NULL)
        {
            head->data = v[i];
            head = head->next;
            i++;
        }
        return temp;
    }
};