# include<stdio.h>
// writing a program to find the intersection of the two shorted array
// // the array must be shorted in nature
// first of all we can take an array as an input
int main()
{
   // first of all we have to short the array
   int a,b,c,d,e,f,i,j,k,l,m,n;
   int count1,count2;
   printf("Enter the value of n and m for the array");
   scanf("%d%d",&n,&m);
   int arr1[n],arr2[m];
   if(m>n)
    e=n;
   else
    e=m;
   int brr[e];
   printf("Enter the value of the arr1");
   for(k=0;k<n;k++)
   {
       scanf("%d",&arr1[k]);
   }
   printf("Enter the value of the arr2");
   for(k=0;k<m;k++)
   {
       scanf("%d",&arr2[k]);
   }
   printf("\n");
   printf("The value of the arr1\n");
   for(k=0;k<n;k++)
   {
       printf("%d",arr1[k]);
   }
   printf("\n");
   printf("The value of the arr2\n");
   for(k=0;k<m;k++)
   {
       printf("%d",arr2[k]);
   }
   j=0;
   printf("\n");
   for(k=0;k<n;)
   {
       if(arr1[k+1]!=arr1[k])
       {
           for(i=0;i<m;i++)
           {
               if(arr2[i]==arr1[k])
               {
                   brr[j]=arr1[k];

               // printf("\t\t%d\n",brr[j]);
                j++;
                break;
               }
           }
           k++;
       }
       if(arr1[k+1]==arr1[k])
       {
           count1=1;
           // now check the no of frequency
           for(l=k;l<n;l++)
           {
               if(arr1[k]==arr1[l+1])
               {
                   count1++;
               }
           }
           //printf("y%d",count1);
           count2=0;
           // checking the same element in the arr2
           for(i=0;i<m;i++)
           {
               if(arr2[i]==arr1[k])
               {
                   count2++;
               }
           }
           if(count2!=0)
           {
               if(count1>count2)
               b=count2;
               else
                b=count1;
               for(l=0;l<b;l++)
               {
                   brr[j]=arr1[k];

              // printf("\t\t\t%d",brr[j]);
               j++;
               }
           }
           k=k+count1;
          // printf("g%d",count1);
          // printf("s%d",k);

       }
   }
   printf("The array you get is ");
   for(k=0;k<j;k++)
   {
       printf("%d",brr[k]);
   }


}
