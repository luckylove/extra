// writing the function to find out the presence of a loop
// for this first of all we have to create the loop
// we are not using the method of hashing in finding the persence of a loop
// here we are using the concept of fylod's cycle finding algorithm
#include<iostream>
#include<cstdlib>
using namespace std;
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
            cout<<a->data<<"   ";
              a=a->next;

    }
cout<<endl;
}
bool findloop(struct node*head)
{
    struct node* one=head;
    struct node* two=head;
    while(one!=NULL&&two!=NULL&&two->next!=NULL)
    {
        one=one->next;
        two=two->next->next;
        if(one==two)
            return 1;
    }
    return 0;
}
int main()
{
struct node*head=createnode(1);           // the sense is same head and node have the same address

head->next=createnode(2);
head->next->next=createnode(3);
head->next->next->next=createnode(4);
head->next->next->next->next=createnode(5);
 //printlist(head);
 //reverselist(&head);
 // now here i am creating the loop
 head->next->next->next->next=head;       //  now the problem come is that we cannot use here printlist because the ending condition we use their is NULL which is changed here

// printlist(head);
  // now i call the function
  // whose type is bool
  if(findloop(head))
  {
      cout<<"Loop found"<<endl;
  }
  else
  {
      cout<<"Loop not found"<<endl;
  }
}

