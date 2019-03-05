#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node* next;
    struct node* pre;
};
void pushnode(struct node**head,int key)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->next=(*head);
    newnode->pre=NULL;
    (*head)=newnode;
    return;
}
void printlinkedlist(struct node* head)
{
    struct node*current=head;
    while(current!=NULL)
    {
        cout<<current->data<<"    ";
        current=current->next;
    }
    return;
}

struct node*createnewnode(int key)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->next=NULL;
    newnode->pre=NULL;
    return newnode;
}
void insertnode(struct node**head,int key)
{
    struct node*newnode=createnewnode(key);
    struct node*previous=NULL;
    struct node*current=*head;
    if((*head)->data > key)
    {
        newnode->next=(*head);
        (*head)->pre=newnode;
        (*head)=newnode;
        return;
    }
    while(current!=NULL&&(current->data < key ))
    {
        previous=current;
            //cout<<previous->data;
        current=current->next;
    }
   // cout<<previous->data;
    if(current==NULL)
    {
        previous->next=newnode;
        newnode->pre=previous;
        newnode->next=NULL;
    }
    else
    {
        previous->next=newnode;
        newnode->pre=previous;
        newnode->next=current;
        current->pre=newnode;
    }
}
int main()
{
    struct node* head=NULL;
    pushnode(&head,5);
    pushnode(&head,4);
    pushnode(&head,3);
    pushnode(&head,2);
    pushnode(&head,1);
    printlinkedlist(head);
    cout<<endl;
    insertnode(&head,6);
    printlinkedlist(head);
    cout<<endl;
}
