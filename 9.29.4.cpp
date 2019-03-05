#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
// writing the function to reverse the linked list by using the tail recursive method
// first of all we call the helper function
void reverselinkedlist(struct node*,struct node* , struct node** );

void reverselist(struct node**head)
{
    if(head==NULL)
    {
        // means the list is empty
        return;

    }
    // now we call the recursive tail function
    reverselinkedlist(*head,NULL,head);
}
//  now for the tail recursive function helper
// it consider one argument is previous node one is the current node
void reverselinkedlist(struct node* current,struct node* previous, struct node** head)
{
   // cout<<"sss";
    // here we do one think
    if(current->next==NULL)
    {
        // that means the last node is achieved
        // then our head of the linked list is the address of this last node
        *head=current;
        // and current->next will store the address of the previous node
        current->next=previous;
        return;
    }
    struct node*next=current->next;
    // the use of the next is only to store the value of the current next
    // because in the next step it is modified
    current->next=previous;
    reverselinkedlist(next,current,head);
}
// now i am writing the function to create the node and for this we are passing the key
// and it returns the address of the new node
// which we store accordingly in our main program
struct node* createnode(int key)
{
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=key;
    node->next=NULL;
    return node;
};
// writing the function to print the linked list
void printlist(struct node *a)
{
    while(a!=NULL)
    {
            cout<<a->data<<"   ";
              a=a->next;

    }
cout<<endl;
}
int main()
{
struct node*head=createnode(1);           // the sense is same head and node have the same address

head->next=createnode(2);
head->next->next=createnode(3);
head->next->next->next=createnode(4);
head->next->next->next->next=createnode(5);
 printlist(head);
 reverselist(&head);
 printlist(head);
 // now to reverse the string by using the tail recursive method
}

