// merge the shorted linked list
// solution by reference variable
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
void movenode(struct node** second, struct node** first)
{
    // data is moved form first to second
    //here no need to use the asset statement which we have used in the merge shorted linked list by using the dummy node
    struct node* newnode=*first;
    *first=newnode->next;
    newnode->next=*second;
    *second=newnode;
}
struct node* mergeshortedlinkedlist(struct node* head1, struct node* head2)
{
 struct node* result=NULL;
 struct node** pointer=&result;
 while(1)
 {
     if(head1==NULL)
     {
         *pointer =head2;
         break;
     }
     else if(head2==NULL)
     {
         *pointer=head1;
         break;
     }
     if(head1->data<=head2->data)
     {
         movenode(pointer,&head1);

     }
     else
     {
         movenode(pointer,&head2);
     }
     pointer=&((*pointer)->next);

 }
 return result;
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
    head3 = mergeshortedlinkedlist(head1,head2);
    printlinkedlist(head3);

}
