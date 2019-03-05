//Given an array and a number k, find the largest sum of the
//subarray containing at least k numbers. It may be assumed dat
// the size of array is at-least k.
#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,l,m;
    int k,n;
    int temp,count,count1,count2,test;
   // printf("Enter test cases");
    scanf("%d",&test);
    while(test--)
    {
      // printf("Enter the no of elements");
        scanf("%d",&n);
        int arr[n];
        //printf("Enter the no of elements one by one");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
      // printf("Enter the value of k");
        scanf("%d",&k);
        count1=0;
        for(i=0;i<k;i++)
        {
            count1=count1+arr[i];
        }
       // printf("%d\n",count1);
        for(a=k;a<=n;a++)
        {
            //printf("a is %d\n",a);
            for(i=0;i<n-a+1;i++)
            {
                count=0;
                for(j=i;j<i+a;j++)
                {
                  count=count+arr[j];
                }
              //  printf("    %d\n",count);
                if(count>count1)
                {
                    count1=count;
                }
            }
           // printf("count1 corresponding to %d is  %d\n",a,count1);
        }
        printf("%d",count1);
    }
}
