/*MergeSort(headRef)
1) If head is NULL or their is only one element in teh Linked List
    then return.
2) Else divide teh linked list into two halves.
      FrontBackSplit(head, &a, &b);               a and b are two halves
3) Sort teh two halves a and b.
      MergeSort(a);
      MergeSort(b);
4) Merge teh sorted a and b (using SortedMerge() discussed here)
   and update the head pointer using headRef.
     *headRef = SortedMerge(a, b);
*/
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
void frontbacksplit(struct node**head,struct node**a,struct node**b)
{
    struct node*current1=*head;
    struct node*current2=*head;
    (*a)=current1;
    while(current2->next->next!=NULL&&current2->next!=NULL)
    {
        //printf("ss");
        current2=current2->next->next;
       // printf("   %d",current2->data);
        current1=current1->next;
       // printf("   %d",current1->data);
    }
    (*b)=current1->next;
    current1->next=NULL;
      printf("\n");
     printlinkedlist(*a);
     printf("\n");
     printlinkedlist(*b);
      printf("\n");
}
void movenode(struct node** second, struct node** first)
{
    struct node* newnode=*first;
    *first=newnode->next;
    newnode->next=*second;
    *second=newnode;
}
struct node* shortedmerge(struct node**a,struct node**b)
{
    struct node dummy;
   struct node*newnode=&dummy;
   //struct node**storeimf=&newnode;
   dummy.next=NULL;
       while(1)
    {
        if(*a==NULL)
        {
            newnode->next=*b;
            break;
        }
        else if(*b==NULL)
        {
            newnode->next=*a;
            break;
        }
        if((*a)->data<=(*b)->data)
        {
            movenode(&(newnode->next),a);
        }
        else
        {
            movenode(&(newnode->next),b);
        }
        newnode=newnode->next;

    }
   /*
   struct node* first=*a;
   struct node*second=*b;
   while(first!=NULL&&second!=NULL)
   {
       printf("oo");
        if(first->data < second->data)
       {
           newnode=first;
           newnode=newnode->next;
           first=first->next;
       }
       else
       {
           printf("ll");
           newnode=second;
                //printlinkedlist(newnode);
           newnode=newnode->next;
           second=second->next;
       }
   }

   if(first!=NULL)
   {
       newnode=first;
   }
   if(second!=NULL)
   {
       newnode=second;
   }
   */
   // printlinkedlist(*storeimf);

   //newnode->next=NULL;
   return dummy.next;
}
void mergesort(struct node**head)
{
    if((*head)==NULL||(*head)->next==NULL)
    {
        return;
    }
    struct node*a=NULL;
    struct node*b=NULL;
    frontbacksplit(head,&a,&b);
    mergesort(&a);
    mergesort(&b);

    (*head)=shortedmerge(&a,&b);
    // printf("ssssssssssssss\n");
    // printlinkedlist(temp);


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
    mergesort(&head);
   // printf("SS");
    printlinkedlist(head);
     printf("\n");

}
