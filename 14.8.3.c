# include<stdio.h>
# include<string.h>

int main()
{
    // find the least index of the character of the string same or present in another string
    // take two string check one by one character and all
    int a,b,c,d,e,i,j,k;
    int count=1 , count1, count2;
    int test;
    //printf("Enter the test cases");
    scanf("%d",&test);
    char arr1[1000000],arr2[1000000];
    while(test--)
    {
    // printf("Enter two string");
     scanf("%s",arr1);
     scanf("%s",arr2);
    // printf("the string you entered is");
     //puts(arr1);
     //puts(arr2);
     count1=strlen(arr1)+1;
     for(i=0;i<strlen(arr2);i++)
     {
         count=0;
         for(j=0;j<strlen(arr1);j++)
         {

             if(arr2[i]==arr1[j])
             {
                 break;
             }
             count++;
         }
         if(count<count1)
         {
             count1=count;
         }
       //printf("\tcount1 is %d\n",count1);

     }
     if(count1>=strlen(arr1))
     {
         printf("No character present\n");
     }
     else
     {
         printf("%c\n",arr1[count1]);
     }
    }
}
