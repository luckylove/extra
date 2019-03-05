
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void push(struct node **head,int data1)  // here i am passing the address of the pointer to the struct node so that we can change the valueof the struct node
{
    // fist of all we have to create a new node
    struct node* newnode=NULL;
    // now allocates memory to it
    newnode=(struct node*)malloc(sizeof(struct node));
    // set the data of the newnode
    newnode->data=data1;
    newnode->next=*head;
    *head=newnode;
}
void printlinkedlist(struct node* head)
{
    // now we have to print the node one by one
  /*  if(head==NULL)
    {
        return;
    }*/
    while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;    // pointing to the next address

    }
}
// function for the deletion of the first occourance of the key
void deletenode(struct node** head,int key)
{
    // first of all take a reference to the head
    struct node*temp=*head;      // it stores the value of the head
    struct node* previous;      // it stores the node previous to the node to be deleted
   // now if head itself contains the key
   if(temp!=NULL&&temp->data==key)
   {
       *head=temp->next;   // assigning new value to the head pointer
       free(temp);
       return;
   }
   // now for general we have to first of all find the node which contains the key
    while(temp!=NULL&&temp->data!=key)
    {
         previous=temp;         // this previous will store the just previous node to the node which we want to delete
        temp=temp->next;

    }

    previous->next=temp->next;
    free(temp);
    return;

}


// the function to delete the node from the particular position
void deletenodeposition(struct node**head,int position)
{
    // here we create two cases
    // first is if the linked list is empty
    // then return
    if(*head==NULL)
    {
        return;
    }
    // second condition is that if the position is 0
    // that is the head itself we have to delete
    struct node*temp=*head;
    if(position==0)
    {
        *head=temp->next;
        free(temp);
        return ;

    }
    // now if in general case
    int i=1;
    struct node*previous;
    while(temp!=NULL&&i<position)
    {
        previous=temp;
        temp=temp->next;
        i++;
    }

    // here i have to more include the condition of if position does not not comes and the
    // the node becomes null
    if(temp==NULL)
    {
        return;
    }
    previous->next=temp->next;
    free(temp);
    return;

}
int main()
{
    // here we first take three pointer to the structure then
    // we set these pointers to NULL
    // then we allocates the memory to the pointers
    // then we link them and store data in them
    struct node *head=NULL;    // initialize the pointers to the null
    struct node *second=NULL;
    struct node *third=NULL;
     // now to allocates the memory
     head=(struct node*) malloc (sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));
     // now we have to link them then print them
     head->data=1;
     head->next=second;
     second->data=2;
     second->next=third;
     third->data=3;
     third->next=NULL;  // give the last pointer to the null value
     printlinkedlist(head);

     // now we have to delete some node and for this purpose we give some key to
     // means first occourance of the particular key
     // call the function
     deletenode(&head,1);
     printf("\n");
     printlinkedlist(head);

       // here i again puch the node 1 in the beginning
      push(&head,1);
     printf("\n");
     printlinkedlist(head);


    deletenode(&head,2);
     printf("\n");
     printlinkedlist(head);

    push(&head,4);
     printf("\n");
     printlinkedlist(head);

    deletenodeposition(&head,2);       // here we want to delete the node form the second position
     printf("\n");
     printlinkedlist(head);


    deletenodeposition(&head,4);       // here we want to delete the node form the second position
     printf("\n");
     printlinkedlist(head);     // then it will do nothing because at the position 4 their is no node present


}
