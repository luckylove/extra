// now to write a program in which given a no of no.s and and one value and we have to find out the no of triplets whose sum is less then the value given
// so for this first of all we take the input the no. of numbers
// then we take the numbers
// then the value to check for
// then we find the triplets of all the no formed
// so let's start
# include<stdio.h>
int main()
{
    int a,b,c,d,e,f,k,i,j,l,n,m,v;
    printf("Enter the no. of no.s you want to enter");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value one by one");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("now enter the value for which you want to check");
    scanf("%d",&v);
    printf("the value of no.s you have entered is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int sum;

    a=0;
    for(i=0;i<n;i++)
    {
        for(j=0;(j<n&&j!=i);j++)
        {
            for(k=0;(k<n&&k!=i&&k!=j);k++)
            {
               sum=arr[i]+arr[j]+arr[k];
               if(sum<v)
               {
                   a++;
               }
            }
        }
    }
    printf("%d",a);



}
