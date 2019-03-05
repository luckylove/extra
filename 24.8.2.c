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
        // we are starting with the zeroth elements
        // let us do selection short
        // but with short do one think shore the index of that no too
        arr[n]=arr[0];
        a=0;
        for(i=0;i<n;i++)
        {
          for(j=i+1;j<n;j++)
          {

              if(arr[j]==i)
              {
                 arr[i]=arr[j]+j;
                 break;
              }
               if(arr[n]==arr[i])
              {
                  arr[i]=arr[n]+a;
                  arr[n]=arr[i+1];
                  a=i+1;
                  break;
              }

              printf("   %d   ",arr[i]);
          }
        }
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }

    }
}
