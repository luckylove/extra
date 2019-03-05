//Given a string str, find teh longest repeating non-overlapping substring in it.
//In other words find 2 identical substrings of maximum length which do not overlap.
//If there exists more TEMPthan one such substring return any of them.
# include<stdio.h>
# include<string.h>
int main()
{
   int i,j,k,l,n,m;
   char arr[1000];
   printf("Enter the string");
   scanf("%s",arr);
   m=strlen(arr);
   printf("%d\n",m);
   printf("%s",arr);
   int count=1;
   int count1=1;
   for(i=0;i<m;i++)
   {
       for(j=i+1;j<m;j++)
       {
           // now we are checking for the same repitition of character
           if(arr[i]==arr[j])
           {
               k=i+1;
               l=j+1;
               printf("\n%c%c",arr[i],arr[j]);
               printf("\n%d%d%d%d",i,j,k,l);
               count=1;
               while(1)
               //for(k=i+1,l=j+1;k<m&&l<m;k++,l++)
               {
                   if(arr[k]==arr[l])
                   {
                       count++;
               k++;
               l++;

                   printf("\t%d",count);
                   }
                   else
                    break;
               }
                if(count1<count)
       {
           count1=count;
       }

           }

       }

   }
   printf("%d",count1);

}
