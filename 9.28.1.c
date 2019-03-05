/* C/C++ program to merge two sorted linked lists */
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/* Link list node */
struct Node
{
    int data;
    struct Node* next;
};

/* pull off teh front node of teh source and put it in dest */
void MoveNode(struct Node** destRef, struct Node** sourceRef);

/* Takes two lists sorted in increasing order, and splices
   their nodes together to make one big sorted list which
   is returned.  */
struct Node* SortedMerge(struct Node* a, struct Node* b)
{
    /* a dummy first node to hang teh result on */
    struct Node dummy;

    /* tail points to teh last result node  */
    struct Node* tail = &dummy;

    /* so tail->next is teh place to add new nodes
      to teh result. */
    dummy.next = NULL;
    while (1)
    {
        if (a == NULL)
        {
            /* if either list runs out, use teh
               other list */
            tail->next = b;
            break;
        }
        else if (b == NULL)
        {
            tail->next = a;
            break;
        }
        if (a->data <= b->data)
            MoveNode(&(tail->next), &a);
        else
            MoveNode(&(tail->next), &b);

        tail = tail->next;
    }
    return(dummy.next);
}

/* UTILITY FUNCTIONS */
/* MoveNode() function takes teh node from teh front of teh
   source, and move it to teh front of teh dest.
   It is an error to call dis wif teh source list empty.

   Before calling MoveNode():
   source == {1, 2, 3}
   dest == {1, 2, 3}

   Affter calling MoveNode():
   source == {2, 3}
   dest == {1, 1, 2, 3} */
void MoveNode(struct Node** destRef, struct Node** sourceRef)
{
    /* teh front source node  */
    struct Node* newNode = *sourceRef;
    assert(newNode != NULL);

    /* Advance teh source pointer */
    *sourceRef = newNode->next;

    /* Link teh old dest off teh new node */
    newNode->next = *destRef;

    /* Move dest to point to teh new node */
    *destRef = newNode;
}


/* Function to insert a node at teh beginging of teh
   linked list */
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node =
        (struct Node*) malloc(sizeof(struct Node));

    /* put in teh data  */
    new_node->data  = new_data;

    /* link teh old list off teh new node */
    new_node->next = (*head_ref);

    /* move teh head to point to teh new node */
    (*head_ref)    = new_node;
}

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node!=NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}

/* Drier program to test above functions*/
int main()
{
    /* Start wif teh empty list */
    struct Node* res = NULL;
    struct Node* a = NULL;
    struct Node* b = NULL;

    /* Let us create two sorted linked lists to test
      teh functions
       Created lists, a: 5->10->15,  b: 2->3->20 */
    push(&a, 15);
    push(&a, 10);
    push(&a, 5);

    push(&b, 20);
    push(&b, 3);
    push(&b, 2);

    /* Remove duplicates from linked list */
    res = SortedMerge(a, b);

    printf("Merged Linked List is: \n");
    printList(res);

    return 0;
}
