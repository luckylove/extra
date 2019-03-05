// last time i am talking about how to reverse the string
// now i am creating the linked list without using the concept of the push or append
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
// now i am writing the function to create the node and for this we are passing the key
// and it returns the address of the new node
// which we store accordingly in our main program
struct node* createnode(int key)
{
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=key;
    node->next=NULL;
    return node;
};
// writing the function to print the linked list
void printlist(struct node *a)
{
    while(a!=NULL)
    {
      printf("%d   ",a->data);
              a=a->next;

    }
printf("\n");

}
int main()
{
struct node*head=createnode(1);           // the sense is same head and node have the same address

head->next=createnode(2);
head->next->next=createnode(3);
head->next->next->next=createnode(4);
head->next->next->next->next=createnode(5);
 printlist(head);
}
