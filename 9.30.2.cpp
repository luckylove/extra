// adding two number of the linked list
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
struct node*createnode(int a)
{
  struct node* newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=(a)%10;
  //printf("  dd%d",newnode->data);
  newnode->next=NULL;
  return newnode;
}
struct node* addtwolinkedlist(struct node* head1,struct node* head2)
{
    struct node dummy;
    struct node*result=&dummy;
    int sum;
    int carry=0;
            if(head1==NULL)
            {
                return head2;
            }
            if(head2==NULL)
            {
                return head1;
            }
            while(head1!=NULL||head2!=NULL)
            {
            // now we have to add head1->data and head2->data
            // here we also have to take the carry
            sum=carry + (head1?head1->data:0) + (head2?head2->data:0);     // if head1 or either head2==NULL and the carry still exist then we have to do it
                        result->next=createnode(sum);
                        carry=(sum)/10;

                        result=result->next;
                       if(head1) head1=head1->next;             // if head1==NULL then do not increase the value of the head->next
                        if(head2) head2=head2->next;             // similarly for he head2
            }

    if(carry>0)
    {
        result->next=createnode(carry);
    }
   // printf("\n");
                //printlinkedlist(result);

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
    head3 = addtwolinkedlist(head1,head2);
    printlinkedlist(head3);

}
