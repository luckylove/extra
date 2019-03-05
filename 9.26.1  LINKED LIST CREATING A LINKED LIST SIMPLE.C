// starting of the linked list
// program to make a linked list and read the linked list by some function
// means by defining some function
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>    // for malloc function stdlib .h will support it accordingly

struct node
{
    int data;
    struct node* next;
};
void printlinkedlist(struct node* head)
{
    // now we have to print the node one by one
  /*  if(head==NULL)
    {
        return;
    }*/
    while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;    // pointing to the next address

    }
}
int main()
{
    // here we first take three pointer to the structure then
    // we set these pointers to NULL
    // then we allocates the memory to the pointers
    // then we link them and store data in them
    struct node *head=NULL;    // initialize the pointers to the null
    struct node *second=NULL;
    struct node *third=NULL;
     // now to allocates the memory
     head=(struct node*) malloc (sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));
     // now we have to link them then print them
     head->data=1;
     head->next=second;
     second->data=2;
     second->next=third;
     third->data=3;
     third->next=NULL;  // give the last pointer to the null value
     printlinkedlist(head);
}
