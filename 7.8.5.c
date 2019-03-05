# include<stdio.h>
int main()
{
 int a ,b,c,d,e,j,i,k,r,g;
 int n;
 int temp;
 int index;
 int sum=0;
 //printf("Enter the no . of test cases");
 int test;
 scanf("%d",&test);
 int brr[test];
 for(k=0;k<test;k++)
   {

                // printf("Enter a no. of no. you want to enter");
                 scanf("%d",&n);
                 int arr[n];
                 //printf("Now enter the no.one by one");
                 for(i=0;i<n;i++)
                 {
                 scanf("%d",&arr[i]);
                 }
                 //printf("Now entered the value of k");
                 scanf("%d",&a);
                 // first of all we have to short the array in decending order
                 for(i=0;i<n;i++)
                 {
                     for(j=i;j<n;j++)
                     {
                         if(arr[i]<arr[j])
                         {
                             temp =arr[i];
                             arr[i]=arr[j];
                             arr[j]=temp;
                             }
                     }
                 }
                 //printf("the shorted array you entered is ");
                 //for(i=0;i<n;i++)
                 //{
                  //   printf("%d",arr[i]);
                 //}
                 // now we have to find out the index of the value till the negative no. comes

                 for(i=0;i<n;i++)
                 {
                     if(arr[i]<0)
                     {
                         index=i+1;
                            break;
                     }
                 }
                 if(a<index)
                 {
                     for(i=0;i<index;i++)
                     {
                         sum=sum+arr[i];
                     }
                 }
                 else
                 {
                     for(i=0;i<a;i++)
                     {
                         sum=sum+arr[i];
                     }
                 }
                 brr[k]=sum;
   }

   for(k=0;k<test;k++)
   {
       printf("%d\n",brr[k]);

   }
}
