// program to quick short the linked list
// first of all create the linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
void push(struct node **head,int data1)
{
    struct node* newnode=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data1;
    newnode->next=*head;
    *head=newnode;
}

void printlinkedlist(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    }
}
struct node* gettail(struct node* head)
{
   struct node* current =head;
   while(current!=NULL&&current->next!=NULL)
   {
       current=current->next;
   }
   return current;
}
struct node* partitionof(struct node*head1,struct node*end1,struct node**newhead,struct node**newend)
{
    struct node*previous=NULL;
    struct node*pivot=end1;
    struct node*current = head1;
    struct node*tail=pivot;
    while(current!=pivot)
    {
        printf("ss");
        if(current->data < pivot->data)
        {
            if((*newhead)==NULL)
            {
                (*newhead)=current;
            }
            previous=current;
            current=current->next;
        }
        else
        {
            if(previous!=NULL)
            {
                previous->next=current->next;
            }
            struct node* temp=current->next;
            current->next=NULL;
            tail->next=current;
           // tail=tail->next;
           tail=current;
            current=temp;
        }
        if((*newhead)==NULL)
        {
            (*newhead)=pivot;
        }
        (*newend)=tail;

            printlinkedlist(pivot);
            printf("\n");

        return pivot;
    }

}
struct node*quicksortrecursive(struct node*head,struct node*end1)
{
    if(head==NULL||head==end1)
    {
        return head;
    }
   struct node*newend=NULL;
   struct node*newhead=NULL;
   struct node*pivot=partitionof(head,end1,&newhead,&newend);

   if(newhead!=pivot)
   {
       struct node*temp=newhead;
       while(temp->next!=pivot)
       {
           temp=temp->next;
       }
       temp->next=NULL;
       newhead=quicksortrecursive(newhead,temp);
       temp=gettail(newhead);
       temp->next=pivot;
   }
   pivot->next=quicksortrecursive(pivot->next,newend);

   return newhead;

}
void quicksort(struct node**head)
{
   (*head)=quicksortrecursive((*head),gettail(*head));
   return;
}
int main()
{
    struct node*head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    printlinkedlist(head);
    printf("\n");
   // struct node* nodee=head->next->next->next;
   // struct node* one=NULL;
   // struct node* two=NULL;
    quicksort(&head);
   // printf("SS");
    printlinkedlist(head);
     printf("\n");

}
