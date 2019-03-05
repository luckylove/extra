// program to show how to insert the node in the linked list at certain positions
// three cases
// first case inserted at the beginning
// second case after certain node
// third case at the end of the linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>    // for malloc function stdlib .h will support it accordingly

struct node
{
    int data;
    struct node* next;
};


// now i am writing the function to insert the element in the linked list
// first of all writing the function to insert the element at the starting of the
// linked list

// for this pointer to the pointer to the struct node is pass to the function as an argument and
// second argument is the data which has to be inserted at that position


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

//now i am writing the function for the appending an element at the end of the linked list
// for this same argument is passed to the function
// if we pass the pointer to the tail of the linked list then the time to do it reduces
// because by using the reference to the head it require O(n) time to reach to the nth element


void pushend(struct node** head, int data1)
{
    // here if head is the last element or empty then we can do
    // means head is emply
    //then we can do as
    // first of all we have to create a node
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    // here if head is the last element or empty then we can do
    // means head is emply
    //then we can do as
    newnode->data=data1;
    newnode->next=NULL;
    if(*head==NULL)
    {
       *head=newnode;
    }
    // now we create a new node pointer
    // now we have to link it
    // for this we have to find out the last node
    struct node*last = *head;  // here we are giving the value of *head to last for easy accessibility

    while(last->next!=NULL)
    {
        last=last->next;
    }

    last->next=newnode;
}


// now i am writing a function which insert some node in between the the particular node
// for this we pass the node pointer to the previous node
// and we insert the node after this previous node
void insertnode(struct node* previous,int data1)
{
      struct node* newnode=(struct node*)malloc(sizeof(struct node));
      // if the previous node is empty then we cannot do it
      // so
      if(previous==NULL)   // means this is the empty node
      {
          printf("we cannot do the required operations ");   // this is just like extreme conditions
          return;
      }
      newnode->data=data1;
      newnode->next=previous->next;
      previous->next=newnode;

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

    push(&head,0);
    printf("\n after pushing one 0 at the beginning      ");
    printlinkedlist(head);
    pushend(&head,4);
    printf("\n after appending the node 4 at the last      ");
    printlinkedlist(head);

    insertnode(second,4);
    printf("\n after inserting the node 4 after the node 2          ");
    printlinkedlist(head);
}

