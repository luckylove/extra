// now i am writing a function form the starting to reverse the linked list
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct node
{
    int data;
    struct node* next;
};
void push(struct node** head,int key)
{
    struct node* newnode=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->next=*head;
    *head=newnode;
    return ;
}
// suppose I want to completely reverse the linked list
  void reverselist(struct node**head)
{
    // we have to take three node
    // one is previous and one is next
    struct node*previous=NULL;
    struct node*current=*head;
    struct node*next=NULL;
    while(current!=NULL)    // means when we reach at the last node then our list is completely reversed
    {
        next=current->next;          // it is just like working as a temporary variable which stores the address of the node
        current->next=previous;
        previous=current;
        current=next;
    }
    *head=previous;
}
void reverselistrecursion(struct node**head)
{
    struct node*first=*head;
    struct node *rest=first->next;

    if(*head==NULL)
    {
        return;    // end of the recursion
    }
    // here sometimes one more condition come when the list is empty
    if(rest==NULL)
    {
        return;
    }
    reverselistrecursion(&rest);
    first->next->next=first;
    first->next=NULL;         // last of the starting
    // till now we do not change the address of the rest
    // which can be used further
    *head=rest;

}



/*void reverselist(struct node **head)
{
    // first of all i need total no of nodes
    struct node*temp=*head;
    struct node*previouslast=NULL;
    int count =0;
    // and we have to find out the last and the second last node of the linked list
    while(temp->next!=NULL)
    {
        count++;
        previouslast=temp;
        temp=temp->next;

    }
    // now temp is the last node
    struct node*secondfirst=NULL;
    secondfirst=(*head)->next;

    //printf("%d%d%d%d",(*head)->data,secondfirst->data,previouslast->data,temp->data);
    // now we get the total no of elements
}*/


 void printlist(struct node* head)
 {
     while(head!=NULL)
     {
         printf("%d  ", head->data);
         head=head->next;
     }
     printf("\n");
 }

int main()
{
    struct node*head=NULL;
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);
    printlist(head);
    reverselist(&head);
    printlist(head);
    reverselistrecursion(&head);   // reverse of the struct node by using the recursion
    printlist(head);
}
