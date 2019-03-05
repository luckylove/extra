#include<stdio.h>
int main()
{
    int a,b,i,j,k,l;
    int test,n,m,c,d;
    printf("Enter the value of test cases");
    scanf("%d",&test);
    while(test--)
    {
        printf("Enter the no of elements you want to enter");
        scanf("%d",&n);
        int arr[n+1];
        printf("Enter the values one by one till the n terms");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
          for(i=0;i<n+1;i++)
        {
            printf("  %d",arr[i]);
        }
        i=0;
        for(a=0;a<n-1;a++)
        {
            arr[n]=arr[i];
            b=arr[i];
            arr[i]=arr[b];
            i=arr[i];
        }
         for(i=0;i<n;i++)
        {
            printf("  %d",arr[i]);
        }
    }
}

