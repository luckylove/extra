/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*Complete the function below*/
void printDuplicates(int arr[], int n)
{
   int i,j,k,l,a,b;
   int temp1,temp2;
  // int temp;
   /*a=0;
   // first of all we have to short the array
   int temp;
   int brr[n];
   for(i=0;i<n;i++)
   {
       brr[i]=arr[i];
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(arr[i]>arr[j])
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }
   for(i=0;i<n-1;i++)
   {
       if(arr[i+1]==arr[i])
       {
           printf("%d ",arr[i]);
           a=1;
           for(j=i+2;j<n;j++)
           {
               if(arr[j]!=arr[i])
               {
                   i=j-1;
                   break;
               }
               b=j;
           }
           if(b==n-1)
           break;

       }
   }
   // the problem comes till here is that as we shorted the array
   // they are printed according to the lowest to heighest
   // but actually the ans contain the elements in the same order as given in the
   // problem statement
   if(a==0)
   printf("%d",-1);*/



   // now lets try somethink different
   a=0;
   int brr[n/2];
   int crr[n/2];
   b=0;
   for(i=0;i<n-1;i++)
   {
       if(arr[i]!=-1)
       {
           for(j=i+1;j<n;j++)
           {
               if(arr[i]==arr[j])
               {
                   a=1;
                   //duplicate element found
                   // first of all print that element
                   //printf("%d ",arr[i]);
                   // now instead of printing the think we have to store in the array
                   // brr[] and its 2nd member index to the array crr[]
                   brr[b]=arr[i];
                   crr[b]=j;
                   b++;
                   // now to avoid further printing of the same element
                   // we give all the element value -1
                   for(k=j;k<n;k++)
                   {
                       if(arr[k]==arr[i])
                       {
                           arr[k]=-1;
                       }
                   }
                   break;
               }
           }
       }
   }
   if(a==0)
   printf("%d ",-1);
   /*   for(i=0;i<b;i++)
   {
       printf("%d ",crr[i]);
   }*/
   //now again the problem come with the test cases
   // the problem is that the no which is repeated first is printed first
   // means both the no related to the repeated no comes first
   // then the other no
   // may be one of teh single of the pair no comes first
   // means we have to arrange according to the index of the second no.

   // so now first of all short the crr[] and according to it also short brr[]
   for(i=0;i<b-1;i++)
   {
       for(j=i+1;j<b;j++)
       {
         if(crr[i]>crr[j])
         {
             temp1=crr[i];
             crr[i]=crr[j];
             crr[j]=temp1;
             temp2=brr[i];
             brr[i]=brr[j];
             brr[j]=temp2;

         }
       }
   }
   for(i=0;i<b;i++)
   {
       printf("%d ",brr[i]);
   }
}
