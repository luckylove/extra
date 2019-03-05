// program to create the generic linked list in c language
// c does not support variable data type linked list
// for this we can use void pointer
#include<stdio.h>
#include<stdlib.h>
struct node
{
    void *data;
    struct node* next;
};

