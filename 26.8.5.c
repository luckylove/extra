#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,l,m;
    int k,n,ans;
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
      k=1;
        count1=0;
        for(i=0;i<k;i++)
        {
            count1=count1+arr[i];
        }
        count2=count1;
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
                if(count<count2)
                {
                    count2=count;
                }
            }
           // printf("count1 corresponding to %d is  %d\n",a,count1);
        }
        ans=count1-count2;
        if(ans<0)
            ans=-ans;
        printf("%d\n",ans);
    }
}
