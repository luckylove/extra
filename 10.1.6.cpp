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
bool checkpalindrome1(struct node**head,struct node*tail)
{
    if(tail==NULL)
    {
        return true;
    }
    if(checkpalindrome1((head),tail->next))
    {
       if((*head)->data==tail->data)
       {
           (*head)=(*head)->next;
           return true;
       }
       else
        return false;
    }
}
bool checkpalindrome(struct node*head)
{
    // trying to use the recursion
    return checkpalindrome1(&head,head);
}
int main()
{
    struct node*head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,2);
   // push(&head,);
    push(&head,1);
    printlinkedlist(head);
    printf("\n");
    // we only need to pass the head
     if(checkpalindrome(head))
        cout<<"yes";
     else
        cout<<"NO";
    //insertshortedmanner(&head,6);
    printlinkedlist(head);
     printf("\n");

}
