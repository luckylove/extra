// merge two shorted linked list
// by using the dummy node

#include<stdio.h>
#include<stdlib.h>    // for malloc function stdlib .h will support it accordingly

struct node
{
    int data;
    struct node* next;
};
void push(struct node **head,int data1)  // here i am passing the address of the pointer to the struct node so that we can change the valueof the struct node
{
    // fist of all we have to create a new node
    struct node* newnode=NULL;
    // now allocates memory to it
    newnode=(struct node*)malloc(sizeof(struct node));
    // set the data of the newnode
    newnode->data=data1;
    newnode->next=*head;
    *head=newnode;
}
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
// function for merging shorted linked list
// solving by using the dummy node
// the idea behind it is taking the one sphere node
// call it dummy node
// now use the pointer to this node to create the linked list as the starting address
// in this the whole linked list is created in the sense
// that new node is created every time and then it is attached to the address of the dummy node
// at last when one list becomes empty then the address of the next node is appended to the address of the dummy node reached
// here we have to create 2 function one is the main function and second is the
// function used to move the node from source to destination
// which is the dummy node next
// now lets start
void movenode(struct node** second, struct node** first)
{
    // data is moved form first to second
    // we i have to use the asset
    // when the first is empty list
    // in the geeks for geeks it is written but i am unable to understand
    struct node* newnode=*first;
    *first=newnode->next;
    newnode->next=*second;
    *second=newnode;
}
struct node* mergeshortedlinkedlist(struct node**head1, struct node** head2)
{
    struct node dummy;
    struct node* tail=&dummy;
    dummy.next=NULL;
    while(1)
    {
        if(*head1==NULL)
        {
            tail->next=*head2;
            break;
        }
        else if(*head2==NULL)
        {
            tail->next=*head1;
            break;
        }
        if((*head1)->data<=(*head2)->data)
        {
            movenode(&(tail->next),head1);
        }
        else
        {
            movenode(&(tail->next),head2);
        }
        tail=tail->next;

    }
    return dummy.next;
}


int main()
{
    struct node*head1=NULL;
    struct node*head2=NULL;
    struct node*head3=NULL;
    push(&head1,8);
    push(&head1,6);
    push(&head1,4);
    push(&head1,1);
    push(&head2,7);
    push(&head2,5);
    push(&head2,3);
    push(&head2,2);
    printlinkedlist(head1);
    printf("\n");
    printlinkedlist(head2);
    printf("\n");
    printlinkedlist(head1);
    printf("\n\n\n");
    head3 = mergeshortedlinkedlist(&head1,&head2);
    printlinkedlist(head3);

}

