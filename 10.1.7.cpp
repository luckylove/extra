// to check whether the string is palindrome or not withour using the recursion
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
/*
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
*/
void reverselistrecursion(struct node**head)
{
    struct node*first=*head;
    struct node *rest=first->next;
    if(*head==NULL)
    {
        return;
    }
    if(rest==NULL)
    {
        return;
    }
    reverselistrecursion(&rest);
    first->next->next=first;
    first->next=NULL;
    *head=rest;

}
bool checkpalindrome(struct node**head)
{
    // first of all we need to find whether the string contains even or odd no. of nodes
    int no=1;
    struct node*curr1=*head;
    struct node*first=*head;
    struct node*curr2=*head;
    struct node*second=NULL;
    while(curr2->next!=NULL&&curr2->next->next!=NULL)
    {
        curr2=curr2->next->next;
        curr1=curr1->next;
        no++;
    }
    second=curr1->next;
   // printlinkedlist(first);
   // printlinkedlist(second);
    reverselistrecursion(&second);
   // printlinkedlist(second);
    struct node*second1=second;
    // now we have to compare
    while(second1!=NULL)
    {
        if(first->data!=second1->data)
        {
               reverselistrecursion(&second);

            return false;
        }
        second1=second1->next;
        first=first->next;
    }
        reverselistrecursion(&second);

    return true;


}
int main()
{
    struct node*head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,2);
    push(&head,1);
    printlinkedlist(head);
    printf("\n");
    // we only need to pass the head
     if(checkpalindrome(&head))
        cout<<"yes";
     else
        cout<<"NO";
    //insertshortedmanner(&head,6);
    printlinkedlist(head);
     printf("\n");

}

