// a linked list is given on absolute sort and now we have to sort it in the common manner
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
        printf("%d    ",head->data);
        head=head->next;
    }
}
void normalsort(struct node**head)
{
    struct node*current=(*head)->next;
    struct node*prev=*head;
    struct node*next=NULL;
    struct node*temp=NULL;
    while(current!=NULL)
    {
        if(current->data < 0)
        {
            temp=current;
            push(head,(current->data));
            current=current->next;
             prev->next=current;
            free(temp);

        }
        else
        {
            prev=current;
            current=current->next;
        }
    }
}
int main()
{
    struct node*head=NULL;
    push(&head,9);
    push(&head,-8);
    push(&head,-7);
    push(&head,-6);
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,-2);
    push(&head,-1);
    printlinkedlist(head);
    printf("\n");
    //pairwiseswap(&head);
    normalsort(&head);
    printlinkedlist(head);
     printf("\n");

}
