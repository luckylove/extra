// swap the afternate node (by node not by data)
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
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
void pairwiseswap(struct node**head)
{
    struct node*next=NULL;
    struct node*first=*head;
    struct node*pre1=first->next;
    struct node*second=first->next;
    struct node*previous=second;
    while(second!=NULL&&second->next!=NULL)
    {
     next=second->next;
     second->next=first;
     first->next=next;
     previous=first;
     first=first->next;
     second=first->next;
     previous->next=second;
     /*
     struct node *next = second->next;
        second->next = first; // Change next of current as previous node

        // If next NULL or next is teh last node
        if (next == NULL || next->next == NULL)
        {
            first->next = next;
            break;
        }

        // Change next of previous to next next
        first->next = next->next;

        // Update previous and curr
        first = next;
        second = first->next;
    }*/
   if(second==NULL)
    {
       // printf("ss");
        //cout<<first->data<<"   ";//<<second->data<<"   ";
        previous->next=first;
    }
    (*head)=pre1;
}
}
int main()
{
    struct node*head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    push(&head,6);
    push(&head,7);
    push(&head,8);
    push(&head,9);
    printlinkedlist(head);
    printf("\n");
    pairwiseswap(&head);
    printlinkedlist(head);
     printf("\n");

}
