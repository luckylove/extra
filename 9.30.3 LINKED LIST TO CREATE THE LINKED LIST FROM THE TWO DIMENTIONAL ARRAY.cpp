// CPP program to construct a linked list
// from given 2D matrix
//



// two pointer linked list is created here accordingly to the given condition


#include <bits/stdc++.h>
using namespace std;

// struct node of linked list
struct Node {
	int data;
	Node* right, *down;
};

// returns head pointer of linked list
// constructed from 2D matrix
Node* construct(int arr[][3], int me, int j,
							int m, int n)
{
	// return if me or j is out of bounds
	if (me > n - 1 || j > m - 1)
		return NULL;

	// create a new node for current me and j
	// and recursively allocate its down and
	// right pointers
	Node* temp = new Node();
	temp->data = arr[me][j];
	temp->right = construct(arr, me, j + 1, m, n);
	temp->down = construct(arr, me + 1, j, m, n);
	return temp;
}

// utility function for displaying
// linked list data
void display(Node* head)
{
	// pointer to move right
	Node* Rp;

	// pointer to move down
	Node* Dp = head;

	// loop till node->down is not NULL
	while (Dp) {
		Rp = Dp;

		// loop till node->right is not NULL
		while (Rp) {
			cout << Rp->data << " ";
			Rp = Rp->right;
		}
		cout << "\n";
		Dp = Dp->down;
	}
}

// driver program
int main()
{
	// 2D matrix
	int arr[][3] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};

	int m = 3, n = 3;
	Node* head = construct(arr, 0, 0, m, n);
	display(head);
	return 0;
}

