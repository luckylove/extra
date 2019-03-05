// how will you insert in shorted manner in the shorted linked list
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
struct node*createnewnode(int key)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->next=NULL;
    return newnode;
}
void insertshortedmanner(struct node**head,int key)
{
    struct node*current=*head;
    struct node*pre=NULL;
    struct node*newnode=createnewnode(key);
    if((*head)->data >key)
    {
    newnode->next=(*head);
    (*head)=newnode;
    return;
    }
    while(current->data<key&&current!=NULL)
    {
        printf("pp");
        pre=current;
        current=current->next;
    }
    if(current==NULL)
    {
        pre->next=newnode;
        newnode->next=NULL;
    }
    else
    {
        pre->next=newnode;
        newnode->next=current;
    }

}
int main()
{
    struct node*head=NULL;
    push(&head,5);
    push(&head,4);
    push(&head,2);
    push(&head,1);
    printlinkedlist(head);
    printf("\n");
    insertshortedmanner(&head,3);
    printlinkedlist(head);
     printf("\n");

}
