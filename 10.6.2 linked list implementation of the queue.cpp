// linked list implementation of the que
#include<iostream>
#include<cstdlib>
using namespace std;
// here 2 templates was created one for the linked list and one for the que

struct qnode
{
    // it contains two things
    int data;
    struct qnode* next;
};
struct que
{
    // it contains two pointer to the struct qnode
    struct qnode* qfront;
    struct qnode* qrare;
};
// first of all we have to crate the linked list
struct qnode* createnode(int data)
{
    struct qnode* newnode=(struct qnode*)malloc(sizeof(struct qnode));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
struct que* createque(int capacity)
{
    struct que* newque=(struct que*)malloc(sizeof(struct que));
    newque->qfront=NULL;
    newque->qrare=NULL;
    return newque;
}
void addnode(struct que* newque,int key)
{
    struct qnode* temp=createnode(key);
    if(newque->qfront==NULL&&newque->qrare==NULL)
    {
        newque->qfront=newque->qrare=temp;
    }
    else
    {
        newque->qrare->next=temp;
        newque->qrare=temp;

    }
}
int getnode(struct que* newque)
{
    int key=newque->qfront->data;
    newque->qfront=newque->qfront->next;
    return key;
}
void printque(struct que* newque)
{
    struct qnode* temp=newque->qfront;
    while(temp!=newque->qrare)
    {
        cout<<"    "<<temp->data;
        temp=temp->next;
    }
    cout<<"   "<<temp->data;
}
int main()
{
    struct que* newque=createque(10);
    addnode(newque,10);
    addnode(newque,1);
    addnode(newque,12);
    addnode(newque,13);
    addnode(newque,15);
    addnode(newque,18);
    printque(newque);
    cout<<endl;
    cout<<getnode(newque);
    cout<<endl;
    cout<<"after the deletion of the node the que becomes"<<endl;
    printque(newque);
}
