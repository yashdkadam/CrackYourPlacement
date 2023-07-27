// C++ program to rearrange a linked list in-place
#include <bits/stdc++.h>
using namespace std;

// Linkedlist Node structure
struct Node {
	int data;
	struct Node* next;
};

// Function to create newNode in a linkedlist
Node* newNode(int key)
{
	Node* temp = new Node;
	temp->data = key;
	temp->next = NULL;
	return temp;
}

// Function to reverse the linked list
void reverselist(Node** head)
{
	// Initialize prev and current pointers
	Node *prev = NULL, *curr = *head, *next;

	while (curr) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
}

// Function to print the linked list
void printlist(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		if (head->next)
			cout << "-> ";
		head = head->next;
	}
	cout << endl;
}

// Function to rearrange a linked list
void rearrange(Node* head)
{
	vector<int> temp;
	while(head != NULL){
	    temp.push_back(head->data);
	    head = head->next;
	}
	Node* ans = newNode(-1);
	Node* ans1 = ans;
	int i = 0, j = temp.size() - 1;
	while(i < j){
	    ans->next = newNode(temp[i]);
	    ans = ans->next;
	    ans->next = newNode(temp[j]);
	    ans = ans->next;
	    i++;
	    j--;
	}
	if(temp.size() % 2 != 0) ans->next = newNode(temp[temp.size()/2]);
	ans = ans1;
	printlist(ans->next);
}

// Driver program
int main()
{
	Node* head = newNode(1);
	head->next = newNode(2);
	head->next->next = newNode(3);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(5);

	printlist(head); // Print original list
	rearrange(head); // Modify the list
	return 0;
}
