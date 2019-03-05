// implementation
// of queue by array
#include<iostream>
#include<cstdlib>
using namespace std;
// first of all we have to create a structure of the node
struct qnode
{
    int qsize,qfront,qrare;
    unsigned qcapacity;
    int* qarray;
    // pointer to the array
};
// first of all we have to create the que
struct qnode* createque(unsigned capacity)
{
    struct qnode* newque=(struct qnode*)malloc(sizeof(struct qnode));
    newque->qsize=0;
    newque->qfront=0;
    newque->qrare=capacity-1;
    newque->qcapacity=capacity;
    newque->qarray=(int *)malloc(capacity * sizeof(int));

};
// now we have to crate 2 function first is to check whether the que is full or empty
bool isfull(struct qnode* que)
{
    if(que->qsize==que->qcapacity)
    {
        return true;
    }
    else
        return false;
}
bool isempty(struct qnode* que)
{
    if(que->qsize==0)
    {
        return true;
    }
    else
        return false;
}
// now we have to create the function to push or pull
// push can be done form the back side and pull can be done form the front size
void addelement(struct qnode* que,int key)
{
    // the value is stored in the array
    // here we apply the condition of overflow
    if(isfull(que))
    {
        return;
    }
    que->qrare=(que->qrare+1)%que->qcapacity;
    que->qarray[(que->qrare)]=key;
    que->qsize+=1;
}
int getelement(struct qnode* que)
{
    if(isempty(que))
    {
        return 0;
    }
   int key =que->qarray[(que->qfront)];
   que->qfront=(que->qfront+1)%que->qcapacity;
   que->qsize-=1;
   //cout<<"key is "<<key<<endl;
   return key;
   // here we can use the conditions of underflow
}
void printque(struct qnode* que)
{
    int key=que->qfront;
    // here also many complication arrises
    // so may be we have to use the %que->qcapacity in it
    while(key!=que->qrare)
    {
        cout<<que->qarray[key]<<"  ";
        key+=1;
    }
}
// here are creating the function to print the que
// you can also create the function to print the last element and first element of the que
int main()
{
   struct qnode* newque=createque(10);
   addelement(newque,5);
   addelement(newque,4);
   addelement(newque,3);
   addelement(newque,2);
   addelement(newque,1);
   addelement(newque,0);
    printque(newque);
   //<<endl;
   //cout<<"sdhf"<<"           "<<getelement(newque);
  int data=getelement(newque);
  cout<<"the data we get after first removal of the element is     "<<data<<endl;
   printque(newque);


}
