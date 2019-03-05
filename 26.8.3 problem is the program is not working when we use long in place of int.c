//Given an array of size n, find all elements in array dat appear more than n/k times.
# include<stdio.h>
# include<math.h>
void moreThanNdK(long long int arr[],long long int n,long long int k)
{
    int a,b,c,d,i,j;
    int temp,count,count1,count2,test;
    c=n/k;
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
              if(arr[i]>arr[j])
              {
                  temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
              }
            }
        }
        printf("\n");
         for(i=0;i<n;i++)
       {
            printf("  %d",arr[i]);
      }
        count=0;
        for(i=0;i<n-1;)
        {
            count1=1;
            for(j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count1++;
                    //printf("t%d",count1);
                }
                else
                    break;
            }
               //printf("%d",c);
                if(count1>c)
                {
                   count++;
                }
               //printf("   t%d",count);

            i=i+count1;
            //printf("yy   %d",i);
        }
        printf("%d\n",count);
}

int main()
{
    int a,b,c,d,i,j;
    long long int k,n;
    int temp,count,count1,count2,test;
    //printf("Enter test cases");
    scanf("%d",&test);
    while(test--)
    {
       // printf("Enter the no of elements");
        scanf("%d",&n);
        long long int arr[n];
       // printf("Enter the no of elements one by one");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
       // printf("Enter the value of k");
        scanf("%d",&k);
       // for(i=0;i<n;i++)
       // {
       //     printf("  %d",arr[i]);
       // }
        moreThanNdK(arr, n,k);


    }
}
