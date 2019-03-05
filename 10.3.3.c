#include<stdio.h>
int main()
{
   int test,i,j,k,a;
   int n;
   scanf("%d",&test);
   while(test--)
   {
       scanf("%d",&n);
       long long int arr[n];
       for(i=0;i<n;i++)
       {
           scanf("%lld",&arr[i]);
       }
       a=1;
       for(i=0;i<n;i++)
       {
           if(arr[i]!=1&&arr[i]!=0)
           {
               for(j=0;j<n&&j!=i;j++)
               {
                   if(arr[j]!=1&&arr[j]!=0&&arr[j]!=arr[i])
                   {          /*
                               a=0;
                               for(k=0;k<n;k++)
                               {
                                   if(arr[k]!=0||arr[k]!=1)
                                   {
                                       if(arr[k]==arr[i]*arr[j])
                                       {
                                           a=1;
                                           break;
                                       }
                                   }
                               }
                               if(a==0)
                                break;*/
                                a=0;
                                break;
                   }

               }
               if(a==0)
                break;
           }
       }
       if(a==0)
       {
         printf("no\n");
       }
       else
       {
           printf("yes\n");
       }
   }
}

