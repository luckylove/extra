// now solved yet

/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


// your task is tocomplete this function
// function should return an pointer to output array int*
// of size k*k
# include<stdio.h>
int* mergeKArrays(int*arr[0][0],int k)
{
int i,j,l,a,b,c,d;
int small,large;
l=k*k;
int brr[l];
small=arr[0][0];
printf("gg");
       for(i=0;i<k;i++)
       {
           printf("i is %d",i);
           for(j=0;j<k;j++)
           {
               printf(" j is %d",j);
               printf("    %d",arr[i][j]);
              // printf(" %d",*((arr+i*k)+j));
           }
       }
for(a=0;a<k;a++)
{
  if(arr[a][0]<small)
  {
      small=arr[a][0];
  }
}
large=arr[0][k-1];
for(a=0;a<k;a++)
{
    if(arr[a][k-1]>large)
    {
        large=arr[a][k-1];
    }
}
i=0;
for(a=small;a<=large;a++)
{
    // check along the column wise
    for(c=0;c<k;c++)
    {
      // check along the rows then check along the column
    for(b=0;b<k;b++)
    {
        if(arr[c][b]==a)
        {
          brr[i]=arr[c][b];
          i++;
        }
        else
        break;

    }
    }


}
return brr;
}
int main()
{
    int a,b,c,d,i,j;
    int k;
    int temp,count,count1,count2,test;
    printf("Enter test cases");
    scanf("%d",&test);
    while(test--)
    {
       printf("Enter the no of elements");
        scanf("%d",&k);
        int arr[k][k];
        d=k*k;
        int brr[d];
        int *pt;
       printf("Enter the no of elements one by one");
       for(i=0;i<k;i++)
       {
           for(j=0;j<k;j++)
           {
               scanf("%d",&arr[i][j]);
           }
       }
       for(i=0;i<k;i++)
       {
           for(j=0;j<k;j++)
           {
               printf("    %d",arr[i][j]);
           }
       }
       printf("ss");
       pt = mergeKArrays((int*)arr,k);
       for(i=0;i<k;i++)
       {
           for(j=0;j<k;j++)
           {
            printf("   %d", *((pt+i*k) + j));

           }
       }
    }
}
