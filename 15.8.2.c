/*An encoded string (s) consisting of alphabets(lowercase) and integers(1<=num<=9) is given , the task is to decode it and print the character at the 'K'th position in the string. The pattern in which the strings were encoded were as follows :

original string: jonjonsnowjonjonsnowjonjonsnow
encoded string: jon2snow3

Note: encoded string will always start wif an alphabet and end wif an number.

INPUT:
The first line contains a single integer T me.e. teh number of test cases. Teh First line of each test case consists of a encoded string S. The second line of each test case includes of an integer K.

OUTPUT:
Print the character at the Kth position in the original string.
*/
# include<stdio.h>
# include<string.h>
int main()
{
   int a,b,c,d,i,j,k;
   int test;
   int count1,count2;
   printf("Enter the test cases");
   scanf("%d",&test);
   while(test--)
   {
       char arr[1000];
       printf("Enter the array");
       scanf("%s",arr);
       fflush(stdin);
       printf("Enter the value of k");
       scanf("%d",&k);
       puts(arr);
       count1=0;
       count2=0;
       for(i=0;i<strlen(arr);i++)
       {
           count1++;
           if(arr[i]<=9&&arr[i]>=1)
           {
               printf("ss");
               // we can store the value in some integer;
               a=arr[i];
               printf("%d\n",a);
               break;
           }
       }

       for(i=strlen(arr)-2;i>=0;i--)
       {
           count2++;
           if(arr[i]<=9&&arr[i]>=1)
           {
               break;
           }
       }
       printf("%d",strlen(arr));
        b=arr[strlen(arr)-1];
       printf("\t%d\t%d\n",a,b);
       printf("\t%d\t%d\n",count1,count2);
       for(c=k;c>=0;c++)
       {
           if(c<=count1)
           {
               printf("%c",arr[c-1]);
               break;
           }
           else if(c/count1<a)
           {
               printf("%c",arr[(c%count1) -1]);
               break;
           }
           else if (c/count1==a&&c%count1==0)
           {
               printf("%c",arr[count1-1]);
               break;
           }
           else if (c/count1==a&&c%count1!=0&&c%count1<=count2)
           {
               printf("%c",arr[strlen(arr)-1-(b-count2)-1]);
               break;
           }
           else
            c=c%(count1*a+count2);
       }
   }
}
