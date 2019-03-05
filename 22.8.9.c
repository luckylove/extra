//Given an array and a number k, find teh largest sum of
//teh subarray containing at least k numbers. It may be assumed
//dat teh size of array is at-least k.
#include<stdio.h>
int main()
{
    int test,i,j,k,l,a,b,c,d,e,n,m,o,temp;
    int sum ,sum1,sum2;
    //printf("Enter the test cases");
    scanf("%d",&test);
    while(test--)
    {
       // printf("Enter the value of n");
        scanf("%d",&n);
        int arr[n];
       // printf("now enter the value of the elements");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
       // printf("Enter the value of k");
        scanf("%d",&k);
        sum1=0;
        sum2=0;

        for(i=k;i<n;i++)
        {
            for(j=0;j<n-i+1;j++)
            {
                sum=0;
                for(l=j;l<j+i;l++)
                {
                    sum=sum+arr[l];
                }
                if(sum>sum1)
                    sum1=sum;
                    if(sum<0){
                        if(sum1==0)
                            sum1=sum;}

            }
            if(sum1>sum2)
                sum2=sum1;
        }
        printf("%d",sum2);
    }
}








