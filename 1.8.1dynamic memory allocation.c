#include <stdio.h>
#include <stdlib.h>

int main()
{
    //we have to find out the largest no. by using dynamic memory allocation
    int a ,b,*ptr,i=0,j,n;
    printf("Enter the no of elements you want to enter");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    if(ptr== NULL)
    {
        printf("the memory is unavialable");
        exit(0);
    }
    printf("Enter the no. one by one");
    for(i=0;i<n;i++)
        scanf("%d",ptr+i);
    //now we have to find out the largest no...
    a=*ptr;
    printf("%d\n",a);
    for(i=0;i<n-1;i++)
    {

    if(a<*(ptr+i+1))
    {
        a=*(ptr+i+1);
        printf("%d\n",a);
    }
    }
    printf("\n\n%d",a);
    free(ptr);
    return 0;
}
