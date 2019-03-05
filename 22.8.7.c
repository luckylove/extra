//Given an array of n elements, where each element is at most k
// away from its target position. The task is to print array in sorted form.
#include<stdio.h>
int main()
{
    int test,i,j,k,l,a,b,c,d,e,n,m,o,temp;
    //printf("Enter the test cases");
    scanf("%d",&test);
    while(test--)
    {
       printf("Enter the value of n and k");
        scanf("%d%d",&n,&k);
        int arr[n];
       printf("now enter the value of the elements");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
       // we have to do bubble short but in a different form means if n>k then we do the
       // bubble short till k only
       for(i=0;i<n-1;i++)
       {
           if(n-i>k)
            b=i+k+1;
           else
            b=n;
           for(j=i+1;j<b;j++)
           {
               if(arr[i]>arr[j])
               {
                   temp=arr[i];
                   arr[i]=arr[j];
                   arr[j]=temp;
               }

           }
       }
       for(i=0;i<n;i++)
       {
           printf("%d",arr[i]);
       }
       printf("\n");
    }
}




