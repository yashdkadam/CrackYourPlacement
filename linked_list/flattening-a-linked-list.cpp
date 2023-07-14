

/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

/*  Function which returns the  root of
    the flattened linked list. */
Node *flatten(Node *root)
{
    multiset<int> m;
    while (root != NULL)
    {
        Node *temp = root;
        while (temp != NULL)
        {
            m.insert(temp->data);
            temp = temp->bottom;
        }
        temp = root->next;
        root = root->next;
    }
    for (auto i : m)
    {
        cout << i << " ";
    }
    //   cout << endl;
    return NULL;
}
