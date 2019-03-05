// A simple and tail recursive C++ program to reverse
// a linked list
#include<stdio.h>

struct Node
{
	int data;
	struct Node *next;
};

  struct Node *newNode(int key)
{
	  struct Node *temp = NULL;
	temp->data = key;
	temp->next = NULL;
	return temp;
}

// A utility function to print a linked list
void printlist( struct Node *head)
{
	while(head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

// Driver program to test above functions
int main()
{
	Node *head1 = newNode(1);
	head1->next = newNode(2);
	head1->next->next = newNode(3);
	head1->next->next->next = newNode(4);
	head1->next->next->next->next = newNode(5);
	head1->next->next->next->next->next = newNode(6);
	head1->next->next->next->next->next->next = newNode(7);
	head1->next->next->next->next->next->next->next = newNode(8);
	cout << "Given linked list\n";
	printlist(head1);
//	reverse(&head1);
	cout << "\nReversed linked list\n";
	printlist(head1);
	return 0;
}
