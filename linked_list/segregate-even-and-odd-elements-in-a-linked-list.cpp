// C++ program to segregate even and
// odd nodes in a Linked List
#include <bits/stdc++.h>
using namespace std;

/* a node of the singly linked list */
class Node
{
	public:
	int data;
	Node *next;
};

void segregateEvenOdd(Node **head_ref)
{
    vector<int> v;
    Node* temp = *head_ref;
    while(temp != NULL){
        if(temp->data % 2 == 0) v.push_back(temp->data);
        temp = temp->next;
    }
    temp = *head_ref;
    while(temp != NULL){
        if(temp->data % 2 != 0) v.push_back(temp->data);
        temp = temp->next;
    }
    temp = *head_ref;
    int i = 0;
    while(temp != NULL){
        temp->data = v[i];
        temp = temp->next;
        i++;
    }
}

/* UTILITY FUNCTIONS */
/* Function to insert a node at the beginning */
void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list of the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print nodes in a given linked list */
void printList(Node *node)
{
	while (node != NULL)
	{
		cout << node->data <<" ";
		node = node->next;
	}
}

/* Driver code*/
int main()
{
	/* Start with the empty list */
	Node* head = NULL;

	/* Let us create a sample linked list as following
	0->2->4->6->8->10->11 */

	push(&head, 11);
	push(&head, 13);
	push(&head, 8);
	push(&head, 6);
	push(&head, 9);
	push(&head, 2);
	push(&head, 0);

	cout << "Original Linked list ";
	printList(head);

	segregateEvenOdd(&head);

	cout << "\nModified Linked list ";
	printList(head);

	return 0;
}
