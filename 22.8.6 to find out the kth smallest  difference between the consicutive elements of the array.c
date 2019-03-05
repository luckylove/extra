//Given an array of size n containing positive integers n and a
//number k,The absolute difference between values at indices i and j
//is |a[i] – a[j]|. There are n*(n-1)/2 such pairs and you have to
//print the kth smallest absolute difference among all these pairs.
#include<stdio.h>
int main()
{
    int test,i,j,k,l,a,b,c,d,e,n,m,o,temp;
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
        int brr[(n*(n-1))/2];
        l=0;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((arr[i]-arr[j])<0)
                {
                    brr[l]=-(arr[i]-arr[j]);
                    l++;
                }
                else
                {
                    brr[l]=arr[i]-arr[j];
                    l++;
                }
            }

        }
        //bubble short
        for(i=0;i<(n*(n-1))/2;i++)
        {
            for(j=i;j<(n*(n-1))/2;j++)
            {
                if(brr[i]>brr[j])
                {
                    temp=brr[i];
                    brr[i]=brr[j];
                    brr[j]=temp;
                }
            }
        }
        printf("%d\n",brr[k-1]);



    }
}
